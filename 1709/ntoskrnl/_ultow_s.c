/*
 * XREFs of _ultow_s @ 0x1401637A0
 * Callers:
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D6894 (_CmCreateOrdinalInstanceKey.c)
 *     LocalConvertAclToString @ 0x14073215C (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1407372E0 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1401638E4 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
