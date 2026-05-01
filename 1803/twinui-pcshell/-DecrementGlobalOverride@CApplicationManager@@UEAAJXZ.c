/*
 * XREFs of ?DecrementGlobalOverride@CApplicationManager@@UEAAJXZ @ 0x180106590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::DecrementGlobalOverride(CApplicationManager *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  HWND v5; // rdx
  void *v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = -2147024891;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *((_DWORD *)this + 154);
  if ( v3 )
  {
    v4 = v3 - 1;
    *((_DWORD *)this + 154) = v4;
    if ( !v4 )
    {
      HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 1;
      v7 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
      CApplicationManager::_IWMFromWindow(
        (CApplicationManager *)((char *)this - 184),
        v5,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v7);
      (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 2LL, *((unsigned int *)this + 160));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    }
    v2 = 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v2;
}
