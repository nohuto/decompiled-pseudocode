/*
 * XREFs of DxgkReferenceCurrentSessionDwmProcess @ 0x1C0001B70
 * Callers:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0001AB8 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C004B2C0 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C004B620 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BA98 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0001C34 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00E2B30 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C00FA0E4 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

__int64 __fastcall DxgkReferenceCurrentSessionDwmProcess(struct _EPROCESS **a1)
{
  unsigned int v2; // ebx
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  DXGSESSIONDATA *SessionData; // rax

  v2 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  SessionData = DXGSESSIONMGR::GetSessionData(SessionMgr);
  if ( SessionData )
    return (unsigned int)DXGSESSIONDATA::ReferenceDwmProcess(SessionData, a1);
  return v2;
}
