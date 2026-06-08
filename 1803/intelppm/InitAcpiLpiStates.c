/*
 * XREFs of InitAcpiLpiStates @ 0x1C00214D0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     Display_LPI @ 0x1C000A730 (Display_LPI.c)
 *     AcpiEvaluateMethod @ 0x1C001E240 (AcpiEvaluateMethod.c)
 *     ValidateProcessorLpiStates @ 0x1C002BA70 (ValidateProcessorLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C002E358 (AcpiParseLpiObject.c)
 */

__int64 __fastcall InitAcpiLpiStates(__int64 a1)
{
  int v2; // eax
  PVOID v3; // rsi
  int v4; // edi
  _DWORD *v5; // rsi
  __int64 v7; // rdx
  _DWORD *v8; // rsi
  int v9; // eax
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 i; // rbx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v15; // [rsp+58h] [rbp+10h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v15 = 0LL;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x80000u);
  v2 = AcpiEvaluateMethod(a1, 1229999199, 0LL, (unsigned int **)&P, &v14);
  v3 = P;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 256) |= *(_QWORD *)(a1 + 264) & 0xE0000000000LL;
    v4 = AcpiParseLpiObject(v3, v7, 0LL, &v15);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 >= 0 )
  {
    v8 = v15;
    v9 = ValidateProcessorLpiStates(v15);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      v4 = 0;
      *(_QWORD *)(a1 + 512) = v8;
      v5 = 0LL;
      Display_LPI(*(_QWORD *)(a1 + 512), v12, v10, v11);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x80000u);
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids,
        v9);
      v5 = v15;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x80000u);
    v5 = 0LL;
    if ( v4 == -1073741772 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids);
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids,
        v4);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v4 < 0 )
    *(_QWORD *)(a1 + 264) &= 0xFFFFE1FFFFFFFFFFuLL;
  if ( v5 )
  {
    for ( i = 0LL; (unsigned int)i < v5[4]; i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)&v5[20 * i + 24] )
        RtlFreeUnicodeString((PUNICODE_STRING)&v5[20 * i + 22]);
    }
    ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v4;
}
