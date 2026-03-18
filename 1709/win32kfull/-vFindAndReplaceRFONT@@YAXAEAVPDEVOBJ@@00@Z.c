/*
 * XREFs of ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C02797C8
 * Callers:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0277128 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02795C0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7B8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vFindAndReplaceRFONT(struct PDEVOBJ *this, struct PDEVOBJ *a2, struct PDEVOBJ *a3)
{
  struct RFONT *i; // r9
  struct RFONT *j; // r8
  struct RFONT *k; // r8
  struct RFONT *m; // r8
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = PDEVOBJ::prfntActive(this); i; i = (struct RFONT *)*((_QWORD *)i + 63) )
  {
    if ( *((_QWORD *)i + 10) == *(_QWORD *)a2 )
      *((_QWORD *)i + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)i + 12) == *(_QWORD *)a2 )
      *((_QWORD *)i + 12) = *(_QWORD *)a3;
  }
  for ( j = PDEVOBJ::prfntInactive(this); j; j = (struct RFONT *)*((_QWORD *)j + 63) )
  {
    if ( *((_QWORD *)j + 10) == *(_QWORD *)a2 )
      *((_QWORD *)j + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)j + 12) == *(_QWORD *)a2 )
      *((_QWORD *)j + 12) = *(_QWORD *)a3;
  }
  for ( k = PDEVOBJ::prfntActive(this); k; k = (struct RFONT *)*((_QWORD *)k + 65) )
  {
    if ( *((_QWORD *)k + 10) == *(_QWORD *)a2 )
      *((_QWORD *)k + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)k + 12) == *(_QWORD *)a2 )
      *((_QWORD *)k + 12) = *(_QWORD *)a3;
  }
  for ( m = PDEVOBJ::prfntInactive(this); m; m = (struct RFONT *)*((_QWORD *)m + 65) )
  {
    if ( *((_QWORD *)m + 10) == *(_QWORD *)a2 )
      *((_QWORD *)m + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)m + 12) == *(_QWORD *)a2 )
      *((_QWORD *)m + 12) = *(_QWORD *)a3;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
