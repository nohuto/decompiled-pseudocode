/*
 * XREFs of Endpoint_UcxEvtEndpointReset @ 0x1C001C340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C001D798 (WPP_RECORDER_SF_ddqL.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  int v6; // r8d
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004E1D8);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a3,
                    off_1C004E098);
  memset(v5, 0, 0x70uLL);
  _m_prefetchw((const void *)(v4 + 32));
  v7 = *(_DWORD *)(v4 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v7 ^ 0x100, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x100) != 0 )
  {
    WPP_RECORDER_SF_ddqL(*(_QWORD *)(v4 + 80), 256, v6, 56);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a3,
             0LL);
  }
  else
  {
    *v5 = v4;
    *(_QWORD *)(v4 + 272) = a3;
    *(_DWORD *)(v4 + 280) = 259;
    return ESM_AddEvent((PVOID)(v4 + 288));
  }
}
