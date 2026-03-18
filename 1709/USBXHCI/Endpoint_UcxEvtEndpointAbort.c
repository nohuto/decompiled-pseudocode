/*
 * XREFs of Endpoint_UcxEvtEndpointAbort @ 0x1C001BF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D4FC (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C001D798 (WPP_RECORDER_SF_ddqL.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointAbort(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // edx
  __int64 result; // rax
  unsigned int i; // ebp

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004E1D8);
  v5 = v3;
  if ( *(_BYTE *)(v3 + 37) )
  {
    v6 = *(_QWORD *)(v3 + 136);
    v7 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 16) = v7;
    result = WPP_RECORDER_SF_ddqL(*(_QWORD *)(v3 + 80), v7, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), 38);
    for ( i = 1; i <= *(_DWORD *)(v6 + 8); ++i )
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 3344))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(v5 + 136) + 48) + 72LL),
                 Endpoint_WdfEvtAbortComplete,
                 a2);
  }
  else
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(v3 + 80),
      v4,
      13,
      39,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
      *(_DWORD *)(v3 + 144),
      a2);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 3344))(
             WdfDriverGlobals,
             *(_QWORD *)(*(_QWORD *)(v5 + 88) + 72LL),
             Endpoint_WdfEvtAbortComplete,
             a2);
  }
  return result;
}
