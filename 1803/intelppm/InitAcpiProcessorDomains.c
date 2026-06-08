/*
 * XREFs of InitAcpiProcessorDomains @ 0x1C0020D0C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF5C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     InitAcpiIdleDomain @ 0x1C0020E08 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0020E8C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002F0F8 (InitAcpiThrottleDomain.c)
 */

__int64 __fastcall InitAcpiProcessorDomains(__int64 a1)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 264) & 0x7F070LL) != 0 && *(_QWORD *)(a1 + 496) && (int)InitAcpiIdleDomain(a1, a1 + 504) < 0 )
    *(_QWORD *)(a1 + 504) = 0LL;
  v2 = *(_QWORD *)(a1 + 264);
  if ( (v2 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 520) = *(_QWORD *)(a1 + 1176);
  if ( (v2 & 0x800000) != 0 )
  {
    if ( (v2 & 0xF8000000) != 0 && (int)InitAcpiPerfDomain(a1) >= 0 && (*(_QWORD *)(a1 + 264) & 0x1000000000LL) == 0 )
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
