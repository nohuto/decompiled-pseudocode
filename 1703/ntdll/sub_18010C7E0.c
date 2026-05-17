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

_BOOL8 __fastcall sub_18010C7E0(int a1, __int64 a2, __int64 a3)
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
  char *v14; // rsi
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
          v14 = (char *)v13;
          if ( v13 )
          {
            SecurityDescriptor = RtlCreateAcl(v13, v12, 2);
            if ( SecurityDescriptor >= 0 )
            {
              SecurityDescriptor = sub_180044698(v14, 2u, 3, 0x10000000, (unsigned __int8 *)Src, 0);
              if ( SecurityDescriptor >= 0 )
              {
                SecurityDescriptor = sub_180044698(v14, 2u, 3, 0x10000000, (unsigned __int8 *)v3, 0);
                if ( SecurityDescriptor >= 0 )
                {
                  SecurityDescriptor = sub_180044698(v14, 2u, 3, 0x80000000, (unsigned __int8 *)v8, 0);
                  if ( SecurityDescriptor >= 0 )
                  {
                    if ( RtlValidAcl((__int64)v14) )
                    {
                      SecurityDescriptor = RtlSetDaclSecurityDescriptor((__int64)v21, 1, (__int64)v14, 0);
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
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v14);
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
