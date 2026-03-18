/*
 * XREFs of ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return CColorKeyBitmap::QueryInterface((CMILCOMBase *)(a1 - 408), a2, a3);
}
