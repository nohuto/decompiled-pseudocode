/*
 * XREFs of RegisterIdleComplete @ 0x1C001CF50
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001AF0 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C001B2F8 (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     RegisterKernelPlatformStates @ 0x1C001D038 (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C001D374 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C001D450 (RegisterKernelCoordinatedLpiStates.c)
 *     PepRegisterSpmSettings @ 0x1C002B358 (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0011940 == dword_1C0011414 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      v2 = *(_QWORD *)(a1 + 264);
      if ( (v2 & 0xE0000000000LL) != 0 )
      {
        RegisterKernelCoordinatedLpiStates(a1);
      }
      else if ( (v2 & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( !qword_1C0011958 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x11u,
        (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
    }
  }
}
