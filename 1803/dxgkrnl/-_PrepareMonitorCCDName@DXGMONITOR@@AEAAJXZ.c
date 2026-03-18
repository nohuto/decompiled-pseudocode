/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0237848
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002DBC (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0016DDC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C0018520 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0018614 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C00186C8 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C0018768 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C001B010 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C001C500 (memcmp.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0047588 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     MonitorLogBadEDID @ 0x1C022E99C (MonitorLogBadEDID.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C022F64C (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(struct _UNICODE_STRING *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // rdi
  wchar_t *Buffer; // rax
  __int64 *v7; // rax
  __int64 v8; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  PVOID v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rax
  unsigned __int16 *p_Length; // rdi
  __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // al
  __int64 v57; // rax
  char v58; // cl
  __int64 v59; // rax
  const UNICODE_STRING *v60; // rsi
  __int64 v61; // rax
  ULONG Buffer_high; // ecx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int16 v65; // di
  wchar_t *v66; // rax
  wchar_t *v67; // r14
  struct _UNICODE_STRING *v68; // rbx
  unsigned __int8 v69[4]; // [rsp+28h] [rbp-59h] BYREF
  unsigned __int16 v70; // [rsp+2Ch] [rbp-55h] BYREF
  unsigned __int64 v71; // [rsp+30h] [rbp-51h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-49h] BYREF
  WCHAR Buf2[3]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 v74[4]; // [rsp+4Eh] [rbp-33h] BYREF
  unsigned __int16 v75[33]; // [rsp+56h] [rbp-2Bh] BYREF
  __int16 v76; // [rsp+98h] [rbp+17h] BYREF

  if ( this[32].Buffer )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *(_DWORD *)&this[27].Length != 1 )
  {
    p_Length = &this[32].Length;
    *(_QWORD *)&this[35].Length = 0LL;
    RtlInitUnicodeString(this + 32, L"SIMULATED");
    v56 = 0;
    BYTE4(this[31].Buffer) = 0;
    goto LABEL_56;
  }
  v5 = 0LL;
  if ( !*(_DWORD *)&this[8].Length )
    goto LABEL_52;
  Buffer = this[8].Buffer;
  if ( !Buffer )
    goto LABEL_52;
  v7 = *(__int64 **)Buffer;
  if ( !v7 )
    goto LABEL_52;
  do
  {
    if ( *((_DWORD *)v7 + 2) == 2 )
      break;
    v7 = (__int64 *)*v7;
  }
  while ( v7 );
  if ( v7 )
  {
    v8 = (__int64)(v7 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v7 + 24);
    v13 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock >= 0 )
    {
      v5 = (unsigned __int8 *)v8;
      LODWORD(v13) = 0;
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdWarning(v14);
      MonitorLogBadEDID(v8, v13);
    }
    if ( (int)v13 >= 0 )
    {
      v75[27] = 0;
      v15 = EDIDV1_ObtainMonitorManufacturerName(v5, Buf2);
      v19 = v15;
      if ( v15 >= 0 )
      {
        v21 = EDIDV1_ObtainMonitorProductCodeID(v5, v74);
        v19 = v21;
        if ( v21 >= 0 )
        {
          v22 = EDIDV1_ObtainMonitorSerialNumber(v5, v75);
          v19 = v22;
          if ( v22 >= 0 )
          {
            v71 = 20LL;
            v75[13] = 0;
            if ( (int)RtlStringCchLengthW(Buf2, 0x23uLL, &v71) < 0 )
            {
              v24 = WdLogNewEntry5_WdAssertion(v23);
              WdLogEvent5_WdAssertion(v24);
            }
            v25 = v71;
            if ( v71 > 0x17 )
            {
              v26 = WdLogNewEntry5_WdAssertion(v23);
              WdLogEvent5_WdAssertion(v26);
            }
            v69[0] = 0;
            v70 = 0;
            v27 = EDIDV1_ObtainMonitorManufactureDate(v5, v69, &v70);
            v31 = v27;
            if ( v27 < 0 )
            {
              v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
              *(_QWORD *)(v32 + 24) = v5;
              *(_QWORD *)(v32 + 32) = v31;
              WdLogEvent5_WdWarning(v32);
              MonitorLogBadEDID((__int64)v5, v31);
            }
            v33 = v69[0];
            Buf2[v25] = 95;
            v34 = v25 + 1;
            Buf2[v34++] = a0123456789abcd_0[v33 >> 4];
            v35 = v70;
            Buf2[v34++] = a0123456789abcd_0[v33 & 0xF];
            Buf2[v34++] = 95;
            Buf2[v34++] = a0123456789abcd_0[(unsigned __int64)v35 >> 12];
            Buf2[v34++] = a0123456789abcd_0[(v35 >> 8) & 0xF];
            Buf2[v34++] = a0123456789abcd_0[(unsigned __int8)v35 >> 4];
            Buf2[v34++] = a0123456789abcd_0[v35 & 0xF];
            Buf2[v34++] = 95;
            v36 = v5[127];
            v37 = v36 & 0xF;
            Buf2[v34++] = a0123456789abcd_0[v36 >> 4];
            Buf2[v34] = a0123456789abcd_0[v37];
            v38 = v34 + 1;
            if ( 2 * v38 >= 0x46 )
              _report_rangecheckfailure();
            Buf2[v38] = 0;
            if ( v38 >= 0x23 )
            {
              v39 = WdLogNewEntry5_WdAssertion(v37);
              WdLogEvent5_WdAssertion(v39);
            }
            KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
            Flink = DXGMONITOR::_UniqueEntryList.Flink;
            v42 = 0LL;
            while ( Flink != &DXGMONITOR::_UniqueEntryList )
            {
              v42 = (__int64)Flink;
              if ( HIDWORD(Flink[1].Flink) == v38 && !memcmp(&Flink[1].Blink, Buf2, 2 * v38) )
              {
                Flink = 0LL;
                break;
              }
              Flink = Flink->Flink;
            }
            if ( Flink )
            {
              v46 = operator new[](2 * v38 + 32, 0x4D677844u, PagedPool);
              v42 = (__int64)v46;
              if ( !v46 )
              {
                v48 = WdLogNewEntry5_WdLowResource(v47);
                WdLogEvent5_WdLowResource(v48);
                KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
                return 3221225495LL;
              }
              *((_DWORD *)v46 + 5) = v38;
              *((_DWORD *)v46 + 4) = 1;
              if ( (int)RtlStringCchCopyW((unsigned __int16 *)v46 + 12, v38 + 1, Buf2) < 0 )
              {
                v51 = WdLogNewEntry5_WdAssertion(v50);
                WdLogEvent5_WdAssertion(v51);
              }
              *(_WORD *)(v42 + 2 * v38 + 24) = 0;
              v52 = (__int64 *)qword_1C007BB70;
              if ( *(struct _LIST_ENTRY **)qword_1C007BB70 != &DXGMONITOR::_UniqueEntryList )
                __fastfail(3u);
              *(_QWORD *)v42 = &DXGMONITOR::_UniqueEntryList;
              *(_QWORD *)(v42 + 8) = v52;
              *v52 = v42;
              qword_1C007BB70 = v42;
            }
            else
            {
              if ( !v42 )
              {
                v43 = WdLogNewEntry5_WdAssertion(v40);
                WdLogEvent5_WdAssertion(v43);
              }
              v44 = *(_DWORD *)(v42 + 16);
              if ( !v44 )
              {
                v45 = WdLogNewEntry5_WdAssertion(v40);
                WdLogEvent5_WdAssertion(v45);
                v44 = *(_DWORD *)(v42 + 16);
              }
              *(_DWORD *)(v42 + 16) = v44 + 1;
            }
            *(_QWORD *)&this[35].Length = v42;
            KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
            p_Length = &this[32].Length;
            if ( !RtlCreateUnicodeString(this + 32, Buf2) )
            {
LABEL_49:
              v55 = WdLogNewEntry5_WdLowResource(v54);
              WdLogEvent5_WdLowResource(v55);
              return 3221225495LL;
            }
            v56 = 1;
            goto LABEL_54;
          }
        }
      }
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = v5;
      *(_QWORD *)(v20 + 32) = v19;
      WdLogEvent5_WdWarning(v20);
      MonitorLogBadEDID((__int64)v5, v19);
    }
  }
  else
  {
LABEL_52:
    v57 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v57 + 24) = this;
    WdLogEvent5_WdWarning(v57);
  }
  p_Length = &this[32].Length;
  *(_QWORD *)&this[35].Length = 0LL;
  RtlInitUnicodeString(this + 32, L"NOEDID");
  v56 = 0;
LABEL_54:
  BYTE4(this[31].Buffer) = v56;
LABEL_56:
  v58 = v56;
  if ( this[32].Buffer && v56 )
  {
    MonitorUnifyCCDMonitorString(p_Length);
    v58 = BYTE4(this[31].Buffer);
  }
  this[33] = *(struct _UNICODE_STRING *)p_Length;
  if ( v58 )
    this[33].Length -= 6;
  v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2].Length + 8LL) + 16LL) + 192LL) + 64LL);
  v60 = (const UNICODE_STRING *)((v59 + 4664) & -(__int64)(*(_QWORD *)(v59 + 4672) != 0LL));
  if ( v60 )
  {
    Buffer_high = HIDWORD(this[2].Buffer);
    String.Buffer = (wchar_t *)&v76;
    v76 = 0;
    *(_DWORD *)&String.Length = 1310720;
    if ( RtlIntegerToUnicodeString(Buffer_high, 0x10u, &String) < 0 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v63);
      WdLogEvent5_WdAssertion(v64);
    }
    v65 = String.Length + v60->Length + 8;
    v66 = (wchar_t *)operator new[](v65, 0x4D677844u, PagedPool);
    v67 = v66;
    if ( !v66 )
      goto LABEL_49;
    memset(v66, 0, v65);
    v68 = this + 34;
    v68->Length = 0;
    v68->MaximumLength = v65;
    v68->Buffer = v67;
    RtlAppendUnicodeToString(v68, L"_");
    RtlAppendUnicodeStringToString(v68, v60);
    RtlAppendUnicodeToString(v68, L"_");
    RtlAppendUnicodeStringToString(v68, &String);
    return 0LL;
  }
  else
  {
    v61 = WdLogNewEntry5_WdError(-*(_QWORD *)(v59 + 4672));
    *(_QWORD *)(v61 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2].Length + 8LL) + 16LL) + 192LL);
    WdLogEvent5_WdError(v61);
    return 3221225473LL;
  }
}
