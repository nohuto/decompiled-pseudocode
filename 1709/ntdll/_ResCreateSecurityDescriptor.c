/*
 * XREFs of _ResCreateSecurityDescriptor @ 0x18010F7D8
 * Callers:
 *     _CreateSecureFileMapping @ 0x18010EE74 (_CreateSecureFileMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlValidSecurityDescriptor @ 0x18002D560 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180053DD0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800558B0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1800574E0 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x18006FDB0 (RtlAbsoluteToSelfRelativeSD.c)
 */

_BOOL8 __fastcall ResCreateSecurityDescriptor(int a1, void *a2, ULONG *a3)
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
              Acl = RtlpAddKnownAce(v16, 2u, 3, 0x10000000, Sid, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v16, 2u, 3, 0x10000000, v5, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlpAddKnownAce(v16, 2u, 3, 0x80000000, v10, 0);
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
