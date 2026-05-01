/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18000F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x180006D70 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x180015800 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A528 (-IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OnMessage(
        CDelayIAMOperations **this,
        int a2,
        CApplicationManagerUtility *a3,
        int a4,
        bool *a5)
{
  bool v5; // si
  struct CDelayIAMOperations::COperation *v10; // rax
  struct CDelayIAMOperations::COperation *v11; // rbx
  struct CDelayIAMOperations::COperation *v12; // rbx
  int IsWindowServiceSupported; // eax
  bool v14; // bl
  HWND v16; // [rsp+20h] [rbp-B8h] BYREF
  GUID iid; // [rsp+28h] [rbp-B0h] BYREF
  WCHAR Buffer[40]; // [rsp+40h] [rbp-98h] BYREF

  v5 = 0;
  if ( CApplicationManager::_uMsgWindowServiceRegister == a2 || CApplicationManager::_uMsgWindowServiceUnregister == a2 )
  {
    v5 = 1;
    if ( GlobalGetAtomNameW(a4, Buffer, 40)
      && IIDFromString(Buffer, &iid) >= 0
      && (unsigned int)GetWindowBand(a3, &v16)
      && (((_DWORD)v16 == 1 || (_DWORD)v16 == 8) && (_DWORD)v16 != 1
       || CApplicationManagerUtility::IsModernAppWindow(a3, (HWND)(unsigned int)v16))
      && !GetWindow((HWND)a3, 4u) )
    {
      IsWindowServiceSupported = CoreIsWindowServiceSupported(a3, &iid);
      v14 = CApplicationManager::_uMsgWindowServiceRegister == a2;
      if ( IsWindowServiceSupported >= 0 == v14 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_WindowServiceAvailabilityChanged((CApplicationManager *)(this - 20), (HWND)a3, &iid, v14);
LABEL_19:
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
    }
  }
  else
  {
    if ( a2 == 1025 )
    {
      v5 = 1;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v10 = CDelayIAMOperations::RemoveOperation(this[71], a4);
      v11 = v10;
      if ( v10 )
      {
        (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v10 + 8LL))(v10);
        (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v11)(v11, 1LL);
      }
      goto LABEL_19;
    }
    if ( a2 == 1026 )
    {
      v5 = 1;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v12 = CDelayIAMOperations::RemoveOperation(this[71], a4);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v12 )
      {
        (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v12 + 8LL))(v12);
        (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v12)(v12, 1LL);
      }
    }
  }
  *a5 = v5;
  return 0LL;
}
