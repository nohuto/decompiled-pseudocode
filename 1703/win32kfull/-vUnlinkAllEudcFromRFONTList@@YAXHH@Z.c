/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0008CB0
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C00088FC (bDeleteAllFlEntry.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0032694 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00326B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C0277D90 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTList()
{
  struct PDEV *i; // rdi
  struct RFONT *v1; // rbx
  struct RFONT *v2; // rbx
  unsigned int j; // esi
  struct RFONT *v4; // rcx
  unsigned int k; // esi
  struct RFONT *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  struct PDEV *v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8[0] = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v7 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v9 = i;
    v1 = PDEVOBJ::prfntActive((PDEVOBJ *)&v9);
    if ( v1 )
    {
      v10 = 0LL;
      do
      {
        vMakeInactiveHelper((char *)v1 + 736);
        if ( *((_QWORD *)v1 + 93) )
          vMakeInactiveHelper((char *)v1 + 744);
        if ( *((_QWORD *)v1 + 94) )
        {
          for ( j = 0; j < *((_DWORD *)v1 + 212); ++j )
            vMakeInactiveHelper(*((_QWORD *)v1 + 94) + 8LL * j);
          v4 = (struct RFONT *)*((_QWORD *)v1 + 94);
          if ( v4 != (struct RFONT *)((char *)v1 + 760) )
            Win32FreePool(v4);
          *(_QWORD *)((char *)v1 + 844) = 0LL;
          *((_QWORD *)v1 + 94) = 0LL;
          *((_DWORD *)v1 + 210) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v1 + 14) + 128LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
        v1 = (struct RFONT *)*((_QWORD *)v1 + 63);
      }
      while ( v1 );
    }
    v2 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v9);
    if ( v2 )
    {
      v9 = 0LL;
      do
      {
        vMakeInactiveHelper((char *)v2 + 736);
        if ( *((_QWORD *)v2 + 93) )
          vMakeInactiveHelper((char *)v2 + 744);
        if ( *((_QWORD *)v2 + 94) )
        {
          for ( k = 0; k < *((_DWORD *)v2 + 212); ++k )
            vMakeInactiveHelper(*((_QWORD *)v2 + 94) + 8LL * k);
          v6 = (struct RFONT *)*((_QWORD *)v2 + 94);
          if ( v6 != (struct RFONT *)((char *)v2 + 760) )
            Win32FreePool(v6);
          *(_QWORD *)((char *)v2 + 844) = 0LL;
          *((_QWORD *)v2 + 94) = 0LL;
          *((_DWORD *)v2 + 210) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v2 + 14) + 128LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
        v2 = (struct RFONT *)*((_QWORD *)v2 + 63);
      }
      while ( v2 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
  SEMOBJ::vUnlock((SEMOBJ *)v8);
}
