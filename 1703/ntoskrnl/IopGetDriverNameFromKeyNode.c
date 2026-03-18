/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x1404D98B8
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     PiGetDefaultMessageString @ 0x1405AD2F8 (PiGetDefaultMessageString.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407F6E38 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x1407F6F4C (PnpLoadBootFilterDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     ZwQueryKey @ 0x14017E200 (ZwQueryKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int16 *PoolWithTagPriority; // rax
  unsigned __int16 *v8; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 v12; // bx
  wchar_t *PoolWithTag; // rax
  const WCHAR *v14; // rdx
  _WORD *v16; // r10
  unsigned __int16 v17; // cx
  __int16 *v18; // r8
  int i; // r9d
  __int16 v20; // ax
  unsigned __int16 *v21; // rax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h]

  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) > 2u && *((_DWORD *)P + 1) == 1 )
    {
      v16 = P;
      v17 = *((_WORD *)P + 6) - 2;
      Destination->Length = v17;
      Destination->MaximumLength = v4[6];
      v18 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = v17 >> 1; i; --i )
      {
        v20 = *v18++;
        *v16++ = v20;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_36;
  }
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) )
    {
      v5 = *((unsigned int *)P + 2);
      *(_QWORD *)&Source.Length = L"\\Driver\\";
      v6 = *(_DWORD *)((char *)P + v5);
      if ( v6 == 2 || (LODWORD(P) = 16, v6 == 8) )
      {
        LODWORD(P) = 24;
        *(_QWORD *)&Source.Length = L"\\FileSystem\\";
      }
      Length = 164;
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                                    NonPagedPoolNx,
                                                    0xA4uLL,
                                                    0x20206F49u,
                                                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA4uLL, 0x20206F49u);
      v8 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, PoolWithTagPriority, Length, &Length);
        v10 = v9;
        if ( v9 != -2147483643 && v9 != -1073741789 )
        {
LABEL_11:
          if ( v10 < 0 )
          {
            ExFreePoolWithTag(v8, 0);
          }
          else
          {
            v11 = (_DWORD)P + *((_DWORD *)v8 + 3);
            if ( v11 >= (unsigned int)P )
            {
              v12 = (_WORD)P + v8[6];
              if ( ViVerifierDriverAddedThunkListHead )
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTagPriority(
                                           NonPagedPoolNx,
                                           (unsigned __int16)v11,
                                           0x20206F49u,
                                           (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
              else
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v11, 0x20206F49u);
              Destination->Buffer = PoolWithTag;
              if ( PoolWithTag )
              {
                v14 = *(const WCHAR **)&Source.Length;
                Destination->Length = 0;
                Destination->MaximumLength = v12;
                RtlAppendUnicodeToString(Destination, v14);
                Source.Length = v8[6];
                Source.MaximumLength = Source.Length;
                Source.Buffer = v8 + 8;
                RtlAppendUnicodeStringToString(Destination, &Source);
                ExFreePoolWithTag(v8, 0);
                ExFreePoolWithTag(v4, 0);
                return 0LL;
              }
              ExFreePoolWithTag(v8, 0);
              goto LABEL_35;
            }
            ExFreePoolWithTag(v8, 0);
            v10 = -1073741675;
          }
LABEL_36:
          ExFreePoolWithTag(v4, 0);
          return (unsigned int)v10;
        }
        ExFreePoolWithTag(v8, 0);
        if ( ViVerifierDriverAddedThunkListHead )
          v21 = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                      NonPagedPoolNx,
                                      Length,
                                      0x20206F49u,
                                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        else
          v21 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x20206F49u);
        v8 = v21;
        if ( v21 )
        {
          v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, v21, Length, &Length);
          goto LABEL_11;
        }
      }
LABEL_35:
      v10 = -1073741670;
      goto LABEL_36;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
