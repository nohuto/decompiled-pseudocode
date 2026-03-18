/*
 * XREFs of ?GetMaxStackCount@CNaturalAnimation@@UEBAIXZ @ 0x1800D6350
 * Callers:
 *     __scrt_dllmain_after_initialize_c @ 0x1800DAD14 (__scrt_dllmain_after_initialize_c.c)
 *     ?AddRef@?$LocalMILObject@VCMILBrushBitmap@@@@GDA@EAAKXZ @ 0x1800DD600 (-AddRef@-$LocalMILObject@VCMILBrushBitmap@@@@GDA@EAAKXZ.c)
 *     ?Release@?$LocalMILObject@VCMILBrushSolid@@@@GBI@EAAKXZ @ 0x1800DDCF0 (-Release@-$LocalMILObject@VCMILBrushSolid@@@@GBI@EAAKXZ.c)
 *     ?AddRef@CHwSolidBrush@@WBA@EAAKXZ @ 0x1800DE560 (-AddRef@CHwSolidBrush@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimation::GetMaxStackCount(CNaturalAnimation *this)
{
  return 1LL;
}
