/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00CCB9C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C006934C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1C00CCDCC (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CED80 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 i; // rbx
  struct PDEV *v7; // rsi
  int v8; // r8d
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rcx
  unsigned int v15; // ebx
  HDEV v16; // rsi
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct PDEV *v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  v5 = *((_DWORD *)a1 + 5);
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    v20 = (struct PDEV *)*((_QWORD *)a1 + 5 * i + 4);
    v7 = v20;
    DrvBackoutRedirectionDeviceBitmap((HDEV)v20);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    if ( *((_DWORD *)v7 + 3) == 1 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v8);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v10);
      }
      DrvDisableDisplay((HSEMAPHORE *)v7, 0LL, v9);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v8);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v11);
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*((_DWORD *)v7 + 3);
    PDEVOBJ::vUnreferencePdev(&v20, 0, v12);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v13);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v14);
    }
    v5 = *((_DWORD *)a1 + 5);
  }
  v15 = 0;
  if ( v5 )
  {
    do
    {
      v16 = (HDEV)*((_QWORD *)a1 + 5 * v15 + 5);
      if ( v16 )
      {
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        if ( *((_DWORD *)v16 + 3) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v17);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v18);
          }
          DrvEnableDisplay(v16);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v17);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion(v19);
        }
      }
      ++v15;
    }
    while ( v15 < *((_DWORD *)a1 + 5) );
  }
}
