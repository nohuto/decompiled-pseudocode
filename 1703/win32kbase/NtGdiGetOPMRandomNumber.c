/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x1C00EE5A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00E8930 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1C00ECBA0 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00EDAE8 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 */

__int64 __fastcall NtGdiGetOPMRandomNumber(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 result; // rax
  COPM *v6; // rcx
  unsigned int v7; // ebx
  int RandomNumber; // edi
  _DXGKMDT_OPM_RANDOM_NUMBER v9; // [rsp+20h] [rbp-28h] BYREF

  result = AcquireCriticalSectionAndCheckState(a1, (__int64)a2, a3);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    RandomNumber = COPM::GetRandomNumber(v6, a1, &v9);
    if ( RandomNumber >= 0 )
      RandomNumber = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v9);
    UserSessionSwitchLeaveCrit();
    if ( RandomNumber < 0 )
      return (unsigned int)RandomNumber;
    return v7;
  }
  return result;
}
