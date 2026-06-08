/*
 * XREFs of InitPep @ 0x1C001EAC8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     RegisterPepDevice @ 0x1C001EC5C (RegisterPepDevice.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  char v7; // dl
  char v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = RegisterPepDevice(a1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 78) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C001A858)(*(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 1088));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A5D8,
      0LL);
    if ( !PepLpiInitialized )
    {
      v4 = *(_QWORD *)(a1 + 264);
      if ( (v4 & 0x100000000000LL) != 0 && (v4 & 0xE0000000000LL) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 1088);
        v9 = 0;
        v6 = PoFxProcessorNotification(v5, 34LL, &v9);
        v7 = 0;
        if ( v6 >= 0 )
          v7 = v9;
        PepLpiDisabled = v7;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      *(_QWORD *)(a1 + 264) &= 0xFFFFE1FFFFFFFFFFuLL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001A5D8);
  }
  else
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xAu,
      (__int64)&WPP_03cea2f8b6a43217516e73b8caef141a_Traceguids,
      v2);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return v3;
}
