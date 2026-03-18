/*
 * XREFs of ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C01CF980
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01CECD4 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01CF698 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C01F0304 (DpiSessionCreateCallback.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  unsigned int Callback; // ebx
  __int64 HostSilo; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rcx

  Callback = 0;
  HostSilo = PsGetHostSilo();
  v4 = PsAttachSiloToCurrentThread(HostSilo);
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v5) + 74);
  if ( a1 )
  {
    if ( a1 == 1 )
      DXGSESSIONMGR::DestroySession(v6);
  }
  else
  {
    DXGSESSIONMGR::CreateSession(v6);
    Callback = DpiSessionCreateCallback();
  }
  PsDetachSiloFromCurrentThread(v4);
  return Callback;
}
