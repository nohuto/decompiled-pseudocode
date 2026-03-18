/*
 * XREFs of ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00A6B30
 * Callers:
 *     <none>
 * Callees:
 *     DpiSessionCreateCallback @ 0x1C00A6BA0 (DpiSessionCreateCallback.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00DD9F8 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00DDAE8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  unsigned int Callback; // ebx
  __int64 HostSilo; // rax
  __int64 v4; // rsi
  DXGSESSIONMGR *v5; // rcx

  Callback = 0;
  HostSilo = PsGetHostSilo();
  v4 = PsAttachSiloToCurrentThread(HostSilo);
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( a1 )
  {
    if ( a1 == 1 )
      DXGSESSIONMGR::DestroySession(v5);
  }
  else
  {
    DXGSESSIONMGR::CreateSession(v5);
    Callback = DpiSessionCreateCallback();
  }
  PsDetachSiloFromCurrentThread(v4);
  return Callback;
}
