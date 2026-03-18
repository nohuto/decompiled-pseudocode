/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140418DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x140120534 (KiIpiSendPacket.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeSignalCallDpcSynchronize @ 0x1402013A0 (KeSignalCallDpcSynchronize.c)
 *     KiConfigureSchedulingInformation @ 0x14041093C (KiConfigureSchedulingInformation.c)
 *     KiConfigureProcessorBlock @ 0x140410EA0 (KiConfigureProcessorBlock.c)
 *     KiInitializeProcessor @ 0x140412130 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x140412370 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140418F04 (KiUpdateNumberProcessors.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _DWORD v9[44]; // [rsp+30h] [rbp-D8h] BYREF

  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
  {
    KiUpdateNumberProcessors(*(unsigned int *)(*(_QWORD *)a2 + 36LL));
    KiInitializeProcessor(*(_QWORD *)a2);
    KiConfigureProcessorBlock(*(_QWORD *)a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)KeActiveProcessors);
    v9[0] = 1310721;
    memset(&v9[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v9, *(_DWORD *)(*(_QWORD *)a2 + 36LL));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (int)v9, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    ((void (__fastcall *)(_QWORD, __int64))off_14033B3C0[0])(0LL, *(_QWORD *)a2 + 36LL);
    KiConfigureSchedulingInformation(*(_QWORD *)a2, 1);
    KiBarrierWait = 0;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    while ( !*(_BYTE *)(a2 + 8) )
      _mm_pause();
  }
  result = KiConfigureSchedulingInformation((__int64)KeGetCurrentPrcb(), 1);
  _InterlockedDecrement(a3);
  return result;
}
