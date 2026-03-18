/*
 * XREFs of bUnloadEudcFont @ 0x1C0008B20
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C0008754 (-CleanUpEUDC@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C00088FC (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0277328 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0277580 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0277AC4 (bDeleteFlEntry.c)
 * Callees:
 *     prfntDeactivateEudcRFONTs @ 0x1C0008BFC (prfntDeactivateEudcRFONTs.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C002A42C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C002CAF8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002DCAC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C003019C (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 *a1)
{
  unsigned int v2; // edi
  int v3; // edx
  char *v4; // rcx
  __int64 v5; // rsi
  __int64 i; // r14
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v11, 0x20Au);
  v2 = 0;
  if ( v11 )
  {
    v12 = *a1;
    if ( (int)StringCchCopyW(v11, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)v12 + 24LL)) >= 0 )
    {
      v3 = 0;
      if ( (dword_1C032C964 & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
        goto LABEL_5;
      v4 = (char *)&unk_1C03275EC;
      v8 = 7LL;
      do
      {
        if ( *((_DWORD *)v4 - 31) && *(_WORD *)v4 && *(_QWORD *)(v4 + 524) == *a1 )
          v3 = 1;
        v4 += 664;
        --v8;
      }
      while ( v8 );
      if ( !v3 )
      {
LABEL_5:
        PFEOBJ::vFreePql((PFEOBJ *)&v12);
        v12 = a1[1];
        if ( v12 )
          PFEOBJ::vFreePql((PFEOBJ *)&v12);
        v5 = prfntDeactivateEudcRFONTs(a1);
        for ( i = v5; v5; i = v5 )
        {
          v5 = *(_QWORD *)(v5 + 504);
          v9 = *(_QWORD *)(i + 120);
          v12 = i;
          memset(v10, 0, sizeof(v10));
          PushThreadGuardedObject(v10, i, vRestartKillEudcRFONTs);
          RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v12, 0LL, (struct PFFOBJ *)&v9, 1);
          PopThreadGuardedObject(v10);
          v12 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
        }
      }
      if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v4, v11) )
        v2 = 1;
    }
    Win32FreePool(v11);
  }
  return v2;
}
