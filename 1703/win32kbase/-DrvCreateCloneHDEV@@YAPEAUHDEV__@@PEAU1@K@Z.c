/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C002ED50 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C005C120 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C005C160 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00E936C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00EABEC (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

PDEV *__fastcall DrvCreateCloneHDEV(PDEV *a1, __int64 a2)
{
  __int64 v3; // rax
  PDEV *v4; // rdi
  __int64 v5; // rcx
  PDEV *v6; // rbx
  _QWORD *v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  struct HOBJ__ **v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  PDEV *v15; // [rsp+60h] [rbp+8h] BYREF
  PDEV *v16; // [rsp+70h] [rbp+18h] BYREF
  char v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  *(_QWORD *)(v3 + 32) = 1LL;
  WdLogEvent5_WdEvent(v3);
  v16 = a1;
  v4 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v17, (struct PDEVOBJ *)&v16);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v15, (char *)a1);
  v6 = v15;
  if ( v15 )
  {
    v7 = PALLOCMEM2(0xA00uLL, 1886221383LL, 1);
    if ( v7 && (int)IsbSpEnableSpritesSupported() >= 0 && (unsigned int)bSpEnableSprites(v6) )
    {
      if ( (int)IsvEnableSynchronizeSupported() >= 0 )
        vEnableSynchronize(v6);
      v8 = (unsigned int)ghbrGrayPattern;
      v7[10] = v7 + 70;
      *((_DWORD *)v7 + 150) = 0;
      *(_DWORD *)(v7[10] + 32LL) = 0xFFFFFF;
      v9 = v7[10];
      *((_DWORD *)v7 + 28) = 0;
      *(_QWORD *)(v9 + 112) = 0LL;
      v10 = HmgShareLockCheck(v8, 16);
      *((_QWORD *)v6 + 198) = 0LL;
      v11 = (struct HOBJ__ **)v10;
      *((_QWORD *)v6 + 195) = 0LL;
      *((_DWORD *)v6 + 392) = 0;
      EBRUSHOBJ::vInitBrush(
        (unsigned int *)v6 + 388,
        (__int64)v7,
        v10,
        (__int64)WPP_MAIN_CB.Reserved,
        *(_QWORD *)(*((_QWORD *)v6 + 321) + 128LL),
        *((_QWORD *)v6 + 321),
        1u);
      DEC_SHARE_REF_CNT_LAZY0(v11);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v16, 0);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v12);
      }
      PDEVOBJ::bDisabled((PDEVOBJ *)&v15, *((_DWORD *)a1 + 8) & 0x400);
      v4 = v6;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v15);
      PDEVOBJ::vUnreferencePdev(&v15, 0);
    }
    if ( v7 )
      Win32FreePool((__int64)v7);
  }
  v13 = WdLogNewEntry5_WdTrace(v5);
  *(_QWORD *)(v13 + 24) = v4;
  WdLogEvent5_WdTrace(v13);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v17);
  return v4;
}
