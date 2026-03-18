/*
 * XREFs of vMakeInactiveHelper @ 0x1C0274768
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0110194 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0123C54 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C027497C (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C0274AC8 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 */

void __fastcall vMakeInactiveHelper(struct _FONTOBJ **a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _FONTOBJ *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v4 = *a1;
      RFONTOBJ::bMakeInactiveHelper(&v4, 0LL);
      *a1 = 0LL;
      v4 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4, v2, v3);
    }
  }
}
