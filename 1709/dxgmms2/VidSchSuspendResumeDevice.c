/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C000ECF0
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C000EB8C (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051C7C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051D88 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0058278 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     VidSchFlushDevice @ 0x1C0070780 (VidSchFlushDevice.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A2130 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x1C000D6E4 (VidSchiUnwaitContext.c)
 *     VidSchWaitForEvents @ 0x1C000F038 (VidSchWaitForEvents.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0071CA8 (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  char v6; // r13
  struct _ERESOURCE *v7; // rbx
  char v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _KEVENT *p_Event; // [rsp+38h] [rbp-A9h] BYREF
  _KEVENT Event; // [rsp+40h] [rbp-A1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-89h] BYREF
  _QWORD v22[24]; // [rsp+78h] [rbp-69h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = a1;
  v6 = 0;
  v7 = (struct _ERESOURCE *)(v4 + 2704);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2704), 1u);
  if ( *(_DWORD *)(v5 + 1304) )
    goto LABEL_16;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1888), &LockHandle);
  v8 = 0;
  v9 = *(_QWORD **)(v5 + 64);
  if ( v9 == (_QWORD *)(v5 + 64) )
    goto LABEL_12;
  do
  {
    v10 = v9 - 3;
    v11 = *((_DWORD *)v9 + 38);
    if ( a2 )
    {
      if ( (v11 & 0x100) == 0 )
      {
        v12 = *((_DWORD *)v10 + 28);
        if ( (v12 & 0x10) != 0 && (!a4 || (v12 & 0x80u) != 0) )
        {
          if ( a3 )
            *((_DWORD *)v10 + 44) |= 0x800u;
          v13 = (__int64)(v9 - 3);
          if ( (((unsigned __int8)(*((_DWORD *)v10 + 44) >> 9) | *((_BYTE *)v10 + 176)) & 2) != 0 )
          {
            VidSchiUpdateContextStatus(v13, (_QWORD *)9, (_QWORD *)0xD18);
            v16 = WdLogNewEntry5_WdEvent(v18, v17);
            *(_QWORD *)(v16 + 24) = v10;
            *(_QWORD *)(v16 + 32) = *((unsigned int *)v10 + 44);
            goto LABEL_26;
          }
          VidSchiUpdateContextStatus(v13, (_QWORD *)0xA, (_QWORD *)0xD21);
          if ( *(_BYTE *)(v4 + 52) && v10 == *(_QWORD **)(v10[12] + 224LL) )
          {
            v16 = WdLogNewEntry5_WdEvent(v15, v14);
            *(_QWORD *)(v16 + 24) = v10;
LABEL_26:
            WdLogEvent5_WdEvent(v16);
            v6 = 1;
          }
        }
      }
    }
    else if ( (v11 & 0x100) != 0 && (!a3 || (v10[22] & 0x800) != 0) )
    {
      *((_DWORD *)v10 + 44) &= 0xFFFFF6FF;
      v8 |= VidSchiUnwaitContext((__int64)(v9 - 3), 0xD49u);
    }
    v9 = (_QWORD *)*v9;
  }
  while ( v9 != (_QWORD *)(v5 + 64) );
  v5 = a1;
  if ( v8 )
  {
    *(_QWORD *)(v4 + 1384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 1352), 0, 0);
  }
  v7 = (struct _ERESOURCE *)(v4 + 2704);
LABEL_12:
  if ( !a2 )
    *(_BYTE *)(v5 + 1052) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v22, 0, 0x80uLL);
    LODWORD(v22[0]) = 0;
    v22[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v22[5]) = 7;
    v22[4] = &Event;
    v22[6] = v4;
    VidSchSubmitGlobalCommand(v4, v22);
    p_Event = &Event;
    VidSchWaitForEvents(v4, 1LL, &p_Event, 0LL, 0);
  }
LABEL_16:
  ExReleaseResourceLite(v7);
}
