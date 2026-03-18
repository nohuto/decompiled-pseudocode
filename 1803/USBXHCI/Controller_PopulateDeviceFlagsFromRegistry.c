/*
 * XREFs of Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00546A0
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C00545F4 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dx @ 0x1C000E220 (WPP_RECORDER_SF_dx.c)
 */

PDEVICE_OBJECT __fastcall Controller_PopulateDeviceFlagsFromRegistry(__int64 *a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // rsi
  PDEVICE_OBJECT result; // rax
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = *a1;
  if ( a2 == 2 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 312))(WdfDriverGlobals, v3);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 952))(
           WdfDriverGlobals,
           v5,
           131097LL,
           0LL,
           &v15);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
           WdfDriverGlobals,
           v3,
           1LL,
           131097LL,
           0LL,
           &v15);
  }
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UseStrictBiosHandoff");
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01023 + 1920))(
           WdfDriverGlobals,
           v15,
           &DestinationString,
           &v14) >= 0 )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
          a1[34] |= 0x8000000000000000uLL;
      }
      else
      {
        a1[34] &= ~0x8000000000000000uLL;
      }
    }
  }
  else
  {
    LODWORD(v12) = v6;
    WPP_RECORDER_SF_d(a1[9], 3u, 4u, 0x9Fu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v12);
  }
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v12) = a2;
    WPP_RECORDER_SF_d(a1[9], 5u, 4u, 0xA0u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v12);
  }
  v8 = 0;
  v9 = a1 + 34;
  do
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dx(a1[9], 5u, v7, 0xA1u, v11);
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  return result;
}
