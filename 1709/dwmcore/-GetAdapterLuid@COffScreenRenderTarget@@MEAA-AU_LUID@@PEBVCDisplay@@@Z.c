/*
 * XREFs of ?GetAdapterLuid@COffScreenRenderTarget@@MEAA?AU_LUID@@PEBVCDisplay@@@Z @ 0x1800C1200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall COffScreenRenderTarget::GetAdapterLuid(
        COffScreenRenderTarget *this,
        const struct CDisplay *a2,
        __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)(a3 + 224);
  return (struct _LUID)a2;
}
