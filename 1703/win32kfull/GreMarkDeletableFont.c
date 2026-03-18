/*
 * XREFs of GreMarkDeletableFont @ 0x1C000C828
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C000B83C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     UserSetFont @ 0x1C000C590 (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B4848 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     DeleteMetricsFont @ 0x1C01C3FF4 (DeleteMetricsFont.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1)
{
  __int64 v2; // rdx
  struct LFONT *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v4, a1, 0LL);
  v3 = (struct LFONT *)v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 28) & 2) == 0 )
    {
      LOBYTE(v2) = 10;
      HmgMarkDeletable(a1, v2);
    }
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
  }
}
