/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C003E100 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C003E140 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C003F6E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00EE574 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00EF2C8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

PDEV **__fastcall DrvCreateCloneHDEV(PDEV **a1, __int64 a2)
{
  __int64 v3; // rax
  PDEV **v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  PDEV **v8; // rbx
  _QWORD *v9; // rsi
  struct HOBJ__ *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct HOBJ__ **v13; // rdi
  int v14; // r8d
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rax
  PDEV **v20; // [rsp+60h] [rbp+8h] BYREF
  PDEV **v21; // [rsp+70h] [rbp+18h] BYREF
  char v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  *(_QWORD *)(v3 + 32) = 1LL;
  WdLogEvent5_WdEvent(v3);
  v21 = a1;
  v4 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v22, (struct PDEVOBJ *)&v21, v5, v6);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v20, (char *)a1);
  v8 = v20;
  if ( v20 )
  {
    v9 = PALLOCMEM2(0xA00uLL, 1886221383LL, 1);
    if ( v9 && (int)IsbSpEnableSpritesSupported() >= 0 && (unsigned int)bSpEnableSprites(v8) )
    {
      if ( (int)IsvEnableSynchronizeSupported() >= 0 )
        vEnableSynchronize(v8);
      v10 = (struct HOBJ__ *)ghbrGrayPattern;
      v9[10] = v9 + 70;
      *((_DWORD *)v9 + 150) = 0;
      *(_DWORD *)(v9[10] + 32LL) = 0xFFFFFF;
      v11 = v9[10];
      *((_DWORD *)v9 + 28) = 0;
      *(_QWORD *)(v11 + 112) = 0LL;
      v12 = HmgShareLockCheck(v10, 16);
      v8[198] = 0LL;
      v13 = (struct HOBJ__ **)v12;
      v8[195] = 0LL;
      *((_DWORD *)v8 + 392) = 0;
      EBRUSHOBJ::vInitBrush(
        (unsigned int *)v8 + 388,
        (__int64)v9,
        v12,
        (__int64)ppalDefault,
        *((_QWORD *)v8[321] + 16),
        (__int64)v8[321],
        1u);
      DEC_SHARE_REF_CNT_LAZY0(v13);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v21, 0, v14);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v15);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v16);
      }
      PDEVOBJ::bDisabled((PDEVOBJ *)&v20, (_DWORD)a1[4] & 0x400);
      v4 = v8;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v20);
      PDEVOBJ::vUnreferencePdev(&v20, 0, v17);
    }
    if ( v9 )
      Win32FreePool((__int64)v9);
  }
  v18 = WdLogNewEntry5_WdTrace(v7);
  *(_QWORD *)(v18 + 24) = v4;
  WdLogEvent5_WdTrace(v18);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v22);
  return v4;
}
