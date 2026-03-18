/*
 * XREFs of ?SetSurfaceManagerEvents@CPartitionVerticalBlankScheduler@@UEAAXPEAX0@Z @ 0x1800CCFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::SetSurfaceManagerEvents(
        CPartitionVerticalBlankScheduler *this,
        void *a2,
        void *a3)
{
  *((_QWORD *)this + 9) = a2;
  *((_QWORD *)this + 12) = a3;
}
