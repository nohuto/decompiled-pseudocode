/*
 * XREFs of ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801534B4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CActionCenterExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x1801531C9 (_Microsoft--WRL--Details--MakeAndInitialize_CActionCenterExperienceManager_IInspect_ea_1801531C9.c)
 * Callees:
 *     ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18007C390 (-Release@CActionCenterExperienceManager@@UEAAKXZ.c)
 */

CActionCenterExperienceManager *__fastcall Microsoft::WRL::ComPtr<CActionCenterExperienceManager>::~ComPtr<CActionCenterExperienceManager>(
        CActionCenterExperienceManager **a1)
{
  CActionCenterExperienceManager *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CActionCenterExperienceManager *)CActionCenterExperienceManager::Release(result);
  }
  return result;
}
