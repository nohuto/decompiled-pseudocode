/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x1405CF874
 * Callers:
 *     IoConnectInterruptEx @ 0x140588090 (IoConnectInterruptEx.c)
 *     IoConnectInterrupt @ 0x1405CF800 (IoConnectInterrupt.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140036394 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectInterruptFullySpecified(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        int a8,
        char a9,
        __int64 a10)
{
  int v14; // edx
  __int128 *v15; // r10
  char v16; // bl
  __int128 v17; // xmm0
  char v18; // di
  __int64 result; // rax
  char v20; // al
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // [rsp+40h] [rbp-89h]
  unsigned int v24; // [rsp+50h] [rbp-79h] BYREF
  int v25; // [rsp+54h] [rbp-75h] BYREF
  __int64 v26; // [rsp+58h] [rbp-71h] BYREF
  int v27; // [rsp+60h] [rbp-69h] BYREF
  int v28; // [rsp+68h] [rbp-61h]
  unsigned int v29; // [rsp+6Ch] [rbp-5Dh]
  unsigned __int8 v30; // [rsp+70h] [rbp-59h]
  int v31; // [rsp+74h] [rbp-55h]
  int v32; // [rsp+78h] [rbp-51h]
  __int128 v33; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v34[16]; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp-29h]
  char v36; // [rsp+A4h] [rbp-25h]

  if ( !a2 || !KeVerifyGroupAffinity(a10, 0) )
    return 3221225485LL;
  v16 = a7;
  if ( a7 )
  {
    if ( a7 >= a6 )
      goto LABEL_5;
    return 3221225485LL;
  }
  v16 = a6;
LABEL_5:
  v17 = *v15;
  v28 &= v14;
  v30 = a6;
  v18 = 1;
  v32 = a8;
  v27 = 1;
  v29 = a5;
  v33 = v17;
  result = HalGetVectorInput(a5, &v33, &v24, &v25, v34);
  if ( (int)result >= 0 )
  {
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD))off_14033B490[0])(0LL, v24);
    v21 = v25;
    if ( v20 || (unsigned int)(v25 - 3) > 1 )
    {
      v22 = v24;
      *a1 = 0LL;
      v35 = v22;
      if ( (v36 & 1) == 0 )
        v18 = a9;
      v31 = v21;
      result = IopConnectInterrupt(&v26, a2, 0LL, a3, 0, a4, v16, v18, v23, (__int64)&v27);
      if ( (int)result >= 0 )
        *a1 = v26 + 112;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
