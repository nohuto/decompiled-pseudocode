/*
 * XREFs of ?SetMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18010B720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetMonitorOverride(CApplicationManager *this, struct IImmersiveMonitor *a2)
{
  HWND v4; // rdx
  PSRWLOCK v5; // rcx
  void *v7; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  CApplicationManager::_IWMFromWindow(
    (CApplicationManager *)((char *)this - 184),
    v4,
    &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
    &v7);
  (*(void (__fastcall **)(void *, __int64, _QWORD, struct IImmersiveMonitor *))(*(_QWORD *)v7 + 24LL))(
    v7,
    1LL,
    *((unsigned int *)this + 160),
    a2);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( a2 )
  {
    LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
    Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)&v5[6], (__int64)a2);
    v5 = CApplicationManagerUtility::g_pIAMGlobals;
  }
  else
  {
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
  }
  ReleaseSRWLockExclusive(v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
