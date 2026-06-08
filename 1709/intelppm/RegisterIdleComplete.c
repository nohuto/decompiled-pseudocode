/*
 * XREFs of RegisterIdleComplete @ 0x1C0022368
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002DA0 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C002BECC (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     PepRegisterSpmSettings @ 0x1C0023338 (PepRegisterSpmSettings.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002FD44 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C002FE90 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0030F1C (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0019B00 == dword_1C00195D4 )
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
        if ( !qword_1C0019B18 )
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
        (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
    }
  }
}
