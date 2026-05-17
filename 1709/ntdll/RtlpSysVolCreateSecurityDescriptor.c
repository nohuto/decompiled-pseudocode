/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x18008AB7C
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008A8F0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180053DD0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800558B0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1800574E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetControlSecurityDescriptor @ 0x180086A70 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(unsigned __int64 *a1, __int64 *a2)
{
  _BYTE *Heap; // rax
  unsigned __int64 v5; // rdi
  int SecurityDescriptor; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  int Acl; // esi
  unsigned __int64 v10; // r8
  __int64 result; // rax
  __int16 Src; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+32h] [rbp-36h]
  __int16 v14; // [rsp+36h] [rbp-32h]
  int v15; // [rsp+38h] [rbp-30h]

  Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v5 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Heap, 1);
  if ( SecurityDescriptor >= 0 )
  {
    v13 = 0;
    v14 = 1280;
    Src = 257;
    v15 = 18;
    v7 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 28LL);
    v8 = v7;
    if ( v7 )
    {
      Acl = RtlCreateAcl(v7, 0x1Cu, 2);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v8, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Src, 0);
        v10 = v8;
        if ( Acl < 0 )
        {
LABEL_12:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
          SecurityDescriptor = Acl;
          goto LABEL_13;
        }
        Acl = RtlSetDaclSecurityDescriptor(v5, 1, v8, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlSetControlSecurityDescriptor(v5, 0x1000u, 0x1000u);
          if ( Acl >= 0 )
          {
            *a1 = v5;
            result = 0LL;
            *a2 = v8;
            return result;
          }
        }
      }
      v10 = v8;
      goto LABEL_12;
    }
    SecurityDescriptor = -1073741670;
  }
LABEL_13:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return (unsigned int)SecurityDescriptor;
}
