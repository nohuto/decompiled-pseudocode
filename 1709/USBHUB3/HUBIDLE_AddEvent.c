/*
 * XREFs of HUBIDLE_AddEvent @ 0x1C00341EC
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013710 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C00152C0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C00154A0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0015850 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBIDLE_AddEvent @ 0x1C00341EC (HUBIDLE_AddEvent.c)
 *     HUBIDLE_EvtIdleWorkItem @ 0x1C0034690 (HUBIDLE_EvtIdleWorkItem.c)
 *     HUBIDLE_CancelIdle @ 0x1C00346E0 (HUBIDLE_CancelIdle.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C006B6F4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     McTemplateK0ppqqqq @ 0x1C0008B7C (McTemplateK0ppqqqq.c)
 *     HUBMISC_DbgBreak @ 0x1C002A7B0 (HUBMISC_DbgBreak.c)
 *     HUBIDLE_AddEvent @ 0x1C00341EC (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBIDLE_AddEvent(__int64 a1, int a2, IRP *a3)
{
  IRP *v4; // rbp
  unsigned int v6; // edi
  KIRQL v7; // cl
  int v8; // r10d
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, IRP *, __int64); // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  char v26; // bl
  __int64 *v27; // rax
  PWDF_DRIVER_GLOBALS v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // [rsp+20h] [rbp-88h]
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-68h]
  KIRQL v38; // [rsp+51h] [rbp-57h]
  int v39; // [rsp+54h] [rbp-54h]
  __int64 v42; // [rsp+70h] [rbp-38h]
  GUID v43; // [rsp+78h] [rbp-30h] BYREF

  v42 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v6 = 259;
  v39 = *(_DWORD *)(a1 + 160);
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 136));
  v7 = v38;
  if ( a2 != 1000 )
  {
    v8 = a2;
    while ( 1 )
    {
      v9 = 0LL;
      v10 = 1001;
      v11 = *(_QWORD *)(v42 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144) - v39));
      if ( *(_DWORD *)(v11 + 16) != 1000 )
      {
        v12 = *(_DWORD *)(v11 + 16);
        v13 = 0LL;
        while ( v8 != v12 )
        {
          v9 = (unsigned int)(v9 + 1);
          v13 = (unsigned int)v9;
          v12 = *(_DWORD *)(v11 + 8 * v9 + 16);
          if ( v12 == 1000 )
            goto LABEL_9;
        }
        v10 = *(_DWORD *)(v11 + 8 * v13 + 20);
      }
LABEL_9:
      if ( v10 == 1000 )
        break;
      switch ( v10 )
      {
        case 1001:
          LODWORD(v33) = a2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
            2u,
            5u,
            0xBu,
            (__int64)&WPP_cd4a2a3e160d3e6b4a52688cd8ca1d5e_Traceguids,
            v33);
          HUBMISC_DbgBreak("Unhandled Event in Idle State Machine");
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
          {
            LODWORD(v37) = 0;
            LODWORD(v36) = a2;
            LODWORD(v35) = *(_DWORD *)(a1 + 144);
            LODWORD(v34) = *(_DWORD *)(a1 + 160);
            McTemplateK0ppqqqq(v16, &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT, 0LL, 0LL, 0LL, v34, v35, v36, v37);
          }
          goto LABEL_27;
        case 1002:
          v6 = -2147483631;
          goto LABEL_21;
        case 1003:
          v6 = -1073741810;
LABEL_21:
          v4 = a3;
          goto LABEL_27;
      }
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128) + 4) = v10;
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128)) = v8;
      *(_BYTE *)(a1 + 128) = (*(_BYTE *)(a1 + 128) + 1) & 0xF;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000) != 0 )
      {
        LODWORD(v37) = 0;
        v14 = (unsigned int)(v10 - *(_DWORD *)(a1 + 160));
        LODWORD(v36) = v8;
        LODWORD(v35) = **(_DWORD **)(*(_QWORD *)(a1 + 152) + 8 * v14);
        LODWORD(v33) = *(_DWORD *)(a1 + 160);
        McTemplateK0ppqqqq(
          v14,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          0LL,
          *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
          a1,
          v33,
          v35,
          v36,
          v37);
      }
      *(_DWORD *)(a1 + 144) = v10;
      v15 = *(__int64 (__fastcall **)(__int64, IRP *, __int64))(*(_QWORD *)(v42 + 8LL * (unsigned int)(v10 - v39)) + 8LL);
      if ( v15 )
        v8 = v15(a1, a3, v9);
      else
        v8 = 1000;
      if ( v8 == 1000 )
        goto LABEL_27;
    }
    if ( a2 != v8 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
        2u,
        5u,
        0xAu,
        (__int64)&WPP_cd4a2a3e160d3e6b4a52688cd8ca1d5e_Traceguids);
      HUBMISC_DbgBreak("Idle State Machine is ignoring a Sync Event");
    }
LABEL_27:
    v7 = v38;
  }
  v17 = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 176) = 0;
  if ( (unsigned int)(v17 - 1) <= 4 || v17 == 8 )
  {
    v4 = *(IRP **)(a1 + 168);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 136), v7);
  v19 = v17 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( !v23 )
          {
            v6 = 0;
            v26 = 0;
            goto LABEL_53;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 == 1 )
              {
                v6 = -1073741536;
                v26 = 1;
                goto LABEL_53;
              }
            }
            else
            {
              v27 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                 WdfDriverGlobals,
                                 *(_QWORD *)(a1 + 184),
                                 off_1C005B1E0);
              v28 = WdfDriverGlobals;
              *v27 = a1;
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
                v28,
                *(_QWORD *)(a1 + 184));
            }
          }
          else
          {
            v29 = (__int64)a3;
            *(_QWORD *)&v43.Data1 = 0LL;
            *(_QWORD *)v43.Data4 = 0LL;
            if ( a3 && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
              (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a3, &v43);
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
              McTemplateK0p(
                v29,
                &USBHUB3_ETW_EVENT_DEVICE_IDLE_CALLBACK,
                &v43,
                *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL));
            v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 184LL) + 32LL);
            (*(void (__fastcall **)(_QWORD))v30)(*(_QWORD *)(v30 + 8));
            HUBIDLE_AddEvent(a1, 6001LL, 0LL);
          }
        }
        else
        {
          v6 = -1073741101;
        }
      }
      else
      {
        v6 = -1073741810;
      }
    }
    else
    {
      v6 = -2147483631;
    }
  }
  else
  {
    v6 = -1073741536;
  }
  v26 = 0;
LABEL_53:
  if ( v4 )
  {
    *(_QWORD *)&v43.Data1 = 0LL;
    *(_QWORD *)v43.Data4 = 0LL;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v4, &v43);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      LODWORD(v32) = v6;
      McTemplateK0pq(
        v18,
        &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_COMPLETE,
        &v43,
        *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
        v32);
    }
    v4->IoStatus.Status = v6;
    IofCompleteRequest(v4, 0);
  }
  if ( v26 )
    return 259;
  return v6;
}
