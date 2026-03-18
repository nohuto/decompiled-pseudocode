/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00BA7C8
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00B8F70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0131CB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0132370 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C028D620 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngTransparentBlt @ 0x1C028F060 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
