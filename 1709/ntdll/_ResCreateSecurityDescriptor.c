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

_BOOL8 __fastcall ResCreateSecurityDescriptor(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 Src; // r14
  int SecurityDescriptor; // ebx
  __int64 Heap; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  NTSTATUS v15; // eax
  ULONG v16; // eax
  int v17; // [rsp+30h] [rbp-40h] BYREF
  __int16 v18; // [rsp+34h] [rbp-3Ch]
  int v19; // [rsp+38h] [rbp-38h] BYREF
  __int16 v20; // [rsp+3Ch] [rbp-34h]
  _BYTE v21[48]; // [rsp+40h] [rbp-30h] BYREF
  int v22; // [rsp+B8h] [rbp+48h] BYREF
  __int16 v23; // [rsp+BCh] [rbp+4Ch]

  v23 = 256;
  v22 = 0;
  v19 = 0;
  v20 = 1280;
  v3 = 0LL;
  v17 = 0;
  Src = 0LL;
  v18 = 1280;
  SecurityDescriptor = 0;
  if ( a1 != 2 )
  {
    RtlSetLastWin32Error(0x32u);
    return SecurityDescriptor >= 0;
  }
  if ( !a3 )
    return 0LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(v21, 1);
  if ( SecurityDescriptor >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 12LL);
    v8 = Heap;
    if ( !Heap )
    {
      SecurityDescriptor = -1073741801;
      return SecurityDescriptor >= 0;
    }
    SecurityDescriptor = RtlInitializeSid(Heap, (__int64)&v22, 1u);
    if ( SecurityDescriptor >= 0 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      v9 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 16LL);
      v3 = v9;
      if ( v9 )
      {
        SecurityDescriptor = RtlInitializeSid(v9, (__int64)&v17, 2u);
        if ( SecurityDescriptor < 0 )
          goto LABEL_27;
        *(_DWORD *)(v3 + 8) = 32;
        *(_DWORD *)(v3 + 12) = 544;
        v10 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 12LL);
        Src = v10;
        if ( v10 )
        {
          SecurityDescriptor = RtlInitializeSid(v10, (__int64)&v19, 1u);
          if ( SecurityDescriptor < 0 )
            goto LABEL_27;
          v11 = *(unsigned __int8 *)(Src + 1);
          *(_DWORD *)(Src + 8) = 19;
          v12 = 4 * (*(unsigned __int8 *)(v8 + 1) + *(unsigned __int8 *)(v3 + 1) + v11) + 68;
          v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
          v14 = v13;
          if ( v13 )
          {
            SecurityDescriptor = RtlCreateAcl(v13, v12, 2);
            if ( SecurityDescriptor >= 0 )
            {
              SecurityDescriptor = RtlpAddKnownAce(v14, 2u, 3, 0x10000000, (unsigned __int8 *)Src, 0);
              if ( SecurityDescriptor >= 0 )
              {
                SecurityDescriptor = RtlpAddKnownAce(v14, 2u, 3, 0x10000000, (unsigned __int8 *)v3, 0);
                if ( SecurityDescriptor >= 0 )
                {
                  SecurityDescriptor = RtlpAddKnownAce(v14, 2u, 3, 0x80000000, (unsigned __int8 *)v8, 0);
                  if ( SecurityDescriptor >= 0 )
                  {
                    if ( RtlValidAcl(v14) )
                    {
                      SecurityDescriptor = RtlSetDaclSecurityDescriptor((__int64)v21, 1, v14, 0);
                      if ( SecurityDescriptor >= 0 )
                      {
                        if ( RtlValidSecurityDescriptor((__int64)v21) )
                        {
                          v15 = RtlAbsoluteToSelfRelativeSD((__int64)v21);
                          SecurityDescriptor = v15;
                          if ( v15 < 0 )
                          {
                            v16 = RtlNtStatusToDosError(v15);
                            RtlSetLastWin32Error(v16);
                          }
                        }
                        else
                        {
                          SecurityDescriptor = -1073741703;
                        }
                      }
                    }
                    else
                    {
                      SecurityDescriptor = -1073741705;
                    }
                  }
                }
              }
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
            goto LABEL_27;
          }
        }
      }
      SecurityDescriptor = -1073741801;
    }
LABEL_27:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( Src )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Src);
    if ( v3 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return SecurityDescriptor >= 0;
}
