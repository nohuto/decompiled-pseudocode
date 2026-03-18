/*
 * XREFs of HUBREG_QueryHubErrataFlags @ 0x1C006FA78
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0069F2C (HUBFDO_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C002B724 (HUBMISC_QueryKseDeviceFlags.c)
 *     WER_CreateReport @ 0x1C0035FAC (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006E800 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  int v9; // esi
  _WORD *v10; // r9
  _WORD *v11; // rcx
  _WORD *v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  unsigned __int16 v18; // r9
  __int64 v20; // [rsp+30h] [rbp-51h]
  __int64 v21; // [rsp+38h] [rbp-49h]
  __int64 v22; // [rsp+78h] [rbp-9h] BYREF
  __int64 v23; // [rsp+80h] [rbp-1h] BYREF
  __int64 v24; // [rsp+88h] [rbp+7h] BYREF
  __int64 v25; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+98h] [rbp+17h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+A8h] [rbp+27h] BYREF
  int v29; // [rsp+E8h] [rbp+67h] BYREF

  v5 = *(_BYTE *)(a1 + 192);
  v21 = *(_QWORD *)(a1 + 2512);
  v28 = 0LL;
  v22 = 0LL;
  v9 = HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v28, &v22, v21);
  if ( v9 < 0 )
    goto LABEL_69;
  v15 = *(_DWORD *)(a1 + 160) == 3;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( v15 && (v10 = *(_WORD **)(a1 + 168)) != 0LL )
  {
    v11 = *(_WORD **)(a1 + 176);
    v12 = *(_WORD **)(a1 + 184);
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
  }
  HUBMISC_QueryKseDeviceFlags(
    a2,
    a3,
    a4,
    v10,
    v11,
    v12,
    &v27,
    &v26,
    &v25,
    &v24,
    &v23,
    *(_BYTE *)(a1 + 232) == 0,
    *(_QWORD *)(a1 + 2512));
  v13 = v27 | v26 | v25 | v24 | v23;
  v29 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v22,
          &g_ResetTTOnCancel,
          4LL,
          &v29,
          0LL,
          0LL);
  v9 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v18 = 36;
      goto LABEL_68;
    }
    v15 = (v13 & 0x100) == 0;
  }
  else
  {
    v15 = v29 == 0;
  }
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
  v29 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v22,
          L".0",
          4LL,
          &v29,
          0LL,
          0LL);
  v9 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
    {
      v18 = 37;
      goto LABEL_68;
    }
    v16 = (v13 & 0x200) == 0;
  }
  else
  {
    v16 = v29 == 0;
  }
  if ( !v16 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
  }
  if ( (v13 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v29 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v22,
          &g_DisableLpm,
          4LL,
          &v29,
          0LL,
          0LL);
  v9 = v14;
  if ( v14 < 0 )
  {
    if ( v14 == -1073741772 )
    {
      v17 = (v13 & 0x1000) == 0;
      goto LABEL_24;
    }
    v18 = 38;
LABEL_68:
    LODWORD(v20) = v14;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      3u,
      v18,
      (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
      v20);
    goto LABEL_69;
  }
  v17 = v29 == 0;
LABEL_24:
  if ( !v17 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  if ( (v13 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
  if ( (v13 & 0x8000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
  if ( (v13 & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
  if ( (v13 & 0x100000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
  if ( (v13 & 0x400000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (v13 & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
  if ( (v13 & 0x4000000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2488), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( (v13 & 0x40000000000LL) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2488), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2488), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( !*(_BYTE *)(a1 + 232) && (v13 & 0x10000) != 0 )
    *(_DWORD *)(a1 + 2488) |= 1u;
  if ( (v13 & 0x10000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
  if ( (v13 & 0x8000000000LL) != 0 && v5 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 1u);
  if ( (v13 & 0x20000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
  if ( (v13 & 8) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
  if ( (v13 & 0x800000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
  if ( (v13 & 0x10000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 2u);
  if ( *(_WORD *)(a1 + 2456) == 8457 && *(_WORD *)(a1 + 2458) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2460) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    WER_CreateReport(a1, 0x2000000LL, 0x800000LL, 12290, 0);
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 4u, 3u, 0x27u, (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids);
  }
  v9 = 0;
LABEL_69:
  if ( v22 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v28 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v9;
}
