/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x1C00A0840
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1C00A08C0 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00A0F50 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0 (AcquireCriticalSectionAndCheckState.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetOPMRandomNumber(void *a1, __int64 a2)
{
  __int64 result; // rax
  COPM *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int RandomNumber; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  _DXGKMDT_OPM_RANDOM_NUMBER v12; // [rsp+20h] [rbp-28h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v6 = 0;
  if ( (int)result >= 0 )
  {
    RandomNumber = COPM::GetRandomNumber(v5, a1, &v12);
    if ( RandomNumber >= 0 )
      RandomNumber = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v12);
    UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
    if ( RandomNumber < 0 )
      return (unsigned int)RandomNumber;
    return v6;
  }
  return result;
}
