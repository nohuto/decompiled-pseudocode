/*
 * XREFs of WER_CreateReport @ 0x1C0035FAC
 * Callers:
 *     HUBMISC_CreateWerReport @ 0x1C002C28C (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006FA78 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WER_UpdateThrottlePolicy @ 0x1C0035C4C (WER_UpdateThrottlePolicy.c)
 *     WER_StoreDeviceContext @ 0x1C0035CC4 (WER_StoreDeviceContext.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C0036B60 (TelemetryData_InsertTriageDataBlock.c)
 *     TelemetryData_CreateReport @ 0x1C0036CD8 (TelemetryData_CreateReport.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C0072B1C (HUBREG_QueryDeviceWerThrottleMask.c)
 *     TelemetryData_SubmitReport @ 0x1C0075900 (TelemetryData_SubmitReport.c)
 */

__int64 __fastcall WER_CreateReport(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rdi
  int DeviceWerThrottleMask; // eax
  signed int v11; // ebx
  unsigned __int16 v12; // r15
  unsigned __int16 v13; // r14
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  int v18; // r15d
  unsigned int v19; // ebx
  _QWORD **v20; // rdi
  _QWORD *i; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 Report; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD **v33; // r12
  _QWORD *j; // rax
  _QWORD *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned int v38; // r14d
  _QWORD **v39; // r15
  _QWORD *k; // rax
  _QWORD *v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rax
  int inserted; // [rsp+30h] [rbp-51h]
  unsigned int v47; // [rsp+34h] [rbp-4Dh] BYREF
  int v48; // [rsp+38h] [rbp-49h]
  unsigned int v49; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v50; // [rsp+40h] [rbp-41h] BYREF
  __int64 v51; // [rsp+48h] [rbp-39h] BYREF
  __int64 v52; // [rsp+50h] [rbp-31h]
  char pszDest[40]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v54[16]; // [rsp+80h] [rbp-1h] BYREF

  v5 = *(_QWORD *)(a1 + 2512);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = a4;
  v9 = 0LL;
  v48 = a4;
  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(v7, v5);
  v11 = ((1 << (v8 & 0x1F)) & DeviceWerThrottleMask) != 0 ? 0xC0000001 : 0;
  if ( ((1 << (v8 & 0x1F)) & DeviceWerThrottleMask) != 0 )
    goto LABEL_74;
  v12 = *(_WORD *)(a1 + 2460);
  v13 = *(_WORD *)(a1 + 2458);
  v14 = *(unsigned __int16 *)(a1 + 2456);
  memset(pszDest, 0, sizeof(pszDest));
  v11 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", v14);
  if ( v11 < 0 )
    goto LABEL_77;
  v11 = RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", v13);
  if ( v11 < 0 )
    goto LABEL_77;
  v11 = RtlStringCchPrintfA(&pszDest[10], 5uLL, "%04X", v12);
  if ( v11 < 0 )
    goto LABEL_77;
  v15 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&pszDest[16] = a1;
  *(_OWORD *)&pszDest[24] = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v15);
  v18 = 1;
  v19 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v20 = (_QWORD **)(a1 + 2352);
    do
    {
      for ( i = *v20; ; i = (_QWORD *)*i )
      {
        v17 = i - 31;
        if ( v20 == i )
          break;
        if ( *((unsigned __int16 *)v17 + 100) == v19 )
        {
          if ( i != (_QWORD *)248 )
          {
            v22 = v17[166];
            if ( v22 )
            {
              v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      v17[166]);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v23,
                "WER Tag",
                241LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              v16 = *(_QWORD *)(v22 + 16);
              if ( v16 )
              {
                v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v24,
                  "WER Tag",
                  245LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              }
            }
          }
          break;
        }
      }
      ++v19;
    }
    while ( v19 <= *(unsigned __int16 *)(a1 + 48) );
    v8 = v48;
  }
  Report = TelemetryData_CreateReport((_DWORD)v17, v16, v8, (unsigned int)pszDest, a5);
  v52 = Report;
  v9 = Report;
  if ( Report )
  {
    inserted = TelemetryData_InsertTriageDataBlock(Report, pszDest, 40LL);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_60;
    inserted = TelemetryData_InsertTriageDataBlock(v9, a1, 2608LL);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_60;
    inserted = TelemetryData_InsertTriageDataBlock(v9, &WPP_GLOBAL_Control, 8LL);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_60;
    if ( WPP_GLOBAL_Control )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, WPP_GLOBAL_Control, 80LL);
      v11 = inserted;
      if ( inserted < 0 )
        goto LABEL_60;
    }
    inserted = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 2512), &v50, &v47, v54);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_60;
    inserted = TelemetryData_InsertTriageDataBlock(v9, v50, v47);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_60;
    inserted = imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v51, &v49, v54);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_60;
    inserted = TelemetryData_InsertTriageDataBlock(v9, v51, v49);
    v11 = inserted;
    if ( inserted < 0 )
      goto LABEL_60;
    if ( *(_BYTE *)(a1 + 232) )
    {
      v26 = *(_QWORD *)(a1 + 24);
      if ( v26 )
      {
        inserted = TelemetryData_InsertTriageDataBlock(v9, v26, 336LL);
        v11 = inserted;
        if ( inserted < 0 )
          goto LABEL_60;
        v27 = *(_QWORD *)(a1 + 24);
        v28 = *(_QWORD *)(v27 + 64);
        if ( v28 )
        {
          inserted = TelemetryData_InsertTriageDataBlock(v9, *(_QWORD *)(v27 + 64), 456LL);
          v11 = inserted;
          if ( inserted < 0 )
            goto LABEL_60;
          v29 = *(_QWORD *)(v28 + 24);
          if ( v29 )
          {
            inserted = WER_StoreDeviceContext(v9, v29);
            v11 = inserted;
            if ( inserted < 0 )
              goto LABEL_60;
          }
        }
      }
    }
    v30 = *(_QWORD *)(a1 + 808);
    if ( v30 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, v30, *(unsigned __int16 *)(v30 + 2));
      v11 = inserted;
      if ( inserted < 0 )
        goto LABEL_60;
    }
    v31 = *(_QWORD *)(a1 + 1248);
    if ( v31 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, v31, *(unsigned __int16 *)(v31 + 2));
      v11 = inserted;
      if ( inserted < 0 )
        goto LABEL_60;
    }
    v32 = *(_QWORD *)(a1 + 2544);
    if ( v32 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, v32, *(unsigned __int16 *)(a1 + 2536));
      v11 = inserted;
      if ( inserted < 0 )
        goto LABEL_60;
    }
    if ( !*(_WORD *)(a1 + 48) )
      goto LABEL_60;
    v33 = (_QWORD **)(a1 + 2352);
    while ( 2 )
    {
      for ( j = *v33; ; j = (_QWORD *)*j )
      {
        v35 = j - 31;
        if ( v33 == j )
          break;
        if ( *((unsigned __int16 *)v35 + 100) == v18 )
        {
          if ( j != (_QWORD *)248 )
          {
            v11 = TelemetryData_InsertTriageDataBlock(v9, v35, 1464LL);
            if ( v11 < 0 )
              goto LABEL_58;
            v36 = v35[4];
            if ( v36 )
            {
              v11 = TelemetryData_InsertTriageDataBlock(v9, v36, *(unsigned __int16 *)(v36 + 2));
              if ( v11 < 0 )
                goto LABEL_58;
            }
            v11 = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, v35[179], &v50, &v47, v54);
            if ( v11 < 0 )
              goto LABEL_58;
            v11 = TelemetryData_InsertTriageDataBlock(v9, v50, v47);
            if ( v11 < 0 )
              goto LABEL_58;
            v37 = v35[166];
            if ( v37 )
            {
              v11 = WER_StoreDeviceContext(v9, v37);
              if ( v11 < 0 )
                goto LABEL_58;
            }
          }
          break;
        }
      }
      if ( ++v18 <= (unsigned int)*(unsigned __int16 *)(a1 + 48) )
        continue;
      break;
    }
LABEL_58:
    LOBYTE(v8) = v48;
  }
  else
  {
    v11 = -1073741670;
  }
  inserted = v11;
LABEL_60:
  v38 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v39 = (_QWORD **)(a1 + 2352);
    do
    {
      for ( k = *v39; ; k = (_QWORD *)*k )
      {
        v41 = k - 31;
        if ( v39 == k )
          break;
        if ( *((unsigned __int16 *)v41 + 100) == v38 )
        {
          if ( k != (_QWORD *)248 )
          {
            v42 = v41[166];
            if ( v42 )
            {
              v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      v41[166]);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                WdfDriverGlobals,
                v43,
                "WER Tag",
                232LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              if ( *(_QWORD *)(v42 + 16) )
              {
                v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                  WdfDriverGlobals,
                  v44,
                  "WER Tag",
                  236LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              }
            }
          }
          break;
        }
      }
      ++v38;
    }
    while ( v38 <= *(unsigned __int16 *)(a1 + 48) );
    v11 = inserted;
    v9 = v52;
    LOBYTE(v8) = v48;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16));
LABEL_74:
  if ( v11 < 0 )
  {
LABEL_77:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      5u,
      0xBu,
      (__int64)&WPP_b61b56af14d53371dd11efabef6a8b4a_Traceguids,
      v11);
    goto LABEL_78;
  }
  v11 = TelemetryData_SubmitReport(v9);
  if ( v11 >= 0 )
    WER_UpdateThrottlePolicy(*(_QWORD *)(a1 + 16), v8, *(_QWORD *)(a1 + 2512));
LABEL_78:
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)v9, 0x74614454u);
      *(_QWORD *)v9 = 0LL;
      *(_DWORD *)(v9 + 8) = 0;
    }
    ExFreePoolWithTag((PVOID)v9, 0x74614454u);
  }
  return (unsigned int)v11;
}
