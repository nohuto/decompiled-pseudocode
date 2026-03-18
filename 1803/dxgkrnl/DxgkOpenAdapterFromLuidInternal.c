/*
 * XREFs of DxgkOpenAdapterFromLuidInternal @ 0x1C00D8E88
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0014244 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C00D8EB8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidInternal(struct _D3DKMT_OPENADAPTERFROMLUID *a1)
{
  return DxgkOpenAdapterFromLuidImpl(a1, 0);
}
