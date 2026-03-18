/*
 * XREFs of bUnloadEudcFont @ 0x1C003EFC4
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C0040B50 (bDeleteAllFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00BEF54 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0273F4C (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0274498 (bDeleteFlEntry.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0039D0C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C003BF58 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00405F0 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0040A90 (prfntDeactivateEudcRFONTs.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  char *v8; // rcx
  __int64 v9; // rsi
  struct _FONTOBJ *i; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID v14[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v16; // [rsp+78h] [rbp+28h] BYREF
  struct _FONTOBJ *v17; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16, 0x20Au);
  v2 = 0;
  if ( v16 )
  {
    v17 = *(struct _FONTOBJ **)a1;
    if ( (int)StringCchCopyW((char *)v16, 261LL, *(char **)(*(_QWORD *)&v17->iUniq + 24LL)) >= 0 )
    {
      v5 = 0LL;
      if ( (dword_1C0327C04 & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
        goto LABEL_5;
      v8 = (char *)&unk_1C0324A4C;
      v4 = 7LL;
      do
      {
        if ( *((_DWORD *)v8 - 31) && *(_WORD *)v8 && *(_QWORD *)(v8 + 524) == *(_QWORD *)a1 )
          v5 = 1LL;
        v8 += 664;
        --v4;
      }
      while ( v4 );
      if ( !(_DWORD)v5 )
      {
LABEL_5:
        PFEOBJ::vFreePql((PFEOBJ *)&v17, v5, v4);
        v17 = *(struct _FONTOBJ **)(a1 + 8);
        if ( v17 )
          PFEOBJ::vFreePql((PFEOBJ *)&v17, v6, v7);
        v9 = prfntDeactivateEudcRFONTs(a1);
        for ( i = (struct _FONTOBJ *)v9; v9; i = (struct _FONTOBJ *)v9 )
        {
          v9 = *(_QWORD *)(v9 + 504);
          v14[0] = i[1].pvProducer;
          v17 = i;
          memset(v15, 0, sizeof(v15));
          PushThreadGuardedObject(v15, i, vRestartKillEudcRFONTs);
          RFONTOBJ::vDeleteRFONT(&v17, 0LL, (struct PFFOBJ *)v14, 1);
          PopThreadGuardedObject(v15);
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17, v12, v13);
        }
      }
      if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v8, v16) )
        v2 = 1;
    }
    Win32FreePool(v16, v3, v4);
  }
  return v2;
}
