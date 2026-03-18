/*
 * XREFs of DxgkGetUseHWGPUInRemoteSession @ 0x1C0104A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

char __fastcall DxgkGetUseHWGPUInRemoteSession(__int64 a1)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v4; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 73);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId, v4);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
    LOBYTE(SessionDataForSpecifiedSession) = *((_BYTE *)SessionDataForSpecifiedSession + 18490);
  return (char)SessionDataForSpecifiedSession;
}
