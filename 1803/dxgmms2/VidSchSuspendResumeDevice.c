/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C0012590
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00127CC (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C006BD44 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00767CC (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00768D8 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A8FC4 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0005B40 (VidSchWaitForEvents.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x1C0011080 (VidSchiUnwaitContext.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0079320 (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  char v6; // r12
  struct _ERESOURCE *v7; // rbx
  char v8; // r13
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
  v7 = (struct _ERESOURCE *)(v4 + 2728);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2728), 1u);
  if ( *(_DWORD *)(v5 + 1328) )
    goto LABEL_15;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1904), &LockHandle);
  v8 = 0;
  v9 = *(_QWORD **)(v5 + 72);
  if ( v9 == (_QWORD *)(v5 + 72) )
    goto LABEL_11;
  do
  {
    v10 = v9 - 3;
    v11 = *((_DWORD *)v9 + 40);
    if ( a2 )
    {
      if ( (v11 & 0x100) == 0 )
      {
        v12 = *((_DWORD *)v10 + 28);
        if ( (v12 & 0x10) != 0 && (!a4 || (v12 & 0x80u) != 0) )
        {
          if ( a3 )
            *((_DWORD *)v10 + 46) |= 0x800u;
          v13 = (__int64)(v9 - 3);
          if ( (((unsigned __int8)(*((_DWORD *)v10 + 46) >> 9) | *((_BYTE *)v10 + 184)) & 2) != 0 )
          {
            VidSchiUpdateContextStatus(v13, (_QWORD *)9, (_QWORD *)0xE41);
            v16 = WdLogNewEntry5_WdEvent(v18, v17);
            *(_QWORD *)(v16 + 24) = v10;
            *(_QWORD *)(v16 + 32) = *((unsigned int *)v10 + 46);
            goto LABEL_25;
          }
          VidSchiUpdateContextStatus(v13, (_QWORD *)0xA, (_QWORD *)0xE4A);
          if ( *(_BYTE *)(v4 + 52) && v10 == *(_QWORD **)(v10[12] + 224LL) )
          {
            v16 = WdLogNewEntry5_WdEvent(v15, v14);
            *(_QWORD *)(v16 + 24) = v10;
LABEL_25:
            WdLogEvent5_WdEvent(v16);
            v6 = 1;
          }
        }
      }
    }
    else if ( (v11 & 0x100) != 0 && (!a3 || (v10[23] & 0x800) != 0) )
    {
      *((_DWORD *)v10 + 46) &= ~0x100u;
      *((_DWORD *)v10 + 46) &= ~0x800u;
      v8 |= VidSchiUnwaitContext((__int64)(v9 - 3), 0xE72u);
    }
    v9 = (_QWORD *)*v9;
  }
  while ( v9 != (_QWORD *)(v5 + 72) );
  v5 = a1;
  if ( v8 )
  {
    *(_QWORD *)(v4 + 1400) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 1368), 0, 0);
  }
  v7 = (struct _ERESOURCE *)(v4 + 2728);
LABEL_11:
  if ( !a2 )
    *(_BYTE *)(v5 + 1076) = 0;
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
    VidSchWaitForEvents(v4, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
LABEL_15:
  ExReleaseResourceLite(v7);
}
