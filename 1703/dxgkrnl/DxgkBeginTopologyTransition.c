/*
 * XREFs of DxgkBeginTopologyTransition @ 0x1C00A63C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 DxgkBeginTopologyTransition()
{
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 131);
  return 0LL;
}
