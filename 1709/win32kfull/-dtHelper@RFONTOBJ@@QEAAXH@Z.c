/*
 * XREFs of ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0034B80
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_dtHelperWrap @ 0x1C0144E70 (RFONTOBJ_dtHelperWrap.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0035490 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtHelper(RFONTOBJ *this, int a2)
{
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  __int64 j; // rdi
  __int64 v9; // rcx
  HSEMAPHORE v10; // rcx
  int v11; // eax
  __int64 i; // rdi
  __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
  v4 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  if ( (v4 & 0x80u) != 0 && (v4 & 0x100) == 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    if ( v9 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v9 + 528)) )
      {
        v15 = *(_QWORD *)(*(_QWORD *)this + 728LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v15);
        v10 = ghsemEUDC1;
        *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x80u;
        GreAcquireSemaphore(v10);
        --gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v15);
      }
    }
  }
  v5 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  if ( (v5 & 1) != 0 )
  {
    if ( (v5 & 0x100) == 0 )
    {
      v6 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v6 > 0x20 )
      {
        v11 = v6 - 1;
        for ( i = v11; i >= 0; --i )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i) )
          {
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i);
            RFONTOBJ::vReleaseCache((RFONTOBJ *)&v17);
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v17);
          }
        }
      }
      else
      {
        v7 = v6 - 1;
        for ( j = v7; j >= 0; --j )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * *(unsigned __int8 *)(*(_QWORD *)this + j + 864)) )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL)
                            + 8LL * *(unsigned __int8 *)(*(_QWORD *)this + j + 864));
            RFONTOBJ::vReleaseCache((RFONTOBJ *)&v16);
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v16);
          }
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)this + 744LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v13);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v13);
      }
      if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)this + 736LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v14);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v14);
      }
    }
    if ( a2 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= 0xFFFFFEFE;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
}
