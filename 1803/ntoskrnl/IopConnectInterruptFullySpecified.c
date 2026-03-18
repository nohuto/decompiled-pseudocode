/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x14064EA64
 * Callers:
 *     IoConnectInterruptEx @ 0x14060BA60 (IoConnectInterruptEx.c)
 *     IoConnectInterrupt @ 0x14064E9F0 (IoConnectInterrupt.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140004C4C (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectInterruptFullySpecified(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64 a1, __int64 a2),
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        int a8,
        char a9,
        __int128 *a10)
{
  __int128 v14; // xmm0
  char v15; // r15
  char v16; // bl
  __int64 result; // rax
  char v18; // al
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // [rsp+48h] [rbp-89h]
  unsigned int v22; // [rsp+58h] [rbp-79h] BYREF
  int v23; // [rsp+5Ch] [rbp-75h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  _DWORD v25[4]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int8 v26; // [rsp+78h] [rbp-59h]
  int v27; // [rsp+7Ch] [rbp-55h]
  int v28; // [rsp+80h] [rbp-51h]
  __int128 v29; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v30[16]; // [rsp+98h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp-29h]
  char v32; // [rsp+ACh] [rbp-25h]

  if ( !a2 || !KeVerifyGroupAffinity((__int64)a10, 0) || a7 && a7 < a6 )
    return 3221225485LL;
  v14 = *a10;
  v15 = a6;
  if ( a7 )
    v15 = a7;
  v26 = a6;
  v25[2] = 0;
  v16 = 1;
  v28 = a8;
  v25[0] = 1;
  v25[3] = a5;
  v29 = v14;
  result = HalGetVectorInput(a5, &v29, &v22, &v23, v30);
  if ( (int)result >= 0 )
  {
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140398860[0])(0LL, v22);
    v19 = v23;
    if ( v18 || (unsigned int)(v23 - 3) > 1 )
    {
      v20 = v22;
      *a1 = 0LL;
      v31 = v20;
      if ( (v32 & 1) == 0 )
        v16 = a9;
      v27 = v19;
      result = IopConnectInterrupt(&v24, a2, 0LL, a3, 0, a4, v15, v16, v21, (__int64)v25);
      if ( (int)result >= 0 )
        *a1 = v24 + 112;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
