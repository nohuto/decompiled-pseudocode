/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x18000CEA0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000CB00 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18000CC70 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180013140 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x18000F400 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x1800133F0 (TpCallbackMayRunLong.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 */

__int64 __fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v4 = *(_QWORD *)(a2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = v4;
    RtlSetThreadSubProcessTag(v4);
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
  return RtlSetThreadWorkOnBehalfTicket(a2 + 128);
}
