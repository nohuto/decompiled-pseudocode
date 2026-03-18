/*
 * XREFs of GreGetTextMetricsW @ 0x1C000C4B4
 * Callers:
 *     _GetTextMetricsW @ 0x1C000C444 (_GetTextMetricsW.c)
 *     NtGdiGetTextMetricsW @ 0x1C008A220 (NtGdiGetTextMetricsW.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 *     DT_InitDrawTextInfo @ 0x1C023A078 (DT_InitDrawTextInfo.c)
 * Callees:
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C000C504 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, struct _TMW_INTERNAL *a2)
{
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v8 = 0LL;
    v5 = RFONTOBJ::bInit((RFONTOBJ *)&v8, (struct XDCOBJ *)v7, 0, 2u);
    v6 = v8;
    if ( v5 )
      GreAcquireSemaphore(*(_QWORD *)(v8 + 528));
    if ( v6 )
    {
      vGetTextMetrics((struct RFONTOBJ *)&v8, (struct DCOBJ *)v7, a2);
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v3;
}
