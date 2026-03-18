/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01097F0
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C000BD2C (RtlStringLengthWorkerW.c)
 *     RtlStringCchCopyW @ 0x1C000E754 (RtlStringCchCopyW.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C000F860 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C000F930 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000FA54 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000FBBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0012220 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0014FD0 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C0016620 (memcmp.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C01165C8 (MonitorUnifyCCDMonitorString.c)
 *     MonitorLogBadEDID @ 0x1C0123F58 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(struct _UNICODE_STRING *this, __int64 a2, __int64 a3)
{
  unsigned __int8 *v4; // rdi
  wchar_t *Buffer; // rax
  __int64 *v6; // rax
  unsigned __int8 *v7; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  size_t v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  unsigned __int64 v27; // rax
  size_t v28; // rsi
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v35; // rdi
  PVOID v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 *v39; // rax
  struct _UNICODE_STRING *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  const UNICODE_STRING *v43; // rsi
  ULONG Buffer_high; // ecx
  __int64 v45; // rcx
  unsigned __int16 v46; // di
  wchar_t *v47; // rax
  wchar_t *v48; // r14
  struct _UNICODE_STRING *v49; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  const WCHAR *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int8 v67[4]; // [rsp+28h] [rbp-59h] BYREF
  unsigned __int16 v68; // [rsp+2Ch] [rbp-55h] BYREF
  size_t pcchLength; // [rsp+30h] [rbp-51h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-49h] BYREF
  WCHAR psz[3]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 v72[4]; // [rsp+4Eh] [rbp-33h] BYREF
  unsigned __int16 v73[33]; // [rsp+56h] [rbp-2Bh] BYREF
  __int16 v74; // [rsp+98h] [rbp+17h] BYREF

  if ( this[31].Buffer )
  {
    v52 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v52);
  }
  if ( *(_DWORD *)&this[26].Length != 1 )
  {
    v64 = L"SIMULATED";
    goto LABEL_66;
  }
  v4 = 0LL;
  if ( !*(_DWORD *)&this[7].Length )
    goto LABEL_63;
  Buffer = this[7].Buffer;
  if ( !Buffer )
    goto LABEL_63;
  v6 = *(__int64 **)Buffer;
  if ( !v6 )
    goto LABEL_63;
  do
  {
    if ( *((_DWORD *)v6 + 2) == 2 )
      break;
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_63:
    v63 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v63 + 24) = this;
    WdLogEvent5_WdWarning(v63);
    goto LABEL_64;
  }
  v7 = (unsigned __int8 *)(v6 + 3);
  IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v6 + 24);
  v12 = IsEDIDBaseBlock;
  if ( IsEDIDBaseBlock < 0 )
  {
    v53 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v53 + 24) = v7;
    *(_QWORD *)(v53 + 32) = v12;
    WdLogEvent5_WdWarning(v53);
    MonitorLogBadEDID(v7, (unsigned int)v12);
  }
  else
  {
    v4 = v7;
    LODWORD(v12) = 0;
  }
  if ( (int)v12 < 0 )
    goto LABEL_64;
  v73[27] = 0;
  v13 = EDIDV1_ObtainMonitorManufacturerName(v4, psz);
  v17 = v13;
  if ( v13 < 0
    || (v18 = EDIDV1_ObtainMonitorProductCodeID(v4, v72), v17 = v18, v18 < 0)
    || (v19 = EDIDV1_ObtainMonitorSerialNumber(v4, v73), v17 = v19, v19 < 0) )
  {
    v54 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v54 + 24) = v4;
    *(_QWORD *)(v54 + 32) = v17;
    WdLogEvent5_WdWarning(v54);
    MonitorLogBadEDID(v4, (unsigned int)v17);
LABEL_64:
    v64 = L"NOEDID";
LABEL_66:
    v40 = this + 31;
    *(_QWORD *)&this[34].Length = 0LL;
    RtlInitUnicodeString(this + 31, v64);
    BYTE4(this[30].Buffer) = 0;
    goto LABEL_34;
  }
  pcchLength = 20LL;
  v73[13] = 0;
  if ( RtlStringLengthWorkerW(psz, 0x23uLL, &pcchLength) < 0 )
  {
    v21 = 0LL;
    v55 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v55);
  }
  else
  {
    v21 = pcchLength;
  }
  if ( v21 > 0x17 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v56);
  }
  v67[0] = 0;
  v68 = 0;
  v22 = EDIDV1_ObtainMonitorManufactureDate(v4, v67, &v68);
  v26 = v22;
  if ( v22 < 0 )
  {
    v51 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v51 + 24) = v4;
    *(_QWORD *)(v51 + 32) = v26;
    WdLogEvent5_WdWarning(v51);
    MonitorLogBadEDID(v4, (unsigned int)v26);
  }
  v27 = v67[0];
  psz[v21] = 95;
  v28 = v21 + 1;
  psz[v28++] = a0123456789abcd_0[v27 >> 4];
  v29 = v68;
  psz[v28++] = a0123456789abcd_0[v27 & 0xF];
  psz[v28++] = 95;
  psz[v28++] = a0123456789abcd_0[(unsigned __int64)v29 >> 12];
  psz[v28++] = a0123456789abcd_0[(v29 >> 8) & 0xF];
  psz[v28++] = a0123456789abcd_0[(unsigned __int8)v29 >> 4];
  psz[v28++] = a0123456789abcd_0[v29 & 0xF];
  psz[v28++] = 95;
  v30 = v4[127];
  v31 = v30 & 0xF;
  psz[v28++] = a0123456789abcd_0[v30 >> 4];
  psz[v28] = a0123456789abcd_0[v31];
  v32 = v28 + 1;
  if ( 2 * v32 >= 0x46 )
    _report_rangecheckfailure();
  psz[v32] = 0;
  if ( v32 >= 0x23 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v31);
    WdLogEvent5_WdAssertion(v57);
  }
  KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Flink = DXGMONITOR::_UniqueEntryList.Flink;
  v35 = 0LL;
  while ( Flink != &DXGMONITOR::_UniqueEntryList )
  {
    v35 = (__int64)Flink;
    if ( HIDWORD(Flink[1].Flink) == v32 && !memcmp(&Flink[1].Blink, psz, 2 * v32) )
    {
      Flink = 0LL;
      break;
    }
    Flink = Flink->Flink;
  }
  if ( Flink )
  {
    v36 = operator new(2 * v32 + 32, 0x4D677844u, PagedPool);
    v35 = (__int64)v36;
    if ( !v36 )
    {
      v60 = WdLogNewEntry5_WdLowResource(v37);
      WdLogEvent5_WdLowResource(v60);
      KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
      return 3221225495LL;
    }
    *((_DWORD *)v36 + 5) = v32;
    *((_DWORD *)v36 + 4) = 1;
    if ( RtlStringCchCopyW((NTSTRSAFE_PWSTR)v36 + 12, v32 + 1, psz) < 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v62);
    }
    *(_WORD *)(v35 + 2 * v32 + 24) = 0;
    v39 = (__int64 *)qword_1C00619F0;
    if ( *(struct _LIST_ENTRY **)qword_1C00619F0 != &DXGMONITOR::_UniqueEntryList )
      __fastfail(3u);
    *(_QWORD *)v35 = &DXGMONITOR::_UniqueEntryList;
    *(_QWORD *)(v35 + 8) = v39;
    *v39 = v35;
    qword_1C00619F0 = v35;
  }
  else
  {
    if ( !v35 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v58);
    }
    if ( !*(_DWORD *)(v35 + 16) )
    {
      v59 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v59);
    }
    ++*(_DWORD *)(v35 + 16);
  }
  *(_QWORD *)&this[34].Length = v35;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v40 = this + 31;
  if ( !RtlCreateUnicodeString(this + 31, psz) )
  {
LABEL_60:
    v61 = WdLogNewEntry5_WdLowResource(v41);
    WdLogEvent5_WdLowResource(v61);
    return 3221225495LL;
  }
  BYTE4(this[30].Buffer) = 1;
LABEL_34:
  if ( this[31].Buffer && BYTE4(this[30].Buffer) )
    MonitorUnifyCCDMonitorString(v40);
  this[32] = *v40;
  if ( BYTE4(this[30].Buffer) )
    this[32].Length -= 6;
  v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 192LL) + 64LL);
  v43 = (const UNICODE_STRING *)((v42 + 4592) & -(__int64)(*(_QWORD *)(v42 + 4600) != 0LL));
  if ( v43 )
  {
    Buffer_high = HIDWORD(this[1].Buffer);
    String.Buffer = (wchar_t *)&v74;
    v74 = 0;
    *(_DWORD *)&String.Length = 1310720;
    if ( RtlIntegerToUnicodeString(Buffer_high, 0x10u, &String) < 0 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v45);
      WdLogEvent5_WdAssertion(v66);
    }
    v46 = String.Length + v43->Length + 8;
    v47 = (wchar_t *)operator new(v46, 0x4D677844u, PagedPool);
    v48 = v47;
    if ( v47 )
    {
      memset(v47, 0, v46);
      v49 = this + 33;
      v49->Length = 0;
      v49->MaximumLength = v46;
      v49->Buffer = v48;
      RtlAppendUnicodeToString(v49, L"_");
      RtlAppendUnicodeStringToString(v49, v43);
      RtlAppendUnicodeToString(v49, L"_");
      RtlAppendUnicodeStringToString(v49, &String);
      return 0LL;
    }
    goto LABEL_60;
  }
  v65 = WdLogNewEntry5_WdError(-*(_QWORD *)(v42 + 4600));
  *(_QWORD *)(v65 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 192LL);
  WdLogEvent5_WdError(v65);
  return 3221225473LL;
}
