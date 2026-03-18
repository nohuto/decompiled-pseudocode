/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pnq @ 0x1C00012F0 (McTemplateK0pnq.c)
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     McTemplateK0pqccxqqqqqqqsss @ 0x1C0001774 (McTemplateK0pqccxqqqqqqqsss.c)
 *     McTemplateK0pqn @ 0x1C0001968 (McTemplateK0pqn.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1C00068FC (HUBPARENT_GetHubSymbolicLinkName.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008E20 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C002A6AC (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x1C00660D0 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C006DB98 (HUBCONNECTOR_MapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x1C0070568 (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0073CD8 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x1C0074BE0 (WMI_RegisterHub.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  const void *v5; // rax
  int v6; // esi
  PVOID PoolWithTag; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // r14
  int v13; // eax
  int v14; // r11d
  int v15; // r12d
  int v16; // r13d
  int v17; // r15d
  int v18; // r10d
  char v19; // bp
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  const EVENT_DESCRIPTOR *v23; // rdx
  int v24; // eax
  int v25; // r12d
  int v26; // r13d
  __int64 v27; // r9
  __int64 v28; // rdx
  _QWORD *v29; // r8
  _QWORD *v30; // rdx
  PWDF_DRIVER_GLOBALS v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+28h] [rbp-C0h]
  __int64 v36; // [rsp+30h] [rbp-B8h]
  __int64 v37; // [rsp+40h] [rbp-A8h]
  __int64 v38; // [rsp+48h] [rbp-A0h]
  __int64 v39; // [rsp+50h] [rbp-98h]
  __int64 v40; // [rsp+58h] [rbp-90h]
  __int64 v41; // [rsp+60h] [rbp-88h]
  __int64 v42; // [rsp+68h] [rbp-80h]
  __int64 v43; // [rsp+70h] [rbp-78h]
  __int64 v44; // [rsp+78h] [rbp-70h]
  __int64 v45; // [rsp+80h] [rbp-68h]
  __int64 v46; // [rsp+88h] [rbp-60h]
  int v47; // [rsp+90h] [rbp-58h]
  int v48; // [rsp+90h] [rbp-58h]
  int v49; // [rsp+94h] [rbp-54h]
  int v50; // [rsp+94h] [rbp-54h]
  int v51; // [rsp+98h] [rbp-50h]
  int v52; // [rsp+98h] [rbp-50h]
  __int64 v53; // [rsp+A0h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-40h] BYREF
  int v55; // [rsp+108h] [rbp+20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  v4 = v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 240));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  KeResetEvent((PRKEVENT)(v4 + 1144));
  HUBSM_AddHsmEvent(v4, 2031LL);
  v5 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1144), "Hub FDO PnpCallback", v5);
  v6 = *(_DWORD *)(v4 + 1168);
  v55 = v6;
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
      HUBFDO_SetFriendlyNameForBlockedHub(v4);
    RtlInitUnicodeString(&DestinationString, 0LL);
    HUBPARENT_GetHubSymbolicLinkName(v4);
    if ( !DestinationString.Length )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2512), 2u, 3u, 0x15u, (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids);
      v6 = -1073741823;
LABEL_8:
      v55 = v6;
      goto LABEL_13;
    }
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * DestinationString.Length, 0x68334855u);
    *(_QWORD *)(v4 + 2544) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2512), 2u, 3u, 0x16u, (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids);
      v6 = -1073741670;
      goto LABEL_8;
    }
    *(_WORD *)(v4 + 2536) = 0;
    *(_WORD *)(v4 + 2538) = DestinationString.Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2536), &DestinationString);
    HUBACPI_GetAcpiPortAttributes(v4);
    HUBCONNECTOR_MapHubPorts(v4);
    WMI_RegisterHub(a1);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 544))(*(_QWORD *)(v4 + 240)) )
      _InterlockedOr((volatile signed __int32 *)(v4 + 752), 1u);
  }
LABEL_13:
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  v53 = v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 32),
    0LL);
  if ( (*(_DWORD *)(v8 + 4) & 0x1000) != 0 && v6 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 2208) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
      {
        LODWORD(v34) = 71;
        McTemplateK0pnq(
          v4 + 1172,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 240),
          v34,
          v4 + 1172,
          *(_DWORD *)(v4 + 2592));
      }
    }
    else
    {
      v9 = (unsigned int)(*(_DWORD *)(v4 + 2208) - 2);
      if ( *(_DWORD *)(v4 + 2208) == 2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v34) = 12;
          McTemplateK0pnq(
            v4 + 1172,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 240),
            v34,
            v4 + 1172,
            *(_DWORD *)(v4 + 2592));
        }
      }
      else if ( *(_DWORD *)(v4 + 2208) == 4 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v34) = *(_DWORD *)(v4 + 2592);
          McTemplateK0pq(
            v9,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 240),
            v34);
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20) != 0 )
      {
        McTemplateK0p(v9, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE, 0LL, *(_QWORD *)(v4 + 240));
      }
    }
    v10 = (_QWORD *)(v4 + 2352);
    v11 = *(_QWORD *)(v4 + 2352) - 248LL;
    v12 = *(_QWORD **)(v4 + 2352);
    if ( (_QWORD *)(v4 + 2352) != v12 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v11 + 1256);
        if ( v13 == 3000 )
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_64;
          v14 = *(_DWORD *)(v4 + 160);
          if ( v14 == 1 )
          {
            v25 = *(unsigned __int16 *)(v4 + 176);
            v26 = *(_DWORD *)(v4 + 172);
            v52 = *(_DWORD *)(v4 + 168);
            v50 = *(_DWORD *)(v4 + 188);
            v48 = *(_DWORD *)(v4 + 184);
          }
          else
          {
            v25 = 0;
            v52 = 0x7FFFFFFF;
            v26 = 0x7FFFFFFF;
            v50 = 0;
            v48 = 0;
          }
          if ( v14 == 1 )
            v17 = *(_DWORD *)(v4 + 180);
          else
            v17 = 0;
          v18 = *(_DWORD *)(v11 + 204) >> 1;
          if ( (*(_DWORD *)(v11 + 204) & 2) != 0 )
            v19 = *(_BYTE *)(v11 + 1341);
          else
            v19 = 0;
          v27 = 0LL;
          v28 = 0LL;
          if ( v14 == 2 )
            v27 = v4 + 178;
          v22 = 0LL;
          v46 = v27;
          if ( v14 == 2 )
            v28 = v4 + 173;
          v45 = v28;
          if ( v14 == 2 )
            v22 = v4 + 168;
          v23 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT_V1;
          v44 = v22;
          LODWORD(v43) = v25;
          LODWORD(v42) = v26;
          LODWORD(v41) = v52;
          LODWORD(v40) = v50;
          v24 = v48;
        }
        else
        {
          if ( v13 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_64;
          v14 = *(_DWORD *)(v4 + 160);
          if ( v14 == 1 )
          {
            v15 = *(unsigned __int16 *)(v4 + 176);
            v16 = *(_DWORD *)(v4 + 172);
            v47 = *(_DWORD *)(v4 + 168);
            v49 = *(_DWORD *)(v4 + 188);
            v51 = *(_DWORD *)(v4 + 184);
          }
          else
          {
            v15 = 0;
            v47 = 0x7FFFFFFF;
            v16 = 0x7FFFFFFF;
            v49 = 0;
            v51 = 0;
          }
          if ( v14 == 1 )
            v17 = *(_DWORD *)(v4 + 180);
          else
            v17 = 0;
          v18 = *(_DWORD *)(v11 + 204) >> 1;
          if ( (*(_DWORD *)(v11 + 204) & 2) != 0 )
            v19 = *(_BYTE *)(v11 + 1341);
          else
            v19 = 0;
          v20 = 0LL;
          v21 = 0LL;
          if ( v14 == 2 )
            v20 = v4 + 178;
          v22 = 0LL;
          v46 = v20;
          if ( v14 == 2 )
            v21 = v4 + 173;
          v45 = v21;
          if ( v14 == 2 )
            v22 = v4 + 168;
          v23 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT_V1;
          v44 = v22;
          LODWORD(v43) = v15;
          LODWORD(v42) = v16;
          LODWORD(v41) = v47;
          LODWORD(v40) = v49;
          v24 = v51;
        }
        LODWORD(v39) = v24;
        LODWORD(v38) = v17;
        LODWORD(v37) = v14;
        LOBYTE(v36) = v19;
        LOBYTE(v35) = v18 & 1;
        LODWORD(v34) = *(unsigned __int16 *)(v11 + 200);
        McTemplateK0pqccxqqqqqqqsss(
          v22,
          v23,
          0LL,
          *(_QWORD *)(v4 + 240),
          v34,
          v35,
          v36,
          *(_QWORD *)(v11 + 1416),
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        v10 = (_QWORD *)(v4 + 2352);
LABEL_64:
        if ( (*(_DWORD *)(v11 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v35) = 12;
          LODWORD(v34) = *(unsigned __int16 *)(v11 + 200);
          McTemplateK0pqn(
            *(unsigned __int16 *)(v11 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC,
            0LL,
            *(_QWORD *)(v4 + 240),
            v34,
            v35,
            v11 + 1340);
        }
        if ( (*(_DWORD *)(v11 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v35) = 16;
          LODWORD(v34) = *(unsigned __int16 *)(v11 + 200);
          McTemplateK0pqn(
            *(unsigned __int16 *)(v11 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
            0LL,
            *(_QWORD *)(v4 + 240),
            v34,
            v35,
            v11 + 1352);
        }
        v11 = *v12 - 248LL;
        v12 = (_QWORD *)*v12;
        if ( v10 == v12 )
        {
          v6 = v55;
          v8 = v53;
          break;
        }
      }
    }
  }
  v29 = *(_QWORD **)(v8 + 24);
  v30 = (_QWORD *)(v4 + 2424);
  if ( *v29 != v8 + 16 )
    __fastfail(3u);
  v31 = WdfDriverGlobals;
  *v30 = v8 + 16;
  *(_QWORD *)(v4 + 2432) = v29;
  *v29 = v30;
  *(_QWORD *)(v8 + 24) = v30;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(v31, *(_QWORD *)(v8 + 32));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v34) = v6;
    McTemplateK0pq(v32, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v4 + 240), v34);
  }
  LODWORD(v35) = *(_DWORD *)(v4 + 40);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 2512),
    2u,
    3u,
    0x17u,
    (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
    v35);
  return (unsigned int)v6;
}
