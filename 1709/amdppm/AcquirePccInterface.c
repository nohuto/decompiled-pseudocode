/*
 * XREFs of AcquirePccInterface @ 0x1C002FB5C
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C002D6E8 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v4; // edi
  unsigned __int16 v5; // r9
  char v6; // cl
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+28h] [rbp-20h]

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
    v4 = -1073741811;
    if ( *(_DWORD *)qword_1C00118B0 != 609239875 )
    {
      v5 = 43;
LABEL_5:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v5,
        (__int64)&WPP_43c87aadc204398ca111f18064ed4edf_Traceguids);
LABEL_22:
      ((void (__fastcall *)(__int64))qword_1C0011880)(qword_1C0011870);
      memset(&unk_1C0011868, 0, 0x80uLL);
      goto LABEL_24;
    }
    if ( *(_WORD *)(qword_1C00118B0 + 4) < 0x28u )
    {
      v5 = 44;
      goto LABEL_5;
    }
    v6 = *(_BYTE *)(qword_1C00118B0 + 6);
    if ( (v6 || *(_BYTE *)(qword_1C00118B0 + 7) < 6u) && (v6 != 1 || *(_BYTE *)(qword_1C00118B0 + 7)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x2Du,
        (__int64)&WPP_43c87aadc204398ca111f18064ed4edf_Traceguids);
    }
    else
    {
      v7 = *(_DWORD *)(qword_1C00118B0 + 36);
      if ( v7 > *(_DWORD *)(qword_1C00118B0 + 28) )
      {
        v5 = 46;
        goto LABEL_5;
      }
      if ( *(_DWORD *)(qword_1C00118B0 + 32) > v7 )
      {
        v5 = 47;
        goto LABEL_5;
      }
      v4 = 0;
    }
    v3 = v4;
    if ( v4 < 0 )
      goto LABEL_22;
    if ( dword_1C00117FC == 1 )
    {
      dword_1C0011828 = -1;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
      LOWORD(v11) = 1;
      LOWORD(v10) = 88;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, int, int, _QWORD))(WdfFunctions_01015 + 1048))(
             WdfDriverGlobals,
             v8,
             &GUID_PCC_INTERFACE_INTERNAL,
             &unk_1C0011808,
             v10,
             v11,
             0LL);
    }
    if ( v3 < 0 )
      goto LABEL_22;
  }
LABEL_24:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  return (unsigned int)v3;
}
