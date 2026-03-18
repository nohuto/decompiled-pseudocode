/*
 * XREFs of Endpoint_WdfEvtAbortComplete @ 0x1C001CFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D4FC (WPP_RECORDER_SF_ddq.c)
 */

__int64 __fastcall Endpoint_WdfEvtAbortComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // r9d
  char v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+38h] [rbp-10h]

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a2,
             off_1C004E1D8);
  if ( *(_BYTE *)(result + 37) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(result + 136) + 16LL), 0xFFFFFFFF) != 1 )
      return result;
    v5 = 36;
    v8 = a2;
    v7 = *(_DWORD *)(result + 144);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(result + 16) + 135LL);
    v6 = *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL);
  }
  else
  {
    v5 = 37;
    v8 = a2;
    v7 = *(_DWORD *)(result + 144);
    v6 = *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL);
  }
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_ddq(
    *(_QWORD *)(result + 80),
    v4,
    13,
    v5,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    v6,
    v7,
    v8);
  return ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C004F8C8)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a2);
}
