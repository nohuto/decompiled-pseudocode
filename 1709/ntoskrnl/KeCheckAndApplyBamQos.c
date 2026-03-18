/*
 * XREFs of KeCheckAndApplyBamQos @ 0x140209EA0
 * Callers:
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     SwapContext @ 0x140188250 (SwapContext.c)
 *     KeSetThreadSchedulerAssist @ 0x140209F5C (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KeUpdatePendingQosRequest @ 0x14020A080 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x14024069C (PoSetProcessorQoS.c)
 */

__int64 __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ebp
  unsigned int v5; // esi
  int v6; // ebp
  __int16 v7; // [rsp+20h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) )
  {
    _disable();
    v4 = *(_DWORD *)(a1 + 236);
    result = v4 & 3;
    v5 = *(_DWORD *)(a2 + 120) & 3;
    if ( v5 != (_DWORD)result )
    {
      v6 = v4 & 0xC;
      if ( (unsigned __int8)PoSetProcessorQoS(a1, v5) )
        *(_DWORD *)(a1 + 236) &= 0xFFFFFFF3;
      else
        *(_DWORD *)(a1 + 236) = *(_DWORD *)(a1 + 236) & 0xFFFFFFF3 | (4 * v5);
      result = v6 != 0;
      if ( (_DWORD)result != ((*(_DWORD *)(a1 + 236) & 0xC) != 0) )
        result = KeUpdatePendingQosRequest(a1);
    }
    if ( (v7 & 0x200) != 0 )
      _enable();
  }
  return result;
}
