/*
 * XREFs of RtlCheckSandboxedToken @ 0x18005B8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x1800558B0 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180057420 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180057480 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1800574E0 (RtlCreateSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x180057730 (RtlAddMandatoryAce.c)
 *     RtlSetSaclSecurityDescriptor @ 0x18005B850 (RtlSetSaclSecurityDescriptor.c)
 *     RtlFreeSid @ 0x18005BC00 (RtlFreeSid.c)
 *     RtlAllocateAndInitializeSid @ 0x18005BC40 (RtlAllocateAndInitializeSid.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A00C0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A04E0 (NtQueryInformationToken.c)
 *     NtOpenThreadToken @ 0x1800A0540 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x1800A0900 (NtDuplicateToken.c)
 *     NtOpenProcessToken @ 0x1800A2490 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(HANDLE a1, bool *a2)
{
  HANDLE v3; // r14
  int v4; // ebx
  int v5; // eax
  __int64 Heap; // rax
  unsigned __int64 v7; // rsi
  int v8; // edx
  int v9; // edx
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v12; // [rsp+64h] [rbp-9Ch]
  int v13; // [rsp+68h] [rbp-98h] BYREF
  __int16 v14; // [rsp+6Ch] [rbp-94h]
  HANDLE v15; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h] BYREF
  int v17; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+84h] [rbp-7Ch] BYREF
  int v19; // [rsp+88h] [rbp-78h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v22[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v23[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  int v24; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  _DWORD *v29; // [rsp+D0h] [rbp-30h]
  _BYTE v30[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v31[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v32; // [rsp+108h] [rbp+8h]
  _BYTE v33[56]; // [rsp+110h] [rbp+10h] BYREF

  v12 = 4096;
  v11 = 0;
  v13 = 0;
  v3 = a1;
  v14 = 1280;
  v4 = 0;
  v15 = 0LL;
  *a2 = 0;
  v16 = 0LL;
  v20 = 0LL;
  if ( a1 )
  {
    v15 = a1;
  }
  else
  {
    v5 = NtOpenThreadToken(-2LL, 8LL, 0LL, &v15);
    a1 = v15;
    v4 = v5;
  }
  if ( !a1 )
  {
    if ( v4 == -1073741700 )
    {
      v4 = NtOpenProcessToken(-1LL, 10LL, &Handle);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v29 = v31;
      v24 = 48;
      v25 = 0LL;
      v27 = 0;
      v26 = 0LL;
      v28 = 0LL;
      v31[0] = 12;
      v31[1] = 2;
      v32 = 1;
      v4 = NtDuplicateToken(Handle, 12LL, &v24, 0LL, 2, &v15);
      NtClose(Handle);
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_8;
  }
  v4 = NtQueryInformationToken(a1, 9LL, &v17, 4LL, v22);
  if ( v4 >= 0 )
  {
    if ( v17 >= 2 )
    {
LABEL_8:
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
      v7 = Heap;
      if ( Heap )
      {
        RtlCreateAcl(Heap, 0x20u, 2);
        LOBYTE(v8) = 1;
        v4 = RtlAllocateAndInitializeSid((unsigned int)&v11, v8, 0x2000, 0, 0, 0, 0, 0, 0, 0, (__int64)&v20);
        if ( v4 >= 0 )
        {
          LOBYTE(v9) = 1;
          v4 = RtlAllocateAndInitializeSid((unsigned int)&v13, v9, 18, 0, 0, 0, 0, 0, 0, 0, (__int64)&v16);
          if ( v4 >= 0 )
          {
            RtlAddMandatoryAce(v7, 2u, 0, v20, 17, 2);
            RtlCreateSecurityDescriptor(v30, 1);
            RtlSetSaclSecurityDescriptor((__int64)v30, 1, v7, 0);
            RtlSetOwnerSecurityDescriptor((__int64)v30, v16, 0);
            RtlSetGroupSecurityDescriptor((__int64)v30, v16, 0);
            v18 = 56;
            v4 = ZwAccessCheck(v30, v15, 0x20000LL, &RtlpRestrictedMapping, v33, &v18, v23, &v19);
            if ( v4 >= 0 )
              *a2 = v19 < 0;
          }
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        if ( v20 )
          RtlFreeSid();
        if ( v16 )
          RtlFreeSid();
      }
      else
      {
        v4 = -1073741801;
      }
      goto LABEL_17;
    }
    v4 = -1073741659;
  }
LABEL_17:
  if ( !v3 && v15 )
    NtClose(v15);
  return (unsigned int)v4;
}
