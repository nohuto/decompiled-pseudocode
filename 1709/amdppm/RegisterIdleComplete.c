/*
 * XREFs of RegisterIdleComplete @ 0x1C002623C
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0007C80 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C002E928 (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     RegisterKernelPlatformStates @ 0x1C002631C (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0026658 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0026734 (RegisterKernelCoordinatedLpiStates.c)
 *     PepRegisterSpmSettings @ 0x1C002D5AC (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0011910 == dword_1C00113E4 )
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
        if ( !qword_1C0011928 )
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
        (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
    }
  }
}
