/*
 * XREFs of vMakeInactiveHelper @ 0x1C0277D90
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0008CB0 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0008E14 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0277FAC (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02780F8 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 */

void __fastcall vMakeInactiveHelper(struct _FONTOBJ **a1)
{
  struct _FONTOBJ *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v2 = *a1;
      RFONTOBJ::bMakeInactiveHelper(&v2, 0LL);
      *a1 = 0LL;
      v2 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
    }
  }
}
