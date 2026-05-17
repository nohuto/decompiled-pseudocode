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

__int64 __fastcall sub_180025A28(__int64 a1, __int64 a2)
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
    RtlSetThreadSubProcessTag();
  }
  NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 112);
  return RtlSetThreadWorkOnBehalfTicket(a2 + 128);
}
