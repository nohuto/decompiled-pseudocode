/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C00F8F14
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0068860 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0068998 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C006DA30 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  struct tagGRAPHICS_DEVICE *result; // rax
  struct tagGRAPHICS_DEVICE *v2; // rbp
  struct tagGRAPHICS_DEVICE *v3; // rdx
  struct tagGRAPHICS_DEVICE *v5; // rsi
  wchar_t *v6; // r14
  _QWORD *i; // rax
  __int64 v8; // rcx
  COPM *v9; // rdi
  struct _KMUTANT *v10; // rcx

  result = gpLocalGraphicsDeviceList;
  v2 = 0LL;
  v3 = gpLocalGraphicsDeviceListLast;
  gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
  v5 = gpLocalGraphicsDeviceList;
  gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
  if ( gpLocalGraphicsDeviceList )
  {
    do
    {
      v6 = (wchar_t *)*((_QWORD *)v5 + 16);
      if ( a1 && a1 == *((_QWORD *)v5 + 18) )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        for ( i = *(_QWORD **)&WPP_MAIN_CB.SectorSize; i; i = (_QWORD *)*i )
        {
          if ( (struct tagGRAPHICS_DEVICE *)i[324] == v5 )
            i[324] = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion(v8);
        }
        if ( v5 == (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList )
        {
          gpGraphicsDeviceList = v6;
        }
        else if ( v2 )
        {
          *((_QWORD *)v2 + 16) = v6;
        }
        if ( v5 == gpGraphicsDeviceListLast )
          gpGraphicsDeviceListLast = v2;
        if ( (*((_DWORD *)v5 + 40) & 0x800000) != 0 )
        {
          v9 = qword_1C018B748;
          CMutex::Lock((void **)qword_1C018B748 + 4);
          CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
            (__int64)v9,
            (_DWORD *)v5 + 66,
            (__int64)v9 + 24);
          v10 = (struct _KMUTANT *)*((_QWORD *)v9 + 4);
          if ( v10 )
            KeReleaseMutex(v10, 0);
          DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v5 + 264));
        }
        DrvCleanupOneGraphicsDevice((__int64)v5);
        result = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
        v5 = v2;
        v3 = gpGraphicsDeviceListLast;
      }
      v2 = v5;
      v5 = (struct tagGRAPHICS_DEVICE *)v6;
    }
    while ( v6 );
  }
  gpLocalGraphicsDeviceList = result;
  gpLocalGraphicsDeviceListLast = v3;
  return result;
}
