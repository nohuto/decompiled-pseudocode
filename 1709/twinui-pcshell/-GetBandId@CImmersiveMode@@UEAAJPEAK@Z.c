/*
 * XREFs of ?GetBandId@CImmersiveMode@@UEAAJPEAK@Z @ 0x180031F20
 * Callers:
 *     ?GetBandId@CImmersiveMode@@WBI@EAAJPEAK@Z @ 0x180034B90 (-GetBandId@CImmersiveMode@@WBI@EAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::GetBandId(CImmersiveMode *this, unsigned int *a2)
{
  RTL_SRWLOCK *v4; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = *((_DWORD *)this + 44);
  ReleaseSRWLockShared(v4);
  return 0LL;
}
