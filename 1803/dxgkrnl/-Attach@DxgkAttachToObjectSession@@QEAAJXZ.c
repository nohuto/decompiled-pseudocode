/*
 * XREFs of ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1C000D87C
 * Callers:
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C000D800 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C00FA0E4 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C01D0000 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkAttachToObjectSession::Attach(DxgkAttachToObjectSession *this)
{
  unsigned int v1; // ebp
  int v3; // edi
  __int64 CurrentProcess; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax

  v1 = *((_DWORD *)this + 4);
  v3 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    v3 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v1, (struct _KPROCESS **)this + 1);
    if ( v3 >= 0 )
    {
      KeStackAttachProcess(*((PRKPROCESS *)this + 1), (PRKAPC_STATE)((char *)this + 24));
      *(_BYTE *)this = 1;
    }
  }
  return (unsigned int)v3;
}
