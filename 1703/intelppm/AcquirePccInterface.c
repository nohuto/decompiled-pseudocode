/*
 * XREFs of AcquirePccInterface @ 0x1C001DC8C
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C001C474 (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     ValidatePccHeader @ 0x1C0026D04 (ValidatePccHeader.c)
 *     GetPccInternalInterfaceInfo @ 0x1C00288C0 (GetPccInternalInterfaceInfo.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int PccInternalInterfaceInfo; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0015D98,
    0LL);
  if ( qword_1C0016260 )
  {
    PccInternalInterfaceInfo = 0;
  }
  else
  {
    dword_1C0016238 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    PccInternalInterfaceInfo = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
                                 WdfDriverGlobals,
                                 v2,
                                 &GUID_PCC_INTERFACE_STANDARD,
                                 &unk_1C0016218,
                                 128,
                                 1,
                                 0LL);
    if ( PccInternalInterfaceInfo >= 0 )
    {
      PccInternalInterfaceInfo = ValidatePccHeader(qword_1C0016260);
      if ( PccInternalInterfaceInfo < 0 )
        goto LABEL_9;
      if ( dword_1C00161AC == 1 )
        PccInternalInterfaceInfo = GetPccInternalInterfaceInfo(a1);
      if ( PccInternalInterfaceInfo < 0 )
      {
LABEL_9:
        ((void (__fastcall *)(__int64))qword_1C0016230)(qword_1C0016220);
        memset(&unk_1C0016218, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015D98);
  return (unsigned int)PccInternalInterfaceInfo;
}
