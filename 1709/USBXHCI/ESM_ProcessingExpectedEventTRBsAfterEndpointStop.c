/*
 * XREFs of ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x1C003EE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_ProcessExpectedEventTRBs @ 0x1C0023628 (TR_ProcessExpectedEventTRBs.c)
 */

__int64 __fastcall ESM_ProcessingExpectedEventTRBsAfterEndpointStop(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // esi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v2 = *(_QWORD *)(v1 + 136);
    v3 = 1;
    for ( *(_DWORD *)(v2 + 20) = 0; v3 <= *(_DWORD *)(v2 + 8); ++v3 )
      TR_ProcessExpectedEventTRBs(*(_QWORD *)(104LL * (v3 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_ProcessExpectedEventTRBs(*(_QWORD *)(v1 + 88));
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(v1 + 1296),
    -20000000LL);
  return 1000LL;
}
