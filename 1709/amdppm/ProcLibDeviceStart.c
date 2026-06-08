/*
 * XREFs of ProcLibDeviceStart @ 0x1C001EB90
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001A8F0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     AcpiEval_OSC @ 0x1C00031DC (AcpiEval_OSC.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C0004998 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     AcquireBiosPpmControl @ 0x1C0004DB0 (AcquireBiosPpmControl.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0005ACC (ProcLibTraceProcessorSpecificEvent.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PDC @ 0x1C001AF04 (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C001BFD4 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C001C3DC (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C001E038 (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C001E790 (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C001FC18 (ProcLibCapChange.c)
 *     ProcLibTraceSummary2 @ 0x1C0020158 (ProcLibTraceSummary2.c)
 *     InitPepIdleStates @ 0x1C0022A08 (InitPepIdleStates.c)
 *     InitAcpiProcessorDomains @ 0x1C00243CC (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C0024604 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0024918 (InitAcpiCpc.c)
 *     InitAcpiCStates @ 0x1C00251A0 (InitAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C002997C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0029CAC (InitAcpiThrottleStates.c)
 *     InitializeEnergyEstimation @ 0x1C002A448 (InitializeEnergyEstimation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002B810 (ValidatePerfDomainSymmetry.c)
 *     InitPepPerfStates @ 0x1C002C5E8 (InitPepPerfStates.c)
 *     InitPep @ 0x1C002CF94 (InitPep.c)
 *     QueryPepCapabilites @ 0x1C002D1F8 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C002D6E8 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002EF3C (InitAcpiLpiStates.c)
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
  void (__fastcall *v34)(_QWORD, _QWORD); // rax
  void (__fastcall *v35)(_QWORD); // rax
  int v36; // ebx
  int v37; // eax
  unsigned int v38; // edi
  int v39; // eax
  int v40; // eax
  unsigned int v41; // ebx
  int v42; // eax
  char v43; // al
  __int64 v44; // rax
  void (__fastcall *v45)(__int64); // rax
  __int64 v46; // r8
  unsigned int v47; // ecx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v53; // [rsp+88h] [rbp-80h] BYREF
  int v54; // [rsp+90h] [rbp-78h]
  _QWORD v55[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-60h]
  _BYTE v57[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v59[3]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v61; // [rsp+E0h] [rbp-28h]
  struct _GROUP_AFFINITY Affinity; // [rsp+E8h] [rbp-20h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v60 = 0LL;
  v61 = 0LL;
  *(_QWORD *)(a1 + 248) = Globals;
  *(_QWORD *)(a1 + 264) = Globals;
  v55[0] = 0LL;
  v56 = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  v55[1] = &v60;
  v3 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  v54 = 0;
  LODWORD(v55[0]) = 1;
  LODWORD(v56) = 16;
  if ( v3(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v55, 0LL, 0LL) >= 0 )
  {
    if ( HIDWORD(v60) )
    {
      *(_DWORD *)(a1 + 188) = HIDWORD(v60);
      *(_BYTE *)(a1 + 185) = v61;
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v61 = 0xFFFFFFFF00000000uLL;
    v60 = 0LL;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Bu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  *(_DWORD *)(a1 + 48) = HIDWORD(v61);
  *(_DWORD *)(a1 + 52) = v60;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C00117B8)(a1);
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
    if ( dword_1C00117FC == 1 )
      v5 = 0;
    goto LABEL_147;
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
        0x1Du,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
        *(_QWORD *)Sizea);
    }
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v54 = 1;
  }
  v59[2] = 0LL;
  v59[1] = &DEVPKEY_Device_BiosDeviceName;
  v59[0] = 24LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, _QWORD, __int64 *, _BYTE *))(WdfFunctions_01015 + 3472))(
         WdfDriverGlobals,
         v7,
         v59,
         512LL,
         0LL,
         &v58,
         v57);
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
                            v58,
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
    goto LABEL_145;
  }
  v53 = 0LL;
  if ( qword_1C0011508 )
  {
    v13 = AcpiEval_OSC(a1, (_DWORD *)qword_1C0011508, v12, &v53);
    if ( v13 >= 0 )
    {
      v14 = *v53;
      if ( (*v53 & 0xE) == 0 )
      {
        *(_QWORD *)(a1 + 88) = v53;
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
          *(unsigned __int8 *)(qword_1C0011508 + 13),
          *(unsigned __int8 *)(qword_1C0011508 + 12),
          *(unsigned __int8 *)(qword_1C0011508 + 11),
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
      Sizeb[0] = *(_DWORD *)(qword_1C0011508 + 16);
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
  if ( qword_1C0011500 )
    AcpiEval_PDC(a1, (const void *)qword_1C0011500, word_1C0011510);
LABEL_36:
  EnumerateControlMethods(a1, (_DWORD *)(a1 + 1072));
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
  if ( (*(_DWORD *)(a1 + 264) & 0x7F077LL) != 0 )
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
    v26 = InitAcpiLegacyPcc(a1);
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
  if ( !qword_1C0011518 || (v29 = qword_1C0011518(a1), v5 = v29, v29 >= 0) )
  {
    if ( dword_1C00117FC == 1 )
    {
LABEL_103:
      InitAcpiProcessorDomains(a1);
      if ( (*(_DWORD *)(a1 + 264) & 0x7B07F070) == 0 || (v5 = AcquireAcpiInterfaces(a1), v5 >= 0) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v36 = ((__int64 (__fastcall *)(__int64))qword_1C0011780)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v36 < 0 )
        {
          Sizeb[0] = v36;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x32u,
            (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
            *(_QWORD *)Sizeb);
        }
        v37 = *(_DWORD *)(a1 + 264);
        v38 = 0;
        LODWORD(v53) = 0;
        if ( (v37 & 0x70000000) != 0 )
        {
          v39 = AcpiEval_PPC(a1, (unsigned int *)&v53);
          if ( v39 >= 0 )
          {
            v38 = (unsigned int)v53;
          }
          else if ( v39 == -1073741772 )
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
            Sizeb[0] = v39;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x34u,
              (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v40 = *(_DWORD *)(a1 + 264);
        v41 = 0;
        LODWORD(v53) = 0;
        if ( (v40 & 0x3000000) != 0 )
        {
          v42 = AcpiEval_TPC(a1, (unsigned int *)&v53);
          if ( v42 >= 0 )
          {
            v41 = (unsigned int)v53;
          }
          else if ( v42 == -1073741772 )
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
            Sizeb[0] = v42;
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
          qword_1C00113E8,
          0LL);
        ProcLibCapChange(a1, v38, v41, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00113E8);
        if ( (*(_QWORD *)(a1 + 264) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 520) )
            v43 = RegisterXsdDomain(a1);
          else
            v43 = !byte_1C00117F8 || (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C00117C0)(a1) == 0;
          if ( v43 && (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v44 = *(_QWORD *)(a1 + 264);
            if ( (v44 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00117B0)(a1);
            }
            else if ( (v44 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00117A8)(a1);
            }
            else if ( (v44 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00117A0)(a1);
            }
            else
            {
              v45 = (void (__fastcall *)(__int64))qword_1C0011788;
              if ( (*(_QWORD *)(a1 + 264) & 0x73300000LL) == 0 )
                v45 = (void (__fastcall *)(__int64))qword_1C0011798;
              v45(a1);
            }
          }
        }
        if ( (*(_QWORD *)(a1 + 264) & 0x2000000000LL) != 0 && ++dword_1C0011B70 == dword_1C00113E4 )
          InitializeEnergyEstimation();
        AcquireBiosPpmControl(a1);
        v5 = 0;
        goto LABEL_145;
      }
      v34 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
      if ( v34 )
        v34(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
      v35 = *(void (__fastcall **)(_QWORD))(a1 + 120);
      if ( v35 )
        v35(*(_QWORD *)(a1 + 104));
      v30 = 49;
      Sizeb[0] = v5;
      goto LABEL_77;
    }
    v31 = *(_QWORD *)(a1 + 264);
    if ( (v31 & 0x60000000) != 0 && *(_BYTE *)(a1 + 392) == 127 )
    {
      if ( (v31 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 280) = qword_1C0011538;
        *(_QWORD *)(a1 + 296) = qword_1C0011548;
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
      *(_QWORD *)(a1 + 312) = qword_1C0011560;
    if ( (v33 & 0xA8000000) != 0 )
    {
      *(_QWORD *)(a1 + 328) = qword_1C0011570;
      *(_QWORD *)(a1 + 336) = qword_1C0011578;
    }
    if ( (v33 & 0x2000000) != 0 && *(_BYTE *)(a1 + 448) == 127 )
    {
      *(_QWORD *)(a1 + 288) = qword_1C0011540;
      *(_QWORD *)(a1 + 304) = qword_1C0011550;
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
    if ( qword_1C0011568 )
      *(_QWORD *)(a1 + 320) = qword_1C0011568;
    goto LABEL_103;
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
LABEL_145:
  if ( v54 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_147:
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x7F077) != (*(_DWORD *)(a1 + 256) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00117D8, 0, 0LL);
  v46 = *(_QWORD *)(a1 + 264);
  v47 = *(_DWORD *)(a1 + 256) & 0x40000000;
  if ( (v46 & 0x40000000) == 0 )
    v47 = *(_DWORD *)(a1 + 256) & 0x70000000;
  if ( (v47 & (unsigned int)v46) != (unsigned __int64)v47 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00117E0, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x3300000) != (*(_DWORD *)(a1 + 256) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00117E8, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x80000000) != (*(_DWORD *)(a1 + 256) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 264) & *(_DWORD *)(a1 + 256) & 0x8000000) != (*(_DWORD *)(a1 + 256) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
