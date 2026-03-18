/*
 * XREFs of ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C02832B8
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z @ 0x1C0283858 (-pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z.c)
 *     NtGdiGetFontFileData @ 0x1C0294500 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vClosePrintKView@@YAXXZ @ 0x1C0283CAC (-vClosePrintKView@@YAXXZ.c)
 */

int __fastcall MapFontFileInKernel(PVOID Section, PVOID *MappedBase)
{
  int result; // eax
  ULONG_PTR ViewSize; // [rsp+38h] [rbp+10h] BYREF

  *MappedBase = 0LL;
  ViewSize = 0LL;
  result = MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  if ( result < 0 )
  {
    vClosePrintKView();
    return MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  }
  return result;
}
