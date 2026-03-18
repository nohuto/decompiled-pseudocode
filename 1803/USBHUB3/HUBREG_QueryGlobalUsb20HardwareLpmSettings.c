/*
 * XREFs of HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1C00712F0
 * Callers:
 *     DriverEntry @ 0x1C0077008 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryGlobalUsb20HardwareLpmSettings(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x8000u);
  v2 = WdfFunctions_01015;
  *(_BYTE *)(a1 + 72) = 2;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(v2 + 1832))(
             WdfDriverGlobals,
             0LL,
             &g_Usb20HardwareLpmKeyName,
             131097LL,
             0LL,
             &v5);
  if ( (int)result >= 0 )
  {
    v4 = 0;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v5,
           L"02",
           4LL,
           &v4,
           0LL,
           0LL) >= 0 )
    {
      if ( v4 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x8000u);
      else
        _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFF7FFF);
    }
    v4 = 0;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
               WdfDriverGlobals,
               v5,
               L".0",
               4LL,
               &v4,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      result = v4;
      if ( v4 <= 0xFF )
        *(_BYTE *)(a1 + 72) = v4;
    }
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
