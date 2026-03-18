/*
 * XREFs of ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0041604
 * Callers:
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C0041800 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C0041860 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     DpiAcpiDockEventCallback @ 0x1C0206E20 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(PVOID Object, unsigned int a2, unsigned int a3, void *a4)
{
  __int64 v5; // rsi
  int v8; // edi
  __int64 v9; // rcx
  char *PoolWithTag; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  GUID ActivityId[5]; // [rsp+20h] [rbp-60h] BYREF

  v5 = a3;
  memset(ActivityId, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
  v8 = 0;
  *(_QWORD *)&ActivityId[4].Data1 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)ActivityId[1].Data4 = 4;
  LOBYTE(ActivityId[3].Data1) = -1;
  ActivityId[2].Data1 = a2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(Object);
    *((_QWORD *)PoolWithTag + 2) = Object;
    *((_DWORD *)PoolWithTag + 6) = a2;
    *((_DWORD *)PoolWithTag + 7) = v5;
    *((_QWORD *)PoolWithTag + 4) = a4;
    *(GUID *)(PoolWithTag + 40) = ActivityId[0];
    *(GUID *)(PoolWithTag + 56) = ActivityId[1];
    *(GUID *)(PoolWithTag + 72) = ActivityId[2];
    *(GUID *)(PoolWithTag + 88) = ActivityId[3];
    *((_QWORD *)PoolWithTag + 13) = *(_QWORD *)&ActivityId[4].Data1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C007A8E0);
    qword_1C007A918 = (__int64)KeGetCurrentThread();
    v12 = (_QWORD *)qword_1C007A928;
    if ( *(__int64 **)qword_1C007A928 != &qword_1C007A920 )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &qword_1C007A920;
    *((_QWORD *)PoolWithTag + 1) = v12;
    *v12 = PoolWithTag;
    qword_1C007A928 = (__int64)PoolWithTag;
    if ( !IoWorkItem )
    {
      IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( IoWorkItem )
      {
        v15 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v15 + 24) = v5;
        WdLogEvent5_WdEvent(v15);
        IoQueueWorkItemEx(IoWorkItem, DpiAcpiHandleAcpiEventWork, DelayedWorkQueue, 0LL);
      }
      else
      {
        v8 = -1073741670;
        v14 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v14 + 24) = -1073741670LL;
        WdLogEvent5_WdLowResource(v14);
      }
    }
    qword_1C007A918 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C007A8E0);
    if ( v8 < 0 )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    v8 = -1073741801;
    v11 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v11 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v11);
  }
  return (unsigned int)v8;
}
