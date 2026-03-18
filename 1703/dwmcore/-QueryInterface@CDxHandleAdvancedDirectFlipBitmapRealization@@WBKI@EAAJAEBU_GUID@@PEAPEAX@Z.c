/*
 * XREFs of ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6850
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
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 424), a2, a3);
}
