/*
 * XREFs of ?IncrementGlobalOverride@CApplicationManager@@UEAAJXZ @ 0x180108210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IncrementGlobalOverride(CApplicationManager *this)
{
  HWND v2; // rdx
  void *v4; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( ++*((_DWORD *)this + 154) == 1 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
    CApplicationManager::_IWMFromWindow(
      (CApplicationManager *)((char *)this - 184),
      v2,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v4);
    (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, 1LL, *((unsigned int *)this + 160));
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
