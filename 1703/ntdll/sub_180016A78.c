/*
 * XREFs of sub_180016A78 @ 0x180016A78
 * Callers:
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180080D00 @ 0x180080D00 (sub_180080D00.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180017240 (RtlSetThreadSubProcessTag.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x180078F20 (TpCallbackMayRunLong.c)
 */

__int64 __fastcall sub_180016A78(_DWORD *Instance, __int64 a2)
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
