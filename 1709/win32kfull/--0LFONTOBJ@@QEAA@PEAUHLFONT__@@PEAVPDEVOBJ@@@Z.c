/*
 * XREFs of ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0008138 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00384F8 (GreGetOutlineTextMetricsInternalW.c)
 *     cjCopyFontDataW @ 0x1C003AEDC (cjCopyFontDataW.c)
 *     GreMarkDeletableFont @ 0x1C00822BC (GreMarkDeletableFont.c)
 *     GreGetCharSet @ 0x1C00B0B68 (GreGetCharSet.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00B25A8 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     FinishStockFontInit @ 0x1C00C02A0 (FinishStockFontInit.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C0109FA0 (NtGdiQueryFontAssocInfo.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C0137F18 (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026A3B0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028366C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, struct PDEVOBJ *a3)
{
  struct HLFONT__ *v3; // rsi
  struct HLFONT__ *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 HDEV; // rbx
  int v11; // edi
  __int64 v12; // rdx
  struct PDEVOBJ *v13; // rax
  _QWORD *v14; // rcx
  int v15; // edi
  int v16; // edi
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = 10;
  v7 = HmgShareLock(v5, a2);
  *(_QWORD *)this = v7;
  if ( v7 && (*(_DWORD *)(v7 + 28) & 1) != 0 )
  {
    HDEV = UserGetHDEV(v8);
    v11 = *(_DWORD *)(*(_QWORD *)this + 24LL);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)this);
    *(_QWORD *)this = 0LL;
    v13 = (struct PDEVOBJ *)&v17;
    v17 = HDEV;
    if ( a3 )
      v13 = a3;
    v14 = *(_QWORD **)v13;
    if ( *(_QWORD *)v13 )
    {
      v15 = v11 - 4;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v3 = (struct HLFONT__ *)v14[182];
        }
        else
        {
          v3 = (struct HLFONT__ *)v14[181];
        }
      }
      else
      {
        v3 = (struct HLFONT__ *)v14[180];
      }
      LOBYTE(v12) = 10;
      *(_QWORD *)this = HmgShareLock(v3, v12);
    }
  }
  return this;
}
