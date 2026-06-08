/*
 * XREFs of ProcLibDeviceStart @ 0x1C0021204
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001EB50 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     AcpiEval_OSC @ 0x1C0002AC0 (AcpiEval_OSC.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     AcquireBiosPpmControl @ 0x1C000355C (AcquireBiosPpmControl.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00075B8 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C000BAA8 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     InitializeEnergyEstimation @ 0x1C001D4AC (InitializeEnergyEstimation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001DD3C (ValidatePerfDomainSymmetry.c)
 *     InitAcpiCpc @ 0x1C001EEC0 (InitAcpiCpc.c)
 *     InitAcpiProcessorDomains @ 0x1C001EF9C (InitAcpiProcessorDomains.c)
 *     InitAcpiCStates @ 0x1C001F1E8 (InitAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C001F3AC (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C001F534 (InitAcpiThrottleStates.c)
 *     InitAcpiLegacyPcc @ 0x1C001F6E4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C001F750 (InitAcpiLpiStates.c)
 *     AcpiEval_PPC @ 0x1C0020A28 (AcpiEval_PPC.c)
 *     QueryPepCapabilites @ 0x1C0020FE0 (QueryPepCapabilites.c)
 *     ProcLibTraceSummary2 @ 0x1C002277C (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0022A24 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C0022BF0 (ProcLibCapChange.c)
 *     AcquireAcpiInterfaces @ 0x1C0022C94 (AcquireAcpiInterfaces.c)
 *     InitPep @ 0x1C0022D50 (InitPep.c)
 *     EnumerateControlMethods @ 0x1C0022FB4 (EnumerateControlMethods.c)
 *     AcpiEval_PDC @ 0x1C002C7E4 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C002C8D8 (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C002DCB0 (ReleaseAcpiInterfaces.c)
 *     InitPepIdleStates @ 0x1C0031724 (InitPepIdleStates.c)
 *     InitPepPerfStates @ 0x1C0032E54 (InitPepPerfStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // rax
  int v4; // eax
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rax
  int v8; // eax
  const wchar_t *v9; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  PIO_WORKITEM WorkItem; // rax
  __int16 v12; // r8
  int v13; // r13d
  int v14; // ebx
  unsigned __int16 v15; // r9
  unsigned __int8 v16; // dl
  unsigned int v17; // r8d
  int inited; // eax
  int v19; // eax
  int PepCapabilites; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned __int16 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ebx
  int v35; // eax
  unsigned int v36; // edi
  int v37; // eax
  int v38; // eax
  unsigned int v39; // ebx
  int v40; // eax
  char v41; // al
  __int64 v42; // rax
  void (__fastcall *v43)(__int64); // rax
  __int64 v44; // r8
  unsigned int v45; // ecx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v51; // [rsp+88h] [rbp-80h] BYREF
  int v52; // [rsp+90h] [rbp-78h]
  _QWORD v53[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-60h]
  _BYTE v55[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v57[3]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v59; // [rsp+E0h] [rbp-28h]
  struct _GROUP_AFFINITY Affinity; // [rsp+E8h] [rbp-20h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v58 = 0LL;
  v59 = 0LL;
  *(_QWORD *)(a1 + 248) = Globals[0];
  *(_QWORD *)(a1 + 264) = Globals[0];
  v53[0] = 0LL;
  v54 = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  v53[1] = &v58;
  v3 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  v52 = 0;
  LODWORD(v53[0]) = 1;
  LODWORD(v54) = 16;
  if ( v3(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v53, 0LL, 0LL) >= 0 )
  {
    if ( HIDWORD(v58) )
    {
      *(_DWORD *)(a1 + 188) = HIDWORD(v58);
      *(_BYTE *)(a1 + 185) = v59;
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v59 = 0xFFFFFFFF00000000uLL;
    v58 = 0LL;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Bu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  *(_DWORD *)(a1 + 48) = HIDWORD(v59);
  *(_DWORD *)(a1 + 52) = v58;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C00199A8)(a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    *(_QWORD *)(a1 + 264) = 0LL;
    Size[0] = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Cu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      *(_QWORD *)Size);
    if ( dword_1C00199EC == 1 )
      v5 = 0;
    goto LABEL_144;
  }
  if ( *(_DWORD *)(a1 + 56) == -1 )
  {
    if ( (Globals[0] & 0x200000000000LL) != 0 )
    {
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFCFFFFFFFFFuLL;
      *(_BYTE *)(a1 + 78) = 1;
    }
  }
  else
  {
    v6 = IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
    if ( v6 < 0 )
    {
      Sizea[0] = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x1Du,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizea);
    }
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v52 = 1;
  }
  v57[2] = 0LL;
  v57[1] = &DEVPKEY_Device_BiosDeviceName;
  v57[0] = 24LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, _QWORD, __int64 *, _BYTE *))(WdfFunctions_01015 + 3472))(
         WdfDriverGlobals,
         v7,
         v57,
         512LL,
         0LL,
         &v56,
         v55);
  if ( v8 < 0 )
  {
    Sizeb[0] = v8;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Eu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      *(_QWORD *)Sizeb);
    v9 = L"Unknown";
  }
  else
  {
    v9 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v56,
                            0LL);
  }
  v10 = *(struct _DEVICE_OBJECT **)a1;
  *(_QWORD *)(a1 + 64) = v9;
  WorkItem = IoAllocateWorkItem(v10);
  *(_QWORD *)(a1 + 1136) = WorkItem;
  *(_BYTE *)(a1 + 1145) = 1;
  if ( !WorkItem )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Fu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
    v5 = -1073741670;
    goto LABEL_142;
  }
  v51 = 0LL;
  if ( qword_1C00196F8 )
  {
    v13 = AcpiEval_OSC(a1, (_DWORD *)qword_1C00196F8, v12, &v51);
    if ( v13 >= 0 )
    {
      v14 = *v51;
      if ( (*v51 & 0xE) == 0 )
      {
        *(_QWORD *)(a1 + 88) = v51;
        goto LABEL_33;
      }
      if ( (v14 & 2) != 0 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x20u,
          (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
      if ( (v14 & 4) != 0 )
        WPP_RECORDER_SF_DDDDDDDDDDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int8 *)(qword_1C00196F8 + 13),
          *(unsigned __int8 *)(qword_1C00196F8 + 12),
          *(unsigned __int8 *)(qword_1C00196F8 + 11),
          Type);
      if ( (v14 & 8) == 0 )
      {
LABEL_33:
        if ( v13 >= 0 )
          goto LABEL_36;
        goto LABEL_34;
      }
      v15 = 34;
      v16 = 2;
      v17 = 1;
      Sizeb[0] = *(_DWORD *)(qword_1C00196F8 + 16);
LABEL_32:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        v17,
        v15,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
      goto LABEL_33;
    }
    if ( v13 != -1073741772 )
    {
      v15 = 36;
      Sizeb[0] = v13;
      v17 = 3;
      v16 = 3;
      goto LABEL_32;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x23u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  }
LABEL_34:
  if ( qword_1C00196F0 )
    AcpiEval_PDC(a1, qword_1C00196F0, (unsigned __int16)word_1C0019700);
LABEL_36:
  EnumerateControlMethods(a1, a1 + 1072);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizeb[0] = *(_DWORD *)(a1 + 1072);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0x25u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      *(_QWORD *)Sizeb);
  }
  if ( (*(_QWORD *)(a1 + 264) & 0x111300000F00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      Sizeb[0] = inited;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x26u,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
      *(_QWORD *)(a1 + 264) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  if ( (*(_QWORD *)(a1 + 264) & 0xE0000000000LL) != 0 )
  {
    v19 = InitAcpiLpiStates(a1);
    if ( v19 >= 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFF80C88uLL;
    }
    else
    {
      Sizeb[0] = v19;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x27u,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_QWORD *)(a1 + 264) & 0x111300000F00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      Sizeb[0] = PepCapabilites;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x28u,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
      *(_QWORD *)(a1 + 264) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x7F077) != 0 )
  {
    v21 = InitAcpiCStates(a1);
    if ( v21 < 0 )
    {
      Sizeb[0] = v21;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x29u,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  v22 = *(_QWORD *)(a1 + 264);
  if ( (v22 & 0x7F077) == 0 )
    *(_QWORD *)(a1 + 264) = v22 & 0xFFFFFFFFFFFFFCFFuLL;
  if ( (*(_QWORD *)(a1 + 264) & 0x300000300LL) != 0 )
  {
    v23 = InitPepIdleStates(a1);
    if ( v23 < 0 )
    {
      Sizeb[0] = v23;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Au,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFFFFCFFuLL;
    }
  }
  if ( (*(_QWORD *)(a1 + 264) & 0x1000000000LL) != 0 )
  {
    v24 = InitPepPerfStates(a1);
    if ( v24 >= 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFF04CFFFFFuLL;
    }
    else
    {
      *(_QWORD *)(a1 + 264) &= ~0x1000000000uLL;
      Sizeb[0] = v24;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Bu,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x8000000) != 0 )
  {
    v25 = InitAcpiCpc(a1);
    if ( v25 >= 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFF0CCFFFFFuLL;
    }
    else
    {
      *(_QWORD *)(a1 + 264) &= ~0x8000000uLL;
      Sizeb[0] = v25;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Cu,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x80000000) != 0 )
  {
    v26 = InitAcpiLegacyPcc((_QWORD *)a1);
    if ( v26 >= 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFF8CCFFFFFuLL;
    }
    else
    {
      *(_QWORD *)(a1 + 264) &= ~0x80000000uLL;
      Sizeb[0] = v26;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Du,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x70000000) != 0 )
  {
    v27 = InitAcpiPerfStates(a1);
    if ( v27 < 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFF8FFFFFFFuLL;
      Sizeb[0] = v27;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Eu,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x3300000) != 0 )
  {
    v28 = InitAcpiThrottleStates(a1);
    if ( v28 < 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCCFFFFFuLL;
      Sizeb[0] = v28;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Fu,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( !qword_1C0019708 || (v29 = qword_1C0019708(a1), v5 = v29, v29 >= 0) )
  {
    if ( dword_1C00199EC == 1 )
      goto LABEL_103;
    v31 = *(_QWORD *)(a1 + 264);
    if ( (v31 & 0x60000000) != 0 && *(_BYTE *)(a1 + 392) == 127 )
    {
      if ( (v31 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 280) = qword_1C0019728;
        *(_QWORD *)(a1 + 296) = qword_1C0019738;
      }
      if ( (v31 & 0x40000000) == 0 )
        goto LABEL_90;
      v32 = v31 & 0xFFFFFFFFFFBFFFFFuLL;
      *(_QWORD *)(a1 + 280) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 392) == 1 && (v31 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 280) = SetPerfStateIO;
      v32 = v31 & 0xFFFFFFFFFFBFFFFFuLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateIOHidden;
    }
    else
    {
      v32 = v31 & 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 264) = v32;
LABEL_90:
    v33 = *(_QWORD *)(a1 + 264);
    if ( (v33 & 0x4000000) != 0 )
      *(_QWORD *)(a1 + 312) = qword_1C0019750;
    if ( (v33 & 0xA8000000) != 0 )
    {
      *(_QWORD *)(a1 + 328) = qword_1C0019760;
      *(_QWORD *)(a1 + 336) = qword_1C0019768;
    }
    if ( (v33 & 0x2000000) != 0 && *(_BYTE *)(a1 + 448) == 127 )
    {
      *(_QWORD *)(a1 + 288) = qword_1C0019730;
      *(_QWORD *)(a1 + 304) = qword_1C0019740;
    }
    else if ( *(_BYTE *)(a1 + 448) == 1 && (v33 & 0x1100000) != 0 )
    {
      *(_QWORD *)(a1 + 288) = SetPerfStateIO;
      *(_QWORD *)(a1 + 304) = SetPerfStateIOHidden;
    }
    else
    {
      *(_QWORD *)(a1 + 264) = v33 & 0xFFFFFFFFFCCFFFFFuLL;
    }
    if ( qword_1C0019758 )
      *(_QWORD *)(a1 + 320) = qword_1C0019758;
LABEL_103:
    InitAcpiProcessorDomains(a1);
    if ( (*(_DWORD *)(a1 + 264) & 0x7B07F070) != 0 )
    {
      v5 = AcquireAcpiInterfaces(a1);
      if ( v5 < 0 )
      {
        ReleaseAcpiInterfaces(a1);
        v30 = 49;
        Sizeb[0] = v5;
        goto LABEL_77;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 208),
      0LL);
    v34 = ((__int64 (__fastcall *)(__int64))qword_1C0019970)(a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 208));
    if ( v34 < 0 )
    {
      Sizeb[0] = v34;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x32u,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v35 = *(_DWORD *)(a1 + 264);
    v36 = 0;
    LODWORD(v51) = 0;
    if ( (v35 & 0x70000000) != 0 )
    {
      v37 = AcpiEval_PPC(a1, (unsigned int *)&v51);
      if ( v37 >= 0 )
      {
        v36 = (unsigned int)v51;
      }
      else if ( v37 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x33u,
          (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
      }
      else
      {
        Sizeb[0] = v37;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x34u,
          (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    v38 = *(_DWORD *)(a1 + 264);
    v39 = 0;
    LODWORD(v51) = 0;
    if ( (v38 & 0x3000000) != 0 )
    {
      v40 = AcpiEval_TPC(a1, &v51);
      if ( v40 >= 0 )
      {
        v39 = (unsigned int)v51;
      }
      else if ( v40 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x35u,
          (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
      }
      else
      {
        Sizeb[0] = v40;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x36u,
          (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00195D8,
      0LL);
    ProcLibCapChange(a1, v36, v39, 100LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00195D8);
    if ( (*(_QWORD *)(a1 + 264) & 0x10FF300000LL) == 0 )
      goto LABEL_138;
    if ( *(_QWORD *)(a1 + 520) )
    {
      v41 = RegisterXsdDomain(a1);
    }
    else
    {
      if ( byte_1C00199E8 )
      {
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C00199B0)(a1) )
          goto LABEL_128;
        goto LABEL_138;
      }
      v41 = 1;
    }
    if ( v41 )
    {
LABEL_128:
      if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
      {
        v42 = *(_QWORD *)(a1 + 264);
        if ( (v42 & 0x1000000000LL) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C00199A0)(a1);
        }
        else if ( (v42 & 0x8000000) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C0019998)(a1);
        }
        else if ( (v42 & 0x80000000) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C0019990)(a1);
        }
        else
        {
          v43 = (void (__fastcall *)(__int64))qword_1C0019978;
          if ( (*(_QWORD *)(a1 + 264) & 0x73300000LL) == 0 )
            v43 = (void (__fastcall *)(__int64))qword_1C0019988;
          v43(a1);
        }
      }
    }
LABEL_138:
    if ( (*(_QWORD *)(a1 + 264) & 0x2000000000LL) != 0 && ++dword_1C0019D60 == dword_1C00195D4 )
      InitializeEnergyEstimation();
    AcquireBiosPpmControl(a1);
    v5 = 0;
    goto LABEL_142;
  }
  v30 = 48;
  Sizeb[0] = v29;
LABEL_77:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    3u,
    v30,
    (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
    *(_QWORD *)Sizeb);
LABEL_142:
  if ( v52 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_144:
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x7F077) != (*(_DWORD *)(a1 + 256) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00199C8, 0, 0LL);
  v44 = *(_QWORD *)(a1 + 264);
  v45 = *(_DWORD *)(a1 + 256) & 0x40000000;
  if ( (v44 & 0x40000000) == 0 )
    v45 = *(_DWORD *)(a1 + 256) & 0x70000000;
  if ( (v45 & (unsigned int)v44) != (unsigned __int64)v45 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00199D0, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x3300000) != (*(_DWORD *)(a1 + 256) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00199D8, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x80000000) != (*(_DWORD *)(a1 + 256) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x8000000) != (*(_DWORD *)(a1 + 256) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)"6", 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
