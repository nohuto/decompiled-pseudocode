/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0123C54
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C0040B50 (bDeleteAllFlEntry.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7B8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vMakeInactiveHelper @ 0x1C0274768 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTList()
{
  struct PDEV *i; // rdi
  struct RFONT *v1; // rbx
  struct RFONT *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int j; // esi
  struct RFONT *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int k; // esi
  struct RFONT *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF
  struct PDEV *v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v11 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v13 = i;
    v1 = PDEVOBJ::prfntActive((PDEVOBJ *)&v13);
    if ( v1 )
    {
      v14 = 0LL;
      do
      {
        vMakeInactiveHelper((char *)v1 + 736);
        if ( *((_QWORD *)v1 + 93) )
          vMakeInactiveHelper((char *)v1 + 744);
        if ( *((_QWORD *)v1 + 94) )
        {
          for ( j = 0; j < *((_DWORD *)v1 + 212); ++j )
            vMakeInactiveHelper(*((_QWORD *)v1 + 94) + 8LL * j);
          v6 = (struct RFONT *)*((_QWORD *)v1 + 94);
          if ( v6 != (struct RFONT *)((char *)v1 + 760) )
            Win32FreePool(v6, v3, v4);
          *(_QWORD *)((char *)v1 + 844) = 0LL;
          *((_QWORD *)v1 + 94) = 0LL;
          *((_DWORD *)v1 + 210) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v1 + 14) + 128LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14, v3, v4);
        v1 = (struct RFONT *)*((_QWORD *)v1 + 63);
      }
      while ( v1 );
    }
    v2 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v13);
    if ( v2 )
    {
      v13 = 0LL;
      do
      {
        vMakeInactiveHelper((char *)v2 + 736);
        if ( *((_QWORD *)v2 + 93) )
          vMakeInactiveHelper((char *)v2 + 744);
        if ( *((_QWORD *)v2 + 94) )
        {
          for ( k = 0; k < *((_DWORD *)v2 + 212); ++k )
            vMakeInactiveHelper(*((_QWORD *)v2 + 94) + 8LL * k);
          v10 = (struct RFONT *)*((_QWORD *)v2 + 94);
          if ( v10 != (struct RFONT *)((char *)v2 + 760) )
            Win32FreePool(v10, v7, v8);
          *(_QWORD *)((char *)v2 + 844) = 0LL;
          *((_QWORD *)v2 + 94) = 0LL;
          *((_DWORD *)v2 + 210) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v2 + 14) + 128LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13, v7, v8);
        v2 = (struct RFONT *)*((_QWORD *)v2 + 63);
      }
      while ( v2 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
  SEMOBJ::vUnlock((SEMOBJ *)v12);
}
