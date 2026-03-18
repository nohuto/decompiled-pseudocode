/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00392BC
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0038A38 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0038B08 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0039204 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00393D4 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C0131520 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02997CC (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C029989C (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C0299960 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00B63CC (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(PRKAPC_STATE ApcState, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct PFFOBJ *v5; // rsi
  __int64 v6; // rcx
  struct PDEV *v7; // rbx
  unsigned int v8; // r10d
  struct _FONTFILEVIEW **v9; // r11
  struct _FONTFILEVIEW *v10; // rcx
  int v11; // eax
  __int64 ProcessServerSilo; // rax
  unsigned int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]
  void *v16[3]; // [rsp+30h] [rbp-28h] BYREF

  ApcState[1].ApcListHead[0].Blink = 0LL;
  LODWORD(ApcState[1].ApcListHead[1].Flink) = 0;
  v5 = (struct PFFOBJ *)a2;
  BYTE4(ApcState[1].ApcListHead[1].Flink) = 0;
  v6 = *(_QWORD *)a2;
  v7 = *(struct PDEV **)(*(_QWORD *)a2 + 88LL);
  if ( (*((_DWORD *)v7 + 8) & 0x2000) != 0 )
  {
    if ( v7 == qword_1C0334158 )
    {
      v8 = *(_DWORD *)(v6 + 36);
      if ( v8 <= 3 )
      {
        a2 = 0LL;
        if ( v8 )
        {
          v9 = *(struct _FONTFILEVIEW ***)(v6 + 152);
          while ( 1 )
          {
            v10 = v9[a2];
            v11 = *((_DWORD *)v10 + 10);
            if ( (v11 & 0x10) == 0 && (v11 & 8) != 0 && !*((_QWORD *)v10 + 6) )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= v8 )
              goto LABEL_8;
          }
          memset(v16, 0, sizeof(v16));
          *(_QWORD *)v14 = 0LL;
          v15 = 0;
          if ( MapFontFiles(v8, v9, v16, v14) )
          {
            ApcState[1].ApcListHead[0].Blink = *(struct _LIST_ENTRY **)(*(_QWORD *)v5 + 152LL);
            LODWORD(ApcState[1].ApcListHead[1].Flink) = *(_DWORD *)(*(_QWORD *)v5 + 36LL);
          }
        }
      }
    }
LABEL_8:
    if ( (*((_DWORD *)v7 + 8) & 0x2000) != 0 && v7 != qword_1C0334158 )
    {
      BYTE4(ApcState[1].ApcListHead[1].Flink) = 1;
      ProcessServerSilo = PsGetProcessServerSilo(gpepCSRSS, a2, a3, a4);
      ApcState[1].ApcListHead[0].Flink = (struct _LIST_ENTRY *)PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(gpepCSRSS, ApcState);
    }
  }
  return (ATTACHOBJ *)ApcState;
}
