/*
 * XREFs of ?SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18002E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002A680 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::SwitchToLastActiveApp(
        CImmersiveWindowManager *this,
        struct IImmersiveMonitor *a2)
{
  signed int v3; // ebx
  __int64 *v4; // rax
  HWND v5; // rdx
  CApplicationManagerUtility *LastActiveVisiblePopupOrSelf; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  CApplicationManagerUtility *v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = -2147319765;
  v9 = 0LL;
  v10 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_BYTE *)this + 97) )
  {
    if ( *((_QWORD *)this + 9) )
    {
      v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v9);
      v3 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 8))(
             **((_QWORD **)this + 8),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             v4);
      if ( v3 >= 0 )
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, CApplicationManagerUtility **))(*(_QWORD *)v9 + 312LL))(
               v9,
               0LL,
               &v10);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(v10, v5);
    v3 = !SetForegroundWindow((HWND)LastActiveVisiblePopupOrSelf) ? 0x80070005 : 0;
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v3;
}
