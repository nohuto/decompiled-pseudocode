/*
 * XREFs of HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C0070AB0
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A250 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002BDA8 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 */

__int64 __fastcall HUBREG_QueryValuesInDeviceHardwareKey(__int64 a1)
{
  __int64 v1; // rdx
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  PVOID PoolWithTag; // rax
  PVOID v9; // rsi
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v13; // [rsp+48h] [rbp-20h] BYREF
  void *Src; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v16 = 0LL;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632);
  v12 = 0LL;
  v17 = 0LL;
  v4 = v3(WdfDriverGlobals, v1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v4,
         1LL,
         131097LL,
         0LL,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 81;
LABEL_3:
    LODWORD(v11) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v7,
      (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids,
      v11);
    goto LABEL_39;
  }
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v16,
         L"02",
         4LL,
         &v15,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 82;
      goto LABEL_3;
    }
  }
  else if ( v15 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x400u);
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         0LL,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 83;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1912))(
         WdfDriverGlobals,
         v16,
         &g_FriendlyName,
         v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 85;
      goto LABEL_3;
    }
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v17,
      &v13);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v13, 0x64334855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x54u,
        (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids);
      goto LABEL_39;
    }
    memmove(PoolWithTag, Src, v13);
    *(_DWORD *)(a1 + 2164) = v13;
    *(_QWORD *)(a1 + 2168) = v9;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v16,
         L"HJ",
         131097LL,
         0LL,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v15 = 0;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v12,
           &g_D3ColdSupported,
           4LL,
           &v15,
           0LL,
           0LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      if ( v5 != -1073741772 )
      {
        v7 = 88;
        goto LABEL_3;
      }
    }
    else if ( v15 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x1000u);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x57u,
        (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids);
    }
  }
  else if ( v5 != -1073741772 )
  {
    v7 = 86;
    goto LABEL_3;
  }
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v16,
         L" \"",
         4LL,
         &v15,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 89;
      goto LABEL_3;
    }
  }
  else if ( v15 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x4000u);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = 1000;
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v16,
         L",.",
         4LL,
         &v15,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
    {
      v7 = 90;
      goto LABEL_3;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = v15;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 104))(
         WdfDriverGlobals,
         0LL,
         &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 91;
    goto LABEL_3;
  }
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, __int64))(WdfFunctions_01015 + 1896))(
         WdfDriverGlobals,
         v16,
         L"$&",
         0LL,
         v18) >= 0 )
    HUBREG_ValidateAndPopulateEndpointPriorities(a1, v18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v18);
  v6 = 0;
LABEL_39:
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v6;
}
