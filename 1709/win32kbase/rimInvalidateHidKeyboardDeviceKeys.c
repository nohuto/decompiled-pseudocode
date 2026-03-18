/*
 * XREFs of rimInvalidateHidKeyboardDeviceKeys @ 0x1C01134A0
 * Callers:
 *     RIMDoMobileKeyboardInvalidation @ 0x1C01014E4 (RIMDoMobileKeyboardInvalidation.c)
 *     rimProcessHidKeyboardInput @ 0x1C01135F4 (rimProcessHidKeyboardInput.c)
 * Callees:
 *     rimDispatchHidKeyboardInputData @ 0x1C0112F50 (rimDispatchHidKeyboardInputData.c)
 *     rimFillKeyboardInputData @ 0x1C0113200 (rimFillKeyboardInputData.c)
 *     rimIsHidUsageAllowedInLowPowerMode @ 0x1C0113588 (rimIsHidUsageAllowedInLowPowerMode.c)
 */

void __fastcall rimInvalidateHidKeyboardDeviceKeys(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rbp
  unsigned int i; // edi
  __int16 v9; // dx
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v7 = a1;
  *(_DWORD *)(a3 + 164) = 0;
  for ( i = 0; i < *(_DWORD *)(a3 + 292); ++i )
  {
    v9 = *(_WORD *)(a3 + 252);
    if ( v9 && (a4 || !(unsigned int)rimIsHidUsageAllowedInLowPowerMode(a3)) )
    {
      if ( (int)rimFillKeyboardInputData(
                  a1,
                  (__int64)&v10,
                  v9,
                  (_WORD *)(a3 + 2 * (*(unsigned int *)(a3 + 164) + 62LL))) < 0 )
        return;
      a1 = *(unsigned int *)(a3 + 336);
      *(_WORD *)(a3 + 2 * a1 + 296) = *(_WORD *)(a3 + 2LL * *(unsigned int *)(a3 + 164) + 124);
      ++*(_DWORD *)(a3 + 336);
      ++*(_DWORD *)(a3 + 164);
      *(_WORD *)(a3 + 252) = 0;
    }
  }
  rimDispatchHidKeyboardInputData(v7, a2, a3);
  *(_DWORD *)(a3 + 356) = 1;
}
