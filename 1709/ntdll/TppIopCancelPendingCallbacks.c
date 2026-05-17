/*
 * XREFs of TppIopCancelPendingCallbacks @ 0x18010A810
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010AF80 (TppETWCallbackCancel.c)
 */

void __fastcall TppIopCancelPendingCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int32 v5; // edi
  __int64 v6; // rcx

  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v5 )
  {
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v5, 0LL, a4);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      TppETWCallbackCancel(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v5);
  }
}
