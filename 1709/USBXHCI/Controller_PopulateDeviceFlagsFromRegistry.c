/*
 * XREFs of Controller_PopulateDeviceFlagsFromRegistry @ 0x1C0057734
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C0057684 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dx @ 0x1C0015580 (WPP_RECORDER_SF_dx.c)
 */

PDEVICE_OBJECT __fastcall Controller_PopulateDeviceFlagsFromRegistry(__int64 *a1, int a2)
{
  bool v2; // zf
  __int64 v4; // rdx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // edi
  _QWORD *v10; // rsi
  PDEVICE_OBJECT result; // rax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v2 = a2 == 2;
  v4 = *a1;
  if ( v2 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 312))(WdfDriverGlobals, v4);
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 952))(
           WdfDriverGlobals,
           v6,
           131097LL,
           0LL,
           &v16);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
           WdfDriverGlobals,
           v4,
           1LL,
           131097LL,
           0LL,
           &v16);
  }
  if ( v7 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UseStrictBiosHandoff");
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v16,
           &DestinationString,
           &v15) >= 0 )
    {
      if ( v15 )
      {
        if ( v15 == 1 )
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
    LODWORD(v13) = v7;
    WPP_RECORDER_SF_d(a1[9], 3u, 4u, 0x9Eu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v13);
  }
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = a2;
    WPP_RECORDER_SF_d(a1[9], 5u, 4u, 0x9Fu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v13);
  }
  v9 = 0;
  v10 = a1 + 34;
  do
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dx(a1[9], 5u, v8, 0xA0u, v12);
    ++v9;
    ++v10;
  }
  while ( v9 < 2 );
  return result;
}
