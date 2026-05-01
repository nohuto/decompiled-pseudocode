/*
 * XREFs of ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F0FF8
 * Callers:
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180110470 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x18000B260 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180041B8C (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x18010ED28 (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x18011039C (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowCreation(int **this, HWND *a2)
{
  HWND ForegroundWindow; // rax
  CApplicationManager *v5; // rcx
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF
  struct IImmersiveMonitor *v7; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
    CApplicationManager::_MonitorFromWindow((CApplicationManager *)this, a2[1], &v7);
    (*(void (__fastcall **)(int *, HWND, _QWORD, __int64, struct IImmersiveMonitor *))(*(_QWORD *)this[66] + 24LL))(
      this[66],
      a2[1],
      *((unsigned int *)a2 + 6),
      1LL,
      v7);
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow == a2[1] )
    {
      v6[0] = this;
      v6[1] = ForegroundWindow;
      CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(this[99], (HWND)v6);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (*a2 == (HWND)26 || *a2 == (HWND)29)
      && !CApplicationManager::_HandleUncloakableWindow(
            (CApplicationManager *)this,
            (const struct CApplicationManager::HSHELL_DATA *const)a2) )
    {
      CApplicationManager::_CloakRogueWindow(v5, a2[1]);
    }
  }
  else
  {
    (*(void (__fastcall **)(int *, HWND))(*(_QWORD *)this[73] + 24LL))(this[73], a2[1]);
  }
}
