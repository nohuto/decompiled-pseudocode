/*
 * XREFs of ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C71C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 408), a2, a3);
}
