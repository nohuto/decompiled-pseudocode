/*
 * XREFs of GreDwmGetSurfaceData @ 0x1C00F8D58
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0023FD0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C002532C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C0026C40 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(__int64 a1, __int64 a2, struct tagDWMSURFACEDATA *a3)
{
  __int64 v6; // rdx
  SFMLOGICALSURFACE *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int SoSurfaceData; // esi
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+20h] BYREF

  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v12, ghsemSprite);
  v13 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v14, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 2568) + 96LL) == 6 )
      {
        v7 = 0LL;
        if ( a2 && (LOBYTE(v6) = 18, v8 = HmgShareLockCheck(a2, v6), (v7 = (SFMLOGICALSURFACE *)v8) != 0LL) )
        {
          v9 = v8 + 264;
          if ( v8 != -264 )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v9);
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v7, a3);
          if ( v9 )
          {
            GreReleasePushLockShared(v9);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        if ( v7 )
          DEC_SHARE_REF_CNT(v7);
      }
      else
      {
        SoSurfaceData = -1073741811;
      }
    }
    else
    {
      SoSurfaceData = -1071775733;
    }
  }
  else
  {
    SoSurfaceData = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v14);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v12);
  return SoSurfaceData;
}
