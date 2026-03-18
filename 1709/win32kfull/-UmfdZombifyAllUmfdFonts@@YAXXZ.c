/*
 * XREFs of ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00FE0AC
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00FDFCC (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7B8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _lambda_e4459ade3bcd7fb5ab4b4d20e93e54c8_::operator() @ 0x1C00FE1CC (_lambda_e4459ade3bcd7fb5ab4b4d20e93e54c8_--operator().c)
 */

void UmfdZombifyAllUmfdFonts(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  struct PDEV *i; // r8
  struct RFONT *j; // rax
  __int64 v4; // r9
  struct RFONT *k; // rax
  __int64 v6; // r9
  struct PDEV *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v7 = (struct PDEV *)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  GreAcquireFastMutex(ghfmMemory);
  lambda_e4459ade3bcd7fb5ab4b4d20e93e54c8_::operator()(v0, gpPFTPublic);
  lambda_e4459ade3bcd7fb5ab4b4d20e93e54c8_::operator()(v1, gpPFTPrivate);
  GreReleaseFastMutex(ghfmMemory);
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
  v9 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v8 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v7 = i;
    if ( !i )
      break;
    if ( (*((_DWORD *)i + 8) & 1) != 0 )
    {
      for ( j = PDEVOBJ::prfntActive((PDEVOBJ *)&v7); j; j = (struct RFONT *)*((_QWORD *)j + 63) )
      {
        if ( *((_QWORD *)j + 10) == v4 )
          *((_QWORD *)j + 7) = 0LL;
      }
      for ( k = PDEVOBJ::prfntInactive((PDEVOBJ *)&v7); k; k = (struct RFONT *)*((_QWORD *)k + 63) )
      {
        if ( *((_QWORD *)k + 10) == v6 )
          *((_QWORD *)k + 7) = 0LL;
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
}
