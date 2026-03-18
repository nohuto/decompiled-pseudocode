/*
 * XREFs of DxgkBeginTopologyTransition @ 0x1C00FA440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkBeginTopologyTransition(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(a1) + 131);
  return 0LL;
}
