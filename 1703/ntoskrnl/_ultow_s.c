/*
 * XREFs of _ultow_s @ 0x14016EFA0
 * Callers:
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14059B8A4 (_CmCreateOrdinalInstanceKey.c)
 *     LocalConvertAclToString @ 0x1406FA724 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406FF890 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x14016F0E4 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
