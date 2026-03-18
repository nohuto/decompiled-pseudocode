/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1C00D243C
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x1C00141B0 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00D2460 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(const struct _D3DKMT_CLOSEADAPTER *a1)
{
  return DxgkCloseAdapter(a1, 0);
}
