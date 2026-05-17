/*
 * XREFs of LdrpLoadDll @ 0x1800317B0
 * Callers:
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18001566C (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     LdrLoadDll @ 0x180035920 (LdrLoadDll.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D2BD4 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DB028 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, int a2, int a3, char a4, __int64 *a5)
{
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16[3]; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v18; // [rsp+58h] [rbp-A8h]
  __int16 v19; // [rsp+60h] [rbp-A0h] BYREF

  LdrpLogDllState(0LL, a1, 5288LL);
  v17 = 0x1000000;
  v19 = 0;
  v9 = (2 * (a3 & 4)) | 0x40;
  if ( (a3 & 2) == 0 )
    v9 = 2 * (a3 & 4);
  v10 = v9 | 0x80;
  if ( (a3 & 0x800000) == 0 )
    v10 = v9;
  v11 = v10 | 0x100;
  if ( (a3 & 0x1000) == 0 )
    v11 = v10;
  v12 = v11 | 0x400000;
  if ( a3 >= 0 )
    v12 = v11;
  v15 = v12;
  v18 = &v19;
  v16[0] = LdrpPreprocessDllName(a1, &v17, 0LL, &v15);
  if ( (v16[0] & 0x80000000) == 0 )
  {
    v13 = v15;
    if ( !a4 )
      v13 = v15 | 1;
    LdrpLoadDllInternal((__int64)&v17, a2, v13, 4, 0LL, 0LL, a5, (int *)v16);
  }
  LdrpLogDllState(0LL, a1, 5289LL);
  return v16[0];
}
