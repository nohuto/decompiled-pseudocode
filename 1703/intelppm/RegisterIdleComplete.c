/*
 * XREFs of RegisterIdleComplete @ 0x1C001F138
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002FA0 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C0028694 (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     PepRegisterSpmSettings @ 0x1C00200B4 (PepRegisterSpmSettings.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002C494 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C002C5E0 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002D624 (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C00162C0 == dword_1C0015D94 )
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
        if ( !qword_1C00162D8 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x11u,
        (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
    }
  }
}
