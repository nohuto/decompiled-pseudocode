/*
 * XREFs of ?UpdateDisplayId@CBaseRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x1801A0000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBaseRenderTarget::UpdateDisplayId(__int64 a1, int a2)
{
  bool v2; // zf

  v2 = *(_DWORD *)(a1 + 116) == a2;
  *(_DWORD *)(a1 + 116) = a2;
  return !v2;
}
