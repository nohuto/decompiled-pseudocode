/*
 * XREFs of ProcLibDeviceStart @ 0x1C001DF9C
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001B8E0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     AcpiEval_OSC @ 0x1C0002CCC (AcpiEval_OSC.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     AcquireBiosPpmControl @ 0x1C0003730 (AcquireBiosPpmControl.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0007638 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C000B71C (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001AF0C (ValidatePerfDomainSymmetry.c)
 *     InitAcpiCpc @ 0x1C001BC50 (InitAcpiCpc.c)
 *     InitAcpiProcessorDomains @ 0x1C001BD2C (InitAcpiProcessorDomains.c)
 *     InitAcpiCStates @ 0x1C001BF78 (InitAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C001C13C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C001C2C4 (InitAcpiThrottleStates.c)
 *     InitAcpiLegacyPcc @ 0x1C001C474 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C001C4E0 (InitAcpiLpiStates.c)
 *     AcpiEval_PPC @ 0x1C001D7B8 (AcpiEval_PPC.c)
 *     QueryPepCapabilites @ 0x1C001DD8C (QueryPepCapabilites.c)
 *     ProcLibTraceSummary2 @ 0x1C001F54C (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C001F800 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C001F970 (ProcLibCapChange.c)
 *     AcquireAcpiInterfaces @ 0x1C001FA14 (AcquireAcpiInterfaces.c)
 *     InitPep @ 0x1C001FAD0 (InitPep.c)
 *     EnumerateControlMethods @ 0x1C001FD30 (EnumerateControlMethods.c)
 *     AcpiEval_PDC @ 0x1C0028F8C (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C0029080 (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C002A420 (ReleaseAcpiInterfaces.c)
 *     InitPepIdleStates @ 0x1C002DE2C (InitPepIdleStates.c)
 *     InitializeEnergyEstimation @ 0x1C002F6FC (InitializeEnergyEstimation.c)
 *     InitPepPerfStates @ 0x1C002FC10 (InitPepPerfStates.c)
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
  __int64 v32; // rcx
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
  __int64 v44; // rdx
  __int64 v45; // rcx
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
  *(_QWORD *)(a1 + 248) = Globals;
  *(_QWORD *)(a1 + 264) = Globals;
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
      0x1Au,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  *(_DWORD *)(a1 + 48) = HIDWORD(v59);
  *(_DWORD *)(a1 + 52) = v58;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C0016168)(a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    *(_QWORD *)(a1 + 264) = 0LL;
    Size[0] = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Bu,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      *(_QWORD *)Size);
    if ( dword_1C00161AC == 1 )
      v5 = 0;
    goto LABEL_146;
  }
  if ( *(_DWORD *)(a1 + 56) == -1 )
  {
    if ( (Globals & 0x200000000000LL) != 0 )
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
        0x1Cu,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
      0x1Du,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
      0x1Eu,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v5 = -1073741670;
    goto LABEL_144;
  }
  v51 = 0LL;
  if ( qword_1C0015EB8 )
  {
    v13 = AcpiEval_OSC(a1, (_DWORD *)qword_1C0015EB8, v12, &v51);
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
          0x1Fu,
          (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      if ( (v14 & 4) != 0 )
        WPP_RECORDER_SF_DDDDDDDDDDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int8 *)(qword_1C0015EB8 + 13),
          *(unsigned __int8 *)(qword_1C0015EB8 + 12),
          *(unsigned __int8 *)(qword_1C0015EB8 + 11),
          Type);
      if ( (v14 & 8) == 0 )
      {
LABEL_33:
        if ( v13 >= 0 )
          goto LABEL_36;
        goto LABEL_34;
      }
      v15 = 33;
      v16 = 2;
      v17 = 1;
      Sizeb[0] = *(_DWORD *)(qword_1C0015EB8 + 16);
LABEL_32:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        v17,
        v15,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
        *(_QWORD *)Sizeb);
      goto LABEL_33;
    }
    if ( v13 != -1073741772 )
    {
      v15 = 35;
      Sizeb[0] = v13;
      v17 = 3;
      v16 = 3;
      goto LABEL_32;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x22u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
  }
LABEL_34:
  if ( qword_1C0015EB0 )
    AcpiEval_PDC(a1, qword_1C0015EB0, (unsigned __int16)word_1C0015EC0);
LABEL_36:
  EnumerateControlMethods(a1, a1 + 1072);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizeb[0] = *(_DWORD *)(a1 + 1072);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0x24u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x25u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x26u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x27u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x28u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x29u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x2Au,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x2Bu,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x2Cu,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x2Du,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
        0x2Eu,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( !qword_1C0015EC8 || (v29 = qword_1C0015EC8(a1), v5 = v29, v29 >= 0) )
  {
    if ( dword_1C00161AC != 1 )
    {
      v31 = *(_QWORD *)(a1 + 264);
      if ( (v31 & 0x60000000) != 0 && *(_BYTE *)(a1 + 392) == 127 )
      {
        if ( (v31 & 0x20000000) != 0 )
        {
          *(_QWORD *)(a1 + 280) = qword_1C0015EE8;
          *(_QWORD *)(a1 + 296) = qword_1C0015EF8;
        }
        if ( (v31 & 0x40000000) != 0 )
          *(_QWORD *)(a1 + 280) = SetPerfStateFFH;
      }
      else if ( *(_BYTE *)(a1 + 392) == 1 && (v31 & 0x10000000) != 0 )
      {
        *(_QWORD *)(a1 + 280) = SetPerfStateIO;
        *(_QWORD *)(a1 + 296) = SetPerfStateIOHidden;
      }
      else
      {
        *(_QWORD *)(a1 + 264) = v31 & 0xFFFFFFFF8FFFFFFFuLL;
      }
      v32 = *(_QWORD *)(a1 + 264);
      if ( (v32 & 0x4000000) != 0 )
        *(_QWORD *)(a1 + 312) = qword_1C0015F10;
      if ( (v32 & 0xA8000000) != 0 )
      {
        *(_QWORD *)(a1 + 328) = qword_1C0015F20;
        *(_QWORD *)(a1 + 336) = qword_1C0015F28;
      }
      if ( (v32 & 0x2000000) != 0 && *(_BYTE *)(a1 + 448) == 127 )
      {
        *(_QWORD *)(a1 + 288) = qword_1C0015EF0;
        *(_QWORD *)(a1 + 304) = qword_1C0015F00;
      }
      else if ( *(_BYTE *)(a1 + 448) == 1 && (v32 & 0x1100000) != 0 )
      {
        *(_QWORD *)(a1 + 288) = SetPerfStateIO;
        *(_QWORD *)(a1 + 304) = SetPerfStateIOHidden;
      }
      else
      {
        *(_QWORD *)(a1 + 264) = v32 & 0xFFFFFFFFFCCFFFFFuLL;
      }
      if ( qword_1C0015F18 )
        *(_QWORD *)(a1 + 320) = qword_1C0015F18;
      v33 = *(_QWORD *)(a1 + 264);
      if ( (v33 & 0x10FF300000LL) == 0x4000000 && !qword_1C0015F28 )
        *(_QWORD *)(a1 + 264) = v33 & 0xFFFFFFFFFBFFFFFFuLL;
    }
    InitAcpiProcessorDomains(a1);
    if ( (*(_DWORD *)(a1 + 264) & 0x7B07F070) != 0 )
    {
      v5 = AcquireAcpiInterfaces(a1);
      if ( v5 < 0 )
      {
        ReleaseAcpiInterfaces(a1);
        v30 = 48;
        Sizeb[0] = v5;
        goto LABEL_77;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 208),
      0LL);
    v34 = ((__int64 (__fastcall *)(__int64))qword_1C0016130)(a1);
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
        0x31u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
          0x32u,
          (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      }
      else
      {
        Sizeb[0] = v37;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x33u,
          (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
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
          0x34u,
          (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      }
      else
      {
        Sizeb[0] = v40;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x35u,
          (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0015D98,
      0LL);
    ProcLibCapChange(a1, v36, v39, 100LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0015D98);
    if ( (*(_QWORD *)(a1 + 264) & 0x10FF300000LL) == 0 )
      goto LABEL_140;
    if ( *(_QWORD *)(a1 + 520) )
    {
      v41 = RegisterXsdDomain(a1);
    }
    else
    {
      if ( byte_1C00161A8 )
      {
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0016170)(a1) )
          goto LABEL_130;
        goto LABEL_140;
      }
      v41 = 1;
    }
    if ( v41 )
    {
LABEL_130:
      if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
      {
        v42 = *(_QWORD *)(a1 + 264);
        if ( (v42 & 0x1000000000LL) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C0016160)(a1);
        }
        else if ( (v42 & 0x8000000) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C0016158)(a1);
        }
        else if ( (v42 & 0x80000000) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C0016150)(a1);
        }
        else
        {
          v43 = (void (__fastcall *)(__int64))qword_1C0016138;
          if ( (*(_QWORD *)(a1 + 264) & 0x73300000LL) == 0 )
            v43 = (void (__fastcall *)(__int64))qword_1C0016148;
          v43(a1);
        }
      }
    }
LABEL_140:
    if ( (*(_QWORD *)(a1 + 264) & 0x2000000000LL) != 0 && ++dword_1C00164D0 == dword_1C0015D94 )
      InitializeEnergyEstimation();
    AcquireBiosPpmControl(a1);
    v5 = 0;
    goto LABEL_144;
  }
  v30 = 47;
  Sizeb[0] = v29;
LABEL_77:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    3u,
    v30,
    (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
    *(_QWORD *)Sizeb);
LABEL_144:
  if ( v52 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_146:
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x7F077) != (*(_DWORD *)(a1 + 256) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0016188, 0, 0LL);
  v44 = *(_QWORD *)(a1 + 264);
  v45 = *(_DWORD *)(a1 + 256) & 0x40000000;
  if ( (v44 & 0x40000000) == 0 )
    v45 = *(_DWORD *)(a1 + 256) & 0x70000000;
  if ( ((unsigned int)v44 & (unsigned int)v45) != v45 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0016190, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x3300000) != (*(_DWORD *)(a1 + 256) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0016198, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x80000000) != (*(_DWORD *)(a1 + 256) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x8000000) != (*(_DWORD *)(a1 + 256) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)"6", 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
