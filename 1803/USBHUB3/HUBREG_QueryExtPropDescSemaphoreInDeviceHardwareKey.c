/*
 * XREFs of HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey @ 0x1C0070734
 * Callers:
 *     HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried @ 0x1C001E5B0 (HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax
  unsigned __int16 v5; // r9
  int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-18h]
  int v11; // [rsp+70h] [rbp+30h] BYREF
  int v12; // [rsp+78h] [rbp+38h] BYREF
  int v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                      WdfDriverGlobals,
                      v3,
                      1LL,
                      131097LL,
                      0LL,
                      &v14);
  if ( (int)result < 0 )
  {
    v5 = 78;
LABEL_18:
    LODWORD(v8) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             v5,
             (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
             v8);
  }
  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v14,
         &g_RevisionId,
         4LL,
         &v12,
         0LL,
         0LL);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741772 )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Fu,
      (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
      v9);
  }
  v11 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v14,
         &g_VendorRevision,
         4LL,
         &v11,
         0LL,
         0LL);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741772 )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x50u,
      (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
      v10);
  }
  v13 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1632), 0xFFFFFDFF);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v14,
             L"(*",
             4LL,
             &v13,
             0LL,
             0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
      return result;
    v5 = 81;
    goto LABEL_18;
  }
  result = *(unsigned __int16 *)(a1 + 2000);
  if ( v12 != (_DWORD)result )
    return result;
  if ( (*(_DWORD *)(a1 + 2464) & 0x400) != 0 )
  {
    result = *(_QWORD *)(a1 + 2528);
    if ( v11 != *(unsigned __int16 *)(result + 4) )
      return result;
    goto LABEL_15;
  }
  if ( !v11 )
LABEL_15:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x200u);
  return result;
}
