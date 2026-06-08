/*
 * XREFs of AcquirePccInterface @ 0x1C00216B4
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C0021464 (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     ValidatePccHeader @ 0x1C002B6A4 (ValidatePccHeader.c)
 *     GetPccInternalInterfaceInfo @ 0x1C002D2D4 (GetPccInternalInterfaceInfo.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int PccInternalInterfaceInfo; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A5D8,
    0LL);
  if ( qword_1C001AAA0 )
  {
    PccInternalInterfaceInfo = 0;
  }
  else
  {
    dword_1C001AA78 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    PccInternalInterfaceInfo = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
                                 WdfDriverGlobals,
                                 v2,
                                 &GUID_PCC_INTERFACE_STANDARD,
                                 &unk_1C001AA58,
                                 128,
                                 1,
                                 0LL);
    if ( PccInternalInterfaceInfo >= 0 )
    {
      PccInternalInterfaceInfo = ValidatePccHeader(qword_1C001AAA0);
      if ( PccInternalInterfaceInfo < 0 )
        goto LABEL_9;
      if ( dword_1C001A9EC == 1 )
        PccInternalInterfaceInfo = GetPccInternalInterfaceInfo(a1);
      if ( PccInternalInterfaceInfo < 0 )
      {
LABEL_9:
        ((void (__fastcall *)(__int64))qword_1C001AA70)(qword_1C001AA60);
        memset(&unk_1C001AA58, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A5D8);
  return (unsigned int)PccInternalInterfaceInfo;
}
