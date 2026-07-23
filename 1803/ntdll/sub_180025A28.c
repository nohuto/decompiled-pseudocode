/*
 * XREFs of sub_180025A28 @ 0x180025A28
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_18002C774 @ 0x18002C774 (sub_18002C774.c)
 *     sub_180054B20 @ 0x180054B20 (sub_180054B20.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180028650 (RtlSetThreadSubProcessTag.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x180048500 (TpCallbackMayRunLong.c)
 */

__int64 __fastcall sub_180025A28(_DWORD *Instance, __int64 a2)
{
  void *v4; // rcx

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast(Instance, *(_QWORD *)(a2 + 96));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v4 = *(void **)(a2 + 104);
  if ( v4 )
  {
    *((_QWORD *)Instance + 10) = v4;
    RtlSetThreadSubProcessTag(v4);
  }
  NtCurrentTeb()->ActivityId = *(GUID *)(a2 + 112);
  return RtlSetThreadWorkOnBehalfTicket((PVOID)(a2 + 128));
}
