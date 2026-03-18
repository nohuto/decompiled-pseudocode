/*
 * XREFs of _InitializeTouchInjection @ 0x1C01B83A8
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C01DC140 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C01A7168 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01A7350 (GetQDCActivePathsData.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01B7434 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01B8424 (_InitializeTouchInjectionWithQDCData.c)
 */

__int64 __fastcall InitializeTouchInjection(unsigned int a1, unsigned int a2, __int64 a3)
{
  _QWORD *v6; // rdi
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  CheckCurrentInjectionConfiguration();
  v6 = v9;
  if ( (int)GetQDCActivePathsData(v9) < 0 )
    v6 = 0LL;
  v7 = InitializeTouchInjectionWithQDCData(a1, a2, a3, v6);
  FreeQDCActivePathsData(v6);
  return v7;
}
