/*
 * XREFs of _ultow_s @ 0x14018D640
 * Callers:
 *     _CmCreateOrdinalInstanceKey @ 0x1405D3828 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     LocalConvertAclToString @ 0x140795A60 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14079AB78 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x14018D798 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
