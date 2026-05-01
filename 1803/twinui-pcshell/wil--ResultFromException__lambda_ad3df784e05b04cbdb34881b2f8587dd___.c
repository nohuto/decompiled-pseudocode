/*
 * XREFs of wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___ @ 0x1801AB93C
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B31DC (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$emplace_back@AEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801F73A8 (--$emplace_back@AEAV-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  wil *v3; // rcx
  __int64 result; // rax

  try
  {
    v2 = *a1 + 36;
    AcquireSRWLockExclusive(v2);
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> &>(
      &(*a1)[33],
      a1[1]);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v3);
  }
  return result;
}
