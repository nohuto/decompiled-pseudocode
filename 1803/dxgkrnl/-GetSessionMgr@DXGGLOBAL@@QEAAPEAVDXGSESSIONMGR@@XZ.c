/*
 * XREFs of ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C00FA0E4
 * Callers:
 *     DxgkReferenceCurrentSessionDwmProcess @ 0x1C0001B70 (DxgkReferenceCurrentSessionDwmProcess.c)
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1C000D87C (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C000E730 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C000E7F0 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00126F0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0013F40 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 * Callees:
 *     <none>
 */

struct DXGSESSIONMGR *__fastcall DXGGLOBAL::GetSessionMgr(DXGGLOBAL *this)
{
  return (struct DXGSESSIONMGR *)*((_QWORD *)this + 74);
}
