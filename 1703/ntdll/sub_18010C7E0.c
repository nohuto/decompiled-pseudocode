/*
 * XREFs of sub_18010C7E0 @ 0x18010C7E0
 * Callers:
 *     sub_18010BE7C @ 0x18010BE7C (sub_18010BE7C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlValidSecurityDescriptor @ 0x180046E20 (RtlValidSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180047C00 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x18004A330 (RtlCreateSecurityDescriptor.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800765E0 (RtlAbsoluteToSelfRelativeSD.c)
 */

_BOOL8 __fastcall sub_18010C7E0(int a1, void *a2, ULONG *a3)
{
  unsigned __int8 *v5; // rdi
  unsigned __int8 *Sid; // r14
  int Acl; // ebx
  unsigned __int8 *Heap; // rax
  unsigned __int8 *v10; // r15
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rax
  int v13; // ecx
  ULONG v14; // ebx
  ACL *v15; // rax
  ACL *v16; // rsi
  int v17; // eax
  LONG v18; // eax
  _SID_IDENTIFIER_AUTHORITY v19; // [rsp+30h] [rbp-40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v20; // [rsp+38h] [rbp-38h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-30h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B8h] [rbp+48h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v20.Value = 0;
  *(_WORD *)&v20.Value[4] = 1280;
  v5 = 0LL;
  *(_DWORD *)v19.Value = 0;
  Sid = 0LL;
  *(_WORD *)&v19.Value[4] = 1280;
  Acl = 0;
  if ( a1 != 2 )
  {
    RtlSetLastWin32Error(50);
    return Acl >= 0;
  }
  if ( !a3 )
    return 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    Heap = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xCuLL);
    v10 = Heap;
    if ( !Heap )
    {
      Acl = -1073741801;
      return Acl >= 0;
    }
    Acl = RtlInitializeSid(Heap, &IdentifierAuthority, 1u);
    if ( Acl >= 0 )
    {
      *((_DWORD *)v10 + 2) = 0;
      v11 = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
      v5 = v11;
      if ( v11 )
      {
        Acl = RtlInitializeSid(v11, &v19, 2u);
        if ( Acl < 0 )
          goto LABEL_27;
        *((_DWORD *)v5 + 2) = 32;
        *((_DWORD *)v5 + 3) = 544;
        v12 = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xCuLL);
        Sid = v12;
        if ( v12 )
        {
          Acl = RtlInitializeSid(v12, &v20, 1u);
          if ( Acl < 0 )
            goto LABEL_27;
          v13 = Sid[1];
          *((_DWORD *)Sid + 2) = 19;
          v14 = 4 * (v10[1] + v5[1] + v13) + 68;
          v15 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
          v16 = v15;
          if ( v15 )
          {
            Acl = RtlCreateAcl(v15, v14, 2u);
            if ( Acl >= 0 )
            {
              Acl = sub_180044698(v16, 2u, 3, 0x10000000, Sid, 0);
              if ( Acl >= 0 )
              {
                Acl = sub_180044698(v16, 2u, 3, 0x10000000, v5, 0);
                if ( Acl >= 0 )
                {
                  Acl = sub_180044698(v16, 2u, 3, 0x80000000, v10, 0);
                  if ( Acl >= 0 )
                  {
                    if ( RtlValidAcl(v16) )
                    {
                      Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v16, 0);
                      if ( Acl >= 0 )
                      {
                        if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                        {
                          v17 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, a2, a3);
                          Acl = v17;
                          if ( v17 < 0 )
                          {
                            v18 = RtlNtStatusToDosError(v17);
                            RtlSetLastWin32Error(v18);
                          }
                        }
                        else
                        {
                          Acl = -1073741703;
                        }
                      }
                    }
                    else
                    {
                      Acl = -1073741705;
                    }
                  }
                }
              }
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
            goto LABEL_27;
          }
        }
      }
      Acl = -1073741801;
    }
LABEL_27:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    if ( Sid )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Sid);
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return Acl >= 0;
}
