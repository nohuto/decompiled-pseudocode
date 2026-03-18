/*
 * XREFs of MiSessionObjectCreate @ 0x1405B4ABC
 * Callers:
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeInsertSchedulingGroup @ 0x1400D17B8 (KeInsertSchedulingGroup.c)
 *     KeGetSchedulingGroupSize @ 0x1400D2E10 (KeGetSchedulingGroupSize.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 */

int MiSessionObjectCreate()
{
  int result; // eax
  ULONG v1; // ebx
  ULONG v2; // edi
  ACL *PoolWithTag; // rax
  ACL *v4; // rbx
  int Acl; // edi
  ACL *v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // esi
  PRKEVENT v9; // rbx
  struct _KEVENT *v10; // rcx
  int v11; // ebx
  unsigned int SchedulingGroupSize; // eax
  struct _LIST_ENTRY *v13; // rax
  void *Src; // [rsp+28h] [rbp-E0h]
  PRKEVENT Event; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v17[3]; // [rsp+70h] [rbp-98h] BYREF
  int v18; // [rsp+88h] [rbp-80h]
  _BYTE *v19; // [rsp+90h] [rbp-78h]
  __int64 v20; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+B0h] [rbp-58h] BYREF
  wchar_t pszDest[128]; // [rsp+D8h] [rbp-30h] BYREF

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v1 = RtlLengthSid(SeAliasAdminsSid);
    v2 = v1 + RtlLengthSid(SeLocalSystemSid) + 32;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x6C636144u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    Acl = RtlCreateAcl(PoolWithTag, v2, 2u);
    v6 = v4;
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v4, 2u, 0, 983043, (unsigned __int8 *)SeAliasAdminsSid, 0);
      v6 = v4;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v4, 2u, 0, 983043, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
            v8 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(v7 + 8));
            if ( v8 < 0 )
            {
              ExFreePoolWithTag(v4, 0);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, pszDest);
              v17[2] = &DestinationString;
              LODWORD(v17[0]) = 48;
              v19 = SecurityDescriptor;
              v17[1] = 0LL;
              v18 = 512;
              v20 = 0LL;
              v8 = ObCreateObjectEx(0, MmSessionObjectType, (__int64)v17, 0, (__int64)Src, 40, 0, 0, &Event, 0LL);
              ExFreePoolWithTag(v4, 0);
              if ( v8 >= 0 )
              {
                v9 = Event;
                v10 = Event;
                *(_QWORD *)&Event[1].Header.Lock = v7;
                KeInitializeEvent(v10, NotificationEvent, 0);
                v9[1].Header.WaitListHead.Flink = 0LL;
                if ( !PsCpuFairShareEnabled || !*(_DWORD *)(v7 + 8) )
                  goto LABEL_10;
                SchedulingGroupSize = KeGetSchedulingGroupSize();
                v13 = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                              NonPagedPoolNxCacheAligned,
                                              SchedulingGroupSize,
                                              0x70724753u);
                v9[1].Header.WaitListHead.Flink = v13;
                if ( v13 )
                {
                  KeInsertSchedulingGroup((__int64)v13, 5LL, 0LL);
LABEL_10:
                  result = ObInsertObjectEx(v9, 0LL, 1u, 0, 0, 0LL, (unsigned __int64 *)&v16);
                  v11 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 0x40u;
                    _InterlockedAdd((volatile signed __int32 *)(v7 + 12), 1u);
                    *(_QWORD *)(v7 + 80) = v16;
                    *(_QWORD *)(v7 + 72) = Event;
                    *(_DWORD *)(v7 + 8144) = 2;
                    *(_DWORD *)(v7 + 8148) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 8152), SynchronizationEvent, 1u);
                    return v11;
                  }
                  return result;
                }
                ObfDereferenceObject(v9);
                return -1073741670;
              }
            }
            return v8;
          }
        }
        v6 = v4;
      }
    }
    ExFreePoolWithTag(v6, 0);
    return Acl;
  }
  return result;
}
