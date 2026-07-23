/*
 * XREFs of sub_18008CB8C @ 0x18008CB8C
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C720 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180047C00 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x18004A330 (RtlCreateSecurityDescriptor.c)
 *     RtlSetControlSecurityDescriptor @ 0x180088730 (RtlSetControlSecurityDescriptor.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18008CB8C(_QWORD *a1, ACL **a2)
{
  PVOID Heap; // rax
  void *v5; // rdi
  NTSTATUS SecurityDescriptor; // ebx
  ACL *v7; // rax
  ACL *v8; // rbx
  int Acl; // esi
  ACL *v10; // r8
  __int64 result; // rax
  __int16 Sid; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+32h] [rbp-36h]
  __int16 v14; // [rsp+36h] [rbp-32h]
  int v15; // [rsp+38h] [rbp-30h]

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v5 = Heap;
  if ( !Heap )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Heap, 1u);
  if ( SecurityDescriptor >= 0 )
  {
    v13 = 0;
    v14 = 1280;
    Sid = 257;
    v15 = 18;
    v7 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1CuLL);
    v8 = v7;
    if ( v7 )
    {
      Acl = RtlCreateAcl(v7, 0x1Cu, 2u);
      if ( Acl >= 0 )
      {
        Acl = sub_180044698(v8, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Sid, 0);
        v10 = v8;
        if ( Acl < 0 )
        {
LABEL_12:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
          SecurityDescriptor = Acl;
          goto LABEL_13;
        }
        Acl = RtlSetDaclSecurityDescriptor(v5, 1u, v8, 0);
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
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return (unsigned int)SecurityDescriptor;
}
