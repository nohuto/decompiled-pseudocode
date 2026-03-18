/*
 * XREFs of ??_EICompositorSchedulerTelemetry@@UEAAPEAXI@Z @ 0x180126310
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

ICompositorSchedulerTelemetry *__fastcall ICompositorSchedulerTelemetry::`vector deleting destructor'(
        ICompositorSchedulerTelemetry *this,
        char a2)
{
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
