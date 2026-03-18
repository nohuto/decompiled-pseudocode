/*
 * XREFs of ??_EICompositorSchedulerTelemetry@@UEAAPEAXI@Z @ 0x180148D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

ICompositorSchedulerTelemetry *__fastcall ICompositorSchedulerTelemetry::`vector deleting destructor'(
        ICompositorSchedulerTelemetry *this,
        char a2)
{
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
