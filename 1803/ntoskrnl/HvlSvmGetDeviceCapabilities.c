/*
 * XREFs of HvlSvmGetDeviceCapabilities @ 0x14022AFB0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmGetDeviceCapabilities(int a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _DWORD *v5; // r14
  unsigned __int16 v6; // bx
  int v7; // edx
  int v8; // ecx
  PHYSICAL_ADDRESS v10[3]; // [rsp+20h] [rbp-98h] BYREF
  PHYSICAL_ADDRESS v11[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v12; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+80h] [rbp-38h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = (_QWORD *)HvlpAcquireHypercallPage(v10, 1, (__int64)&v12, 16LL);
  v5 = (_DWORD *)HvlpAcquireHypercallPage(v11, 2, (__int64)v13, 16LL);
  v4[1] = 0LL;
  *v4 = 0x4000000000000000LL;
  *(_DWORD *)v4 = a1;
  *((_DWORD *)v4 + 2) = 0;
  v6 = HvcallCodeVa();
  if ( !v6 )
  {
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ *v5) & 1;
    v7 = *(_DWORD *)a2 ^ ((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)*v5) & 2;
    *(_DWORD *)a2 = v7;
    v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*v5) & 4;
    *(_DWORD *)a2 = v8;
    *(_DWORD *)a2 = *v5 ^ (v8 ^ *v5) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = v5[1];
    *(_DWORD *)(a2 + 8) = v5[2];
  }
  HvlpReleaseHypercallPage((__int64)v10);
  HvlpReleaseHypercallPage((__int64)v11);
  return HvlpHvToNtStatus(v6);
}
