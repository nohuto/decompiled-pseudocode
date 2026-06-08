/*
 * XREFs of InitAcpiProcessorDomains @ 0x1C00217CC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     InitAcpiIdleDomain @ 0x1C00215A0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00216BC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00218F8 (InitAcpiThrottleDomain.c)
 */

__int64 __fastcall InitAcpiProcessorDomains(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 264) & 0x7F070) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 496);
    if ( v2 )
    {
      if ( (int)InitAcpiIdleDomain(a1, (unsigned int **)(a1 + 504), v2) < 0 )
        *(_QWORD *)(a1 + 504) = 0LL;
    }
  }
  v3 = *(_QWORD *)(a1 + 264);
  if ( (v3 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 520) = *(_QWORD *)(a1 + 1176);
  if ( (v3 & 0x800000) != 0 )
  {
    if ( (v3 & 0xF8000000) != 0 && (int)InitAcpiPerfDomain(a1) >= 0 && (*(_QWORD *)(a1 + 264) & 0x1000000000LL) == 0 )
      *(_QWORD *)(a1 + 520) = *(_QWORD *)(a1 + 440);
    if ( (*(_DWORD *)(a1 + 264) & 0x3000000) != 0
      && (int)InitAcpiThrottleDomain(a1) >= 0
      && (*(_QWORD *)(a1 + 264) & 0x10F8000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 520) = *(_QWORD *)(a1 + 488);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 208));
}
