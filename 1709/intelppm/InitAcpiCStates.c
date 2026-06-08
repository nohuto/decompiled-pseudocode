/*
 * XREFs of InitAcpiCStates @ 0x1C001F1E8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     Display_CST @ 0x1C0002844 (Display_CST.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     InitAcpi2CStates @ 0x1C001F290 (InitAcpi2CStates.c)
 *     InitAcpi1CStates @ 0x1C002E090 (InitAcpi1CStates.c)
 */

__int64 __fastcall InitAcpiCStates(__int64 a1)
{
  int inited; // edi

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  inited = -1073741823;
  if ( (*(_DWORD *)(a1 + 264) & 0x7F070LL) != 0 )
  {
    inited = InitAcpi2CStates(a1, a1 + 496);
    if ( inited >= 0 )
      goto LABEL_3;
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFF80F8FuLL;
  }
  if ( (*(_BYTE *)(a1 + 264) & 7) == 0 )
    goto LABEL_4;
  inited = InitAcpi1CStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_4;
  }
LABEL_3:
  inited = 0;
  Display_CST(*(unsigned int **)(a1 + 496));
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
