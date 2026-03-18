/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C010722C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0001188 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1C00048CC (RtlStringCchLengthW.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C000F2BC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000F3B0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000F460 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C000F628 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memcmp @ 0x1C00151F0 (memcmp.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     __report_rangecheckfailure @ 0x1C003CB20 (__report_rangecheckfailure.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z @ 0x1C0107084 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C0110090 (MonitorUnifyCCDMonitorString.c)
 *     MonitorLogBadEDID @ 0x1C01E4118 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  size_t v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  unsigned __int64 v25; // rax
  size_t v26; // rsi
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _LIST_ENTRY *Flink; // r14
  __int64 v36; // rdi
  PVOID v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rax
  _OWORD *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  const UNICODE_STRING *v48; // rsi
  ULONG v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int16 v54; // di
  wchar_t *v55; // rax
  wchar_t *v56; // r14
  struct _UNICODE_STRING *v57; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  const WCHAR *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int8 v73[4]; // [rsp+28h] [rbp-59h] BYREF
  unsigned __int16 v74; // [rsp+2Ch] [rbp-55h] BYREF
  size_t pcchLength; // [rsp+30h] [rbp-51h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-49h] BYREF
  WCHAR psz[3]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 v78[4]; // [rsp+4Eh] [rbp-33h] BYREF
  unsigned __int16 v79[33]; // [rsp+56h] [rbp-2Bh] BYREF
  __int16 v80; // [rsp+98h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 58) )
  {
    v59 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v59);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v61 = L"SIMULATED";
    goto LABEL_54;
  }
  pcchLength = 0LL;
  if ( (int)DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, (unsigned __int8 **)&pcchLength, a3, a4) < 0 )
  {
LABEL_39:
    v61 = L"NOEDID";
LABEL_54:
    v44 = (_OWORD *)((char *)this + 456);
    *((_QWORD *)this + 63) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 456), v61);
    *((_BYTE *)this + 452) = 0;
    goto LABEL_27;
  }
  v5 = (unsigned __int8 *)pcchLength;
  v79[27] = 0;
  v6 = EDIDV1_ObtainMonitorManufacturerName((unsigned __int8 *)pcchLength, psz);
  v11 = v6;
  if ( v6 < 0
    || (v12 = EDIDV1_ObtainMonitorProductCodeID(v5, v78), v11 = v12, v12 < 0)
    || (v13 = EDIDV1_ObtainMonitorSerialNumber(v5, v79), v11 = v13, v13 < 0) )
  {
    v60 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v60 + 24) = v5;
    *(_QWORD *)(v60 + 32) = v11;
    WdLogEvent5_WdWarning(v60);
    MonitorLogBadEDID(v5, (unsigned int)v11);
    goto LABEL_39;
  }
  pcchLength = 20LL;
  v79[13] = 0;
  if ( RtlStringCchLengthW(psz, 0x23uLL, &pcchLength) < 0 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v62);
  }
  v18 = pcchLength;
  if ( pcchLength > 0x17 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v63);
  }
  v73[0] = 0;
  v74 = 0;
  v19 = EDIDV1_ObtainMonitorManufactureDate(v5, v73, &v74);
  v24 = v19;
  if ( v19 < 0 )
  {
    v64 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v64 + 24) = v5;
    *(_QWORD *)(v64 + 32) = v24;
    WdLogEvent5_WdWarning(v64);
    MonitorLogBadEDID(v5, (unsigned int)v24);
  }
  v25 = v73[0];
  psz[v18] = 95;
  v26 = v18 + 1;
  psz[v26++] = a0123456789abcd_0[v25 >> 4];
  v27 = v74;
  psz[v26++] = a0123456789abcd_0[v25 & 0xF];
  psz[v26++] = 95;
  psz[v26++] = a0123456789abcd_0[(unsigned __int64)v27 >> 12];
  psz[v26++] = a0123456789abcd_0[(v27 >> 8) & 0xF];
  psz[v26++] = a0123456789abcd_0[(unsigned __int8)v27 >> 4];
  psz[v26++] = a0123456789abcd_0[v27 & 0xF];
  psz[v26++] = 95;
  v28 = v5[127];
  v29 = v28 & 0xF;
  psz[v26++] = a0123456789abcd_0[v28 >> 4];
  psz[v26] = a0123456789abcd_0[v29];
  v30 = v26 + 1;
  if ( 2 * v30 >= 0x46 )
    _report_rangecheckfailure();
  psz[v30] = 0;
  if ( v30 >= 0x23 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v29, 95LL, L"0123456789ABCDEF", v23);
    WdLogEvent5_WdAssertion(v65);
  }
  KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Flink = DXGMONITOR::_UniqueEntryList.Flink;
  v36 = 0LL;
  while ( Flink != &DXGMONITOR::_UniqueEntryList )
  {
    v36 = (__int64)Flink;
    if ( HIDWORD(Flink[1].Flink) == v30 && !memcmp(&Flink[1].Blink, psz, 2 * v30) )
    {
      Flink = 0LL;
      break;
    }
    Flink = Flink->Flink;
  }
  if ( Flink )
  {
    v37 = operator new(2 * v30 + 32, 0x4D677844u, PagedPool);
    v36 = (__int64)v37;
    if ( !v37 )
    {
      v68 = WdLogNewEntry5_WdLowResource(v38);
      WdLogEvent5_WdLowResource(v68);
      KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
      return 3221225495LL;
    }
    *((_DWORD *)v37 + 5) = v30;
    *((_DWORD *)v37 + 4) = 1;
    if ( RtlStringCchCopyW((NTSTRSAFE_PWSTR)v37 + 12, v30 + 1, psz) < 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
      WdLogEvent5_WdAssertion(v70);
    }
    *(_WORD *)(v36 + 2 * v30 + 24) = 0;
    v43 = (__int64 *)qword_1C0070B38;
    if ( *(struct _LIST_ENTRY **)qword_1C0070B38 != &DXGMONITOR::_UniqueEntryList )
      __fastfail(3u);
    *(_QWORD *)v36 = &DXGMONITOR::_UniqueEntryList;
    *(_QWORD *)(v36 + 8) = v43;
    *v43 = v36;
    qword_1C0070B38 = v36;
  }
  else
  {
    if ( !v36 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      WdLogEvent5_WdAssertion(v66);
    }
    if ( !*(_DWORD *)(v36 + 16) )
    {
      v67 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      WdLogEvent5_WdAssertion(v67);
    }
    ++*(_DWORD *)(v36 + 16);
  }
  *((_QWORD *)this + 63) = v36;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v44 = (_OWORD *)((char *)this + 456);
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)this + 456), psz) )
  {
LABEL_50:
    v69 = WdLogNewEntry5_WdLowResource(v46);
    WdLogEvent5_WdLowResource(v69);
    return 3221225495LL;
  }
  *((_BYTE *)this + 452) = 1;
LABEL_27:
  if ( *((_QWORD *)this + 58) && *((_BYTE *)this + 452) )
    MonitorUnifyCCDMonitorString(v44);
  *(_OWORD *)((char *)this + 472) = *v44;
  if ( *((_BYTE *)this + 452) )
    *((_WORD *)this + 236) -= 6;
  v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL) + 192LL) + 64LL);
  v48 = (const UNICODE_STRING *)((v47 + 4496) & -(__int64)(*(_QWORD *)(v47 + 4504) != 0LL));
  if ( v48 )
  {
    v49 = *((_DWORD *)this + 7);
    String.Buffer = (wchar_t *)&v80;
    v80 = 0;
    *(_DWORD *)&String.Length = 1310720;
    if ( RtlIntegerToUnicodeString(v49, 0x10u, &String) < 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
      WdLogEvent5_WdAssertion(v72);
    }
    v54 = v48->Length + String.Length + 8;
    v55 = (wchar_t *)operator new(v54, 0x4D677844u, PagedPool);
    v56 = v55;
    if ( v55 )
    {
      memset(v55, 0, v54);
      v57 = (struct _UNICODE_STRING *)((char *)this + 488);
      v57->Length = 0;
      v57->MaximumLength = v54;
      v57->Buffer = v56;
      RtlAppendUnicodeToString(v57, L"_");
      RtlAppendUnicodeStringToString(v57, v48);
      RtlAppendUnicodeToString(v57, L"_");
      RtlAppendUnicodeStringToString(v57, &String);
      return 0LL;
    }
    goto LABEL_50;
  }
  v71 = WdLogNewEntry5_WdError(-*(_QWORD *)(v47 + 4504), v45);
  *(_QWORD *)(v71 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL) + 192LL);
  WdLogEvent5_WdError(v71);
  return 3221225473LL;
}
