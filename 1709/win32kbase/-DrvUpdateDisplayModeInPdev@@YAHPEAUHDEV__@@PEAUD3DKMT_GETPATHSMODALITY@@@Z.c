/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8848
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8460 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1C00F5B10 (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00F610C (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HSEMAPHORE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  HSEMAPHORE *v2; // rbx
  unsigned int updated; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _devicemodeW *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r8d
  struct _ERESOURCE *v21; // rcx
  __int64 v22; // rcx
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rcx
  HSEMAPHORE *v26; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v26 = a1;
  updated = 0;
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)v2[6], 4);
  EngAcquireSemaphore(v2[5]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v2[5], 11);
  if ( !v2[326] )
  {
    v9 = WdLogNewEntry5_WdEvent(v6, v5);
    *(_QWORD *)(v9 + 24) = 1LL;
    goto LABEL_20;
  }
  if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation((struct tagGRAPHICS_DEVICE *)v2[324])
    || (v7 = v2[324], v10 = v7[40], (v10 & 0x4000000) != 0)
    || (v10 & 0x2000000) != 0
    || (v10 & 8) != 0 )
  {
    v9 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v9 + 24) = 2LL;
LABEL_20:
    WdLogEvent5_WdEvent(v9);
    goto LABEL_21;
  }
  v11 = 0LL;
  if ( !*((_WORD *)a2 + 10) )
    goto LABEL_12;
  while ( 1 )
  {
    v12 = 264LL * (unsigned int)v11;
    if ( v7[68] == *(_DWORD *)((char *)a2 + v12 + 72)
      && v7[66] == *(_DWORD *)((char *)a2 + v12 + 64)
      && v7[67] == *(_DWORD *)((char *)a2 + v12 + 68) )
    {
      break;
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *((unsigned __int16 *)a2 + 10) )
      goto LABEL_12;
  }
  v11 = 264 * (v11 + 1);
  v13 = *(struct _devicemodeW **)((char *)a2 + v11);
  if ( !v13 )
  {
LABEL_12:
    v9 = WdLogNewEntry5_WdEvent(v11, v7);
    *(_QWORD *)(v9 + 24) = 25871LL;
    goto LABEL_20;
  }
  if ( !DevmodeAutoRotateCompatible(v13, (const struct _devicemodeW *)v2[326]) )
  {
    v9 = WdLogNewEntry5_WdEvent(v15, v14);
    goto LABEL_20;
  }
  updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v26, v13);
  if ( updated )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
    v19 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v19 + 24) = 4LL;
    WdLogEvent5_WdEvent(v19);
  }
  v2 = v26;
LABEL_21:
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v2[5], v16);
  v21 = (struct _ERESOURCE *)v2[5];
  if ( v21 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v21);
    PsLeavePriorityRegion(v22);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)v2[6], v20);
  v23 = (struct _ERESOURCE *)v2[6];
  if ( v23 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v23);
    PsLeavePriorityRegion(v24);
  }
  return updated;
}
