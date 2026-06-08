/*
 * XREFs of AcquirePccInterface @ 0x1C002C6C0
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C002A250 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned __int16 v4; // r9
  char v5; // cl
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  if ( qword_1C00118B0 )
  {
    v3 = 0;
    goto LABEL_24;
  }
  dword_1C0011888 = -1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v2,
         &GUID_PCC_INTERFACE_STANDARD,
         &unk_1C0011868,
         128,
         1,
         0LL);
  if ( v3 >= 0 )
  {
    v3 = -1073741811;
    if ( *(_DWORD *)qword_1C00118B0 != 609239875 )
    {
      v4 = 43;
LABEL_5:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v4,
        (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids);
LABEL_22:
      ((void (__fastcall *)(__int64))qword_1C0011880)(qword_1C0011870);
      memset(&unk_1C0011868, 0, 0x80uLL);
      goto LABEL_24;
    }
    if ( *(_WORD *)(qword_1C00118B0 + 4) < 0x28u )
    {
      v4 = 44;
      goto LABEL_5;
    }
    v5 = *(_BYTE *)(qword_1C00118B0 + 6);
    if ( (v5 || *(_BYTE *)(qword_1C00118B0 + 7) < 6u) && (v5 != 1 || *(_BYTE *)(qword_1C00118B0 + 7)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x2Du,
        (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids);
    }
    else
    {
      v6 = *(_DWORD *)(qword_1C00118B0 + 36);
      if ( v6 > *(_DWORD *)(qword_1C00118B0 + 28) )
      {
        v4 = 46;
        goto LABEL_5;
      }
      if ( *(_DWORD *)(qword_1C00118B0 + 32) > v6 )
      {
        v4 = 47;
        goto LABEL_5;
      }
      v3 = 0;
    }
    if ( v3 < 0 )
      goto LABEL_22;
    if ( dword_1C00117FC == 1 )
    {
      dword_1C0011828 = -1;
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
      LOWORD(v10) = 1;
      LOWORD(v9) = 88;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, int, int, _QWORD))(WdfFunctions_01015 + 1048))(
             WdfDriverGlobals,
             v7,
             &GUID_PCC_INTERFACE_INTERNAL,
             &unk_1C0011808,
             v9,
             v10,
             0LL);
    }
    if ( v3 < 0 )
      goto LABEL_22;
  }
LABEL_24:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  return (unsigned int)v3;
}
