/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x14042E640
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1400D3118 (KiIpiSendPacket.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeSignalCallDpcSynchronize @ 0x140207790 (KeSignalCallDpcSynchronize.c)
 *     KiConfigureSchedulingInformation @ 0x14042516C (KiConfigureSchedulingInformation.c)
 *     KiConfigureProcessorBlock @ 0x1404255A4 (KiConfigureProcessorBlock.c)
 *     KiInitializeProcessor @ 0x140426A8C (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x140426B74 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x14042E7A4 (KiUpdateNumberProcessors.c)
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
    KiIpiSendPacket(0, (unsigned __int16 *)v9, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    ((void (__fastcall *)(_QWORD, __int64))off_1403533F0[0])(0LL, *(_QWORD *)a2 + 36LL);
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
