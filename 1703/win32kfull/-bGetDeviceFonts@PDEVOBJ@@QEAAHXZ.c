/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20
 * Callers:
 *     GreEnumFonts @ 0x1C002C080 (GreEnumFonts.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextFaceW @ 0x1C00872D0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetCharSet @ 0x1C00E09EC (GreGetCharSet.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026B638 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0249B10 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  __int64 v2; // rcx
  signed __int32 v3; // ett
  struct PFT *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  _m_prefetchw((const void *)(v2 + 32));
  do
    v3 = *(_DWORD *)(v2 + 32);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 32), v3 | 0x40, v3) );
  PDEVOBJ::cFonts(this);
  if ( *(_DWORD *)(*(_QWORD *)this + 2120LL) )
  {
    v5 = gpPFTDevice;
    if ( !(unsigned int)DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v5, this) )
      *(_DWORD *)(*(_QWORD *)this + 2120LL) = 0;
  }
  return 1LL;
}
