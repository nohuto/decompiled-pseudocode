/*
 * XREFs of MiSessionObjectCreate @ 0x14060A7FC
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     KeGetSchedulingGroupSize @ 0x1400A6DD8 (KeGetSchedulingGroupSize.c)
 *     KeInsertSchedulingGroup @ 0x1400A7684 (KeInsertSchedulingGroup.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
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
              v8 = ObCreateObjectEx(0, MmSessionObjectType, (int)v17, 0, (__int64)Src, 40, 0, 0, &Event, 0LL);
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
                  result = ObInsertObjectEx(v9, 0LL, 1LL, 0, 0, 0LL, &v16);
                  v11 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 0x40u;
                    _InterlockedAdd((volatile signed __int32 *)(v7 + 12), 1u);
                    *(_QWORD *)(v7 + 80) = v16;
                    *(_QWORD *)(v7 + 72) = Event;
                    *(_DWORD *)(v7 + 8272) = 2;
                    *(_DWORD *)(v7 + 8276) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 8280), SynchronizationEvent, 1u);
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
