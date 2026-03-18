/*
 * XREFs of ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026B638
 * Callers:
 *     NtGdiGetDCDword @ 0x1C00DB740 (NtGdiGetDCDword.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0089D10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall dwGetFontLanguageInfo(struct XDCOBJ *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  struct PFE *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  struct _POINTL v8; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  struct LFONT *v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0x8000;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v12 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 32) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v12);
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v11,
      *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 176LL),
      (struct PDEVOBJ *)&v12);
    if ( v11 )
    {
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v7 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v4 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v11, a1, &v10, (__int64)&v8, &v9, 0);
        if ( v4 )
        {
          v5 = *((_QWORD *)v4 + 4);
          v2 = *(_DWORD *)(v5 + 164) != 0 ? 8 : 0;
          if ( (*(_DWORD *)(v5 + 48) & 0x80000001) != 0 )
            v2 |= 0x40000u;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v7);
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
    }
  }
  return v2;
}
