/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0026190
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C002BB00 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C002BB60 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerState @ 0x1C0039D14 (DpiRequestDevicePowerState.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  unsigned int v3; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rbx
  struct _IO_WORKITEM *WorkItem; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 180) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 313));
  }
  else
  {
    if ( a2 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this);
      v3 = 1;
      if ( *((_DWORD *)Global + 398) )
      {
        if ( *((_DWORD *)Global + 399) )
        {
          v5 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 3904), &LockHandle);
          LODWORD(v5) = *(_DWORD *)(v5 + 3968);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( (_DWORD)v5 )
          {
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 24));
            if ( WorkItem )
              IoQueueWorkItemEx(WorkItem, DXGGLOBAL::ReportGpuWakeupWorkItemCallback, DelayedWorkQueue, 0LL);
          }
        }
      }
    }
    else
    {
      v3 = 4;
    }
    DpiRequestDevicePowerState(*((_QWORD *)this + 24), v3);
  }
}
