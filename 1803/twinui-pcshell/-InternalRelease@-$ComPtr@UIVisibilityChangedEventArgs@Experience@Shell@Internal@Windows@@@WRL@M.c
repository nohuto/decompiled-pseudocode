/*
 * XREFs of ?InternalRelease@?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007E1E4
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18007B970 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ??1?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9F68 (--1-$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1801583DC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x1801652DC (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CVisibilityChangedEventArgs@@UEAAKXZ @ 0x18007E2F0 (-Release@CVisibilityChangedEventArgs@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs>::InternalRelease(
        CVisibilityChangedEventArgs **a1)
{
  unsigned int result; // eax
  CVisibilityChangedEventArgs *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CVisibilityChangedEventArgs::Release )
      return CVisibilityChangedEventArgs::Release(v3);
    else
      return v4();
  }
  return result;
}
