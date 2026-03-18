/*
 * XREFs of RtlpGetRegistryHandle @ 0x140556BB8
 * Callers:
 *     RtlCheckRegistryKey @ 0x140556210 (RtlCheckRegistryKey.c)
 *     RtlWriteRegistryValue @ 0x140556350 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1405579AC (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A5EB4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405A60DC (RtlSetActiveTimeBias.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1405A62E0 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlDeleteRegistryValue @ 0x1405CF770 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1405D6120 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406EB080 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404C0410 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  unsigned int v7; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v10; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v12; // eax
  struct _KPRCB *v13; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v15; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING KeyPath; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  v7 = a1;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
    return 0LL;
  }
  else
  {
    if ( a1 < 0 )
      v7 = a1 & 0x7FFFFFFF;
    if ( v7 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v10 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v10 )
        goto LABEL_6;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v10 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v10
        || (Size = L->Size,
            AllocateEx = L->AllocateEx,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v10 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
      {
LABEL_6:
        *(_DWORD *)v10 = CurrentPrcb->Number;
      }
      Destination.Buffer = v10;
      if ( v10 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !v7 )
          goto LABEL_13;
        if ( v7 == 5 && RtlFormatCurrentUserKeyPath(&KeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &KeyPath);
          RtlFreeUnicodeString(&KeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_13:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v12 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v12 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v12;
            }
          }
        }
        v13 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v15 = v13->PPLookasideList[8].P;
        ++v15->TotalFrees;
        if ( LOWORD(v15->ListHead.Alignment) < v15->Depth
          || (++v15->FreeMisses,
              v15 = v13->PPLookasideList[8].L,
              ++v15->TotalFrees,
              LOWORD(v15->ListHead.Alignment) < v15->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v15->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v15->FreeMisses;
          ((void (__fastcall *)(wchar_t *))v15->FreeEx)(Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
