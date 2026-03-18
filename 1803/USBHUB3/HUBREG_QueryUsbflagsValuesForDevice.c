/*
 * XREFs of HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006F138
 * Callers:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C006E0B8 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C00109C4 (RtlUnicodeStringPrintf.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C002B724 (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C002CA84 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006E800 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryUsbflagsValuesForDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v9; // r13
  __int64 v10; // rax
  int v11; // esi
  _WORD *v12; // r9
  _WORD *v13; // rcx
  _WORD *v14; // rdx
  __int64 v15; // rbx
  NTSTATUS v16; // eax
  unsigned __int16 v17; // r9
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  bool v24; // zf
  bool v25; // zf
  char v26; // al
  __int64 v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  char v39; // [rsp+D0h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a1;
  v9 = *(_BYTE *)(*(_QWORD *)a1 + 192LL);
  DestinationString.Buffer = (wchar_t *)&v39;
  v10 = *(_QWORD *)(a1 + 8);
  v36 = 0LL;
  v30 = 0LL;
  *(_DWORD *)&DestinationString.Length = 6291456;
  v11 = HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v36, &v30, *(_QWORD *)(v10 + 1432));
  if ( v11 < 0 )
    goto LABEL_129;
  v37 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( *(_DWORD *)(v4 + 160) == 3 && (v12 = *(_WORD **)(v4 + 168)) != 0LL )
  {
    v13 = *(_WORD **)(v4 + 176);
    v14 = *(_WORD **)(v4 + 184);
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
  }
  HUBMISC_QueryKseDeviceFlags(
    a2,
    a3,
    a4,
    v12,
    v13,
    v14,
    &v37,
    &v33,
    &v34,
    &v31,
    &v32,
    0,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  v15 = v37 | v33 | v34 | v31 | v32;
  v16 = RtlUnicodeStringPrintf(
          &DestinationString,
          L"IgnoreHWSerNum%04X%04X",
          *(unsigned __int16 *)(a1 + 1996),
          *(unsigned __int16 *)(a1 + 1998));
  v11 = v16;
  if ( v16 < 0 )
  {
    v17 = 23;
LABEL_8:
    LODWORD(v28) = v16;
LABEL_128:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v17,
      (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
      v28);
    goto LABEL_129;
  }
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v36,
          &DestinationString,
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 24;
      goto LABEL_8;
    }
  }
  else if ( v29 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 1u);
  }
  v29 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L"\b\n",
          2LL,
          &v29,
          0LL,
          0LL);
  if ( v11 >= 0 )
  {
    if ( v29 )
    {
      *(_BYTE *)(a1 + 2052) = BYTE1(v29);
      goto LABEL_25;
    }
    goto LABEL_19;
  }
  if ( v11 != -1073741772 )
  {
    v17 = 25;
    LODWORD(v28) = v11;
    goto LABEL_128;
  }
  if ( (v15 & 1) != 0 )
  {
LABEL_19:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x80u);
    goto LABEL_25;
  }
  if ( (v31 & 2) != 0 || (v32 & 2) != 0 || (v33 & 2) != 0 || (v34 & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 2u);
LABEL_25:
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          &g_IgnoreHwSerialNumber,
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 26;
      goto LABEL_8;
    }
    v18 = (v15 & 0x40) == 0;
  }
  else
  {
    v18 = v29 == 0;
  }
  if ( !v18 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 1u);
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L"68",
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 27;
      goto LABEL_8;
    }
    v19 = (int)v15 >= 0;
  }
  else
  {
    v19 = v29 == 0;
  }
  if ( !v19 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x200000u);
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          &g_ResetOnResume,
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 28;
      goto LABEL_8;
    }
    v20 = (v15 & 4) == 0;
  }
  else
  {
    v20 = v29 == 0;
  }
  if ( !v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 4u);
  v29 = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 8u);
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L"&(",
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 29;
      goto LABEL_8;
    }
    if ( (v15 & 8) == 0 )
      goto LABEL_49;
    goto LABEL_48;
  }
  if ( !v29 )
LABEL_48:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFF7);
LABEL_49:
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L"02",
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 30;
      goto LABEL_8;
    }
    v21 = (v15 & 0x10) == 0;
  }
  else
  {
    v21 = v29 == 0;
  }
  if ( !v21 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L":<",
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 31;
      goto LABEL_8;
    }
    v22 = (v15 & 0x1000000000LL) == 0;
  }
  else
  {
    v22 = v29 == 0;
  }
  if ( !v22 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800000u);
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L"(*",
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 32;
      goto LABEL_8;
    }
    v23 = (v15 & 0x20) == 0;
  }
  else
  {
    v23 = v29 == 0;
  }
  if ( !v23 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x20u);
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          &g_DisableLpm,
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 33;
      goto LABEL_8;
    }
    v24 = (v15 & 0x1000) == 0;
  }
  else
  {
    v24 = v29 == 0;
  }
  if ( !v24 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80u);
  if ( (v15 & 0x400) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x40u);
  if ( (v15 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x100u);
  if ( (v15 & 0x10000) != 0 && *(_BYTE *)(*(_QWORD *)a1 + 232LL) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80u);
  if ( (v15 & 0x80000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400u);
  if ( (v15 & 0x200000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800u);
  if ( (v15 & 0x800000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x1000u);
  if ( (v15 & 0x1000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x2000u);
  v29 = 0;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L",.",
          4LL,
          &v29,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 34;
      goto LABEL_8;
    }
    v25 = (v15 & 0x8000000) == 0;
  }
  else
  {
    v25 = v29 == 0;
  }
  if ( !v25 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
  if ( (v15 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x20000u);
  if ( (v15 & 0x20000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x40000u);
  if ( (v15 & 0x40000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x100000u);
  if ( ((v15 & 0x400000) != 0 || (v15 & 0x4000000000LL) != 0 && v9) && (*(_DWORD *)(a1 + 1632) & 2) == 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80000u);
  if ( (v15 & 0x100000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400000u);
  if ( (v15 & 0x2000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x1000000u);
  v35 = 0LL;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v30,
          L".0",
          8LL,
          &v35,
          0LL,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
    {
      v17 = 35;
      goto LABEL_8;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2468), 4u);
    v26 = BYTE6(v35);
    *(_DWORD *)(a1 + 2464) |= 4u;
    *(_BYTE *)(a1 + 2052) = v26;
    *(_QWORD *)(a1 + 2480) = v35;
  }
  if ( *(_WORD *)(a1 + 1996) == 8457 && *(_WORD *)(a1 + 1998) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2000) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10000u);
  HUBREG_QueryUsbflagsAlternateSettingFilter(a1, v30);
  v11 = 0;
LABEL_129:
  if ( v30 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v36 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v11;
}
