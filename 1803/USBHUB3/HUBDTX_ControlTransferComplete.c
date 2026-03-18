/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x1C0022EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq @ 0x1C0001D38 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C00027C0 (WPP_RECORDER_SF_dDDD.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBDTX_ControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int Arg3; // edi
  unsigned int v5; // esi
  __int64 v7; // r15
  _BYTE *v8; // r14
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  __int16 v12; // ax
  unsigned __int8 v13; // cl
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned __int16 v18; // r9
  char v19; // al
  char v20; // al
  char v21; // al
  unsigned __int8 v22; // al
  char v23; // dl
  char v24; // al
  const EVENT_DESCRIPTOR *v25; // rdx
  int v26; // edi
  __int64 v27; // rax
  __int64 Arg2; // [rsp+28h] [rbp-60h]
  unsigned int v29; // [rsp+38h] [rbp-50h]
  _QWORD v30[4]; // [rsp+50h] [rbp-38h] BYREF

  Arg3 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a4 + 276);
  v7 = a1;
  v8 = *(_BYTE **)(a4 + 2640);
  *(_DWORD *)(a4 + 256) = *(_DWORD *)(a4 + 308);
  *(_DWORD *)(a4 + 408) = 0;
  if ( Arg3 >= 0 )
  {
    v9 = 4012;
    goto LABEL_103;
  }
  v9 = 4004;
  if ( *(_BYTE *)(a4 + 401) == 9 && *(_WORD *)(a4 + 402) )
  {
    v10 = -1073733632;
    a1 = 3221225473LL;
  }
  else
  {
    v10 = v5;
    a1 = (unsigned int)Arg3;
  }
  *(_DWORD *)(a4 + 1560) = a1;
  *(_DWORD *)(a4 + 1564) = v10;
  LOBYTE(a1) = *(_BYTE *)(a4 + 401);
  if ( (_BYTE)a1 == 48 )
  {
    if ( (*(_BYTE *)(a4 + 400) & 0x60) == 0 )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xAu,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
        Arg3,
        v5);
      if ( (*(_DWORD *)(a4 + 2436) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", a4 + 504);
      *(_DWORD *)(a4 + 2432) = 1073807370;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
      v11 = 4008;
      if ( v5 != -1073741820 )
        v11 = 4004;
      v9 = v11;
      goto LABEL_103;
    }
    goto LABEL_68;
  }
  if ( (_BYTE)a1 == 3 )
  {
    v12 = *(_WORD *)(a4 + 402);
    if ( v12 == 48 )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xBu,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
        Arg3,
        v5);
      if ( (*(_DWORD *)(a4 + 2436) & 0x2000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", a4 + 504);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
      goto LABEL_103;
    }
    if ( v12 == 49 )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xCu,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
        Arg3,
        v5);
      if ( (*(_DWORD *)(a4 + 2436) & 0x4000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", a4 + 504);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
      goto LABEL_103;
    }
LABEL_68:
    v24 = (*(_BYTE *)(a4 + 400) >> 5) & 3;
    if ( v24 == 2 && (_BYTE)a1 == *(_BYTE *)(a4 + 2052) )
    {
      v17 = *(_QWORD *)(a4 + 8);
      switch ( *(_WORD *)(a4 + 404) )
      {
        case 4:
          *(_DWORD *)(a4 + 2432) = 1073807376;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(v17 + 1432),
            2u,
            5u,
            0x17u,
            (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_MS_EXT_CONFIG_DESCRIPTOR_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
          break;
        case 6:
          *(_DWORD *)(a4 + 2432) = 1073807377;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(v17 + 1432),
            2u,
            5u,
            0x18u,
            (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_MS_CONTAINER_ID_DESCRIPTOR_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
          break;
        case 7:
          *(_DWORD *)(a4 + 2432) = 1073807388;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(v17 + 1432),
            2u,
            5u,
            0x19u,
            (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_MSOS20_DESCRIPTOR_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
          break;
        case 8:
          *(_DWORD *)(a4 + 2432) = 1073807390;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(v17 + 1432),
            2u,
            5u,
            0x1Au,
            (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
          break;
        default:
          v18 = 27;
          goto LABEL_75;
      }
      goto LABEL_103;
    }
    if ( (_BYTE)a1 == 49 )
    {
      if ( !v24 )
      {
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
          Arg3,
          v5);
        if ( (*(_DWORD *)(a4 + 2436) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", a4 + 504);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) == 0 )
          goto LABEL_103;
        v25 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
        goto LABEL_100;
      }
    }
    else if ( !v24
           && ((_BYTE)a1 == 1 && *(_WORD *)(a4 + 402) == 1
            || (_BYTE)a1 == 3 && !*(_WORD *)(a4 + 402) && !*(_WORD *)(a4 + 404)) )
    {
      goto LABEL_103;
    }
    v29 = (*(unsigned __int8 *)(a4 + 400) >> 5) & 3;
    WPP_RECORDER_SF_dDDD(
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
      v29,
      5u,
      0x1Du,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      Arg3,
      v5,
      v29,
      (unsigned __int8)a1);
    if ( (*(_DWORD *)(a4 + 2436) & 1) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", a4 + 504);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40000) == 0 )
      goto LABEL_103;
    v25 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
LABEL_100:
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)*(unsigned __int16 *)(*(_QWORD *)(a4 + 8) + 200LL),
      v25,
      (const GUID *)(a4 + 1516),
      *(const void **)(a4 + 24),
      *(unsigned __int16 *)(*(_QWORD *)(a4 + 8) + 200LL),
      v5,
      Arg3);
    goto LABEL_103;
  }
  if ( (_BYTE)a1 != 6 || (*(_BYTE *)(a4 + 400) & 0x60) != 0 )
    goto LABEL_68;
  v13 = *(_BYTE *)(a4 + 403);
  if ( (v13 != 3 || *(_BYTE *)(a4 + 402) != 0xEE) && v13 != 6 && (*(_DWORD *)(a4 + 2436) & 1) != 0 )
  {
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", a4 + 504);
    v13 = *(_BYTE *)(a4 + 403);
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      a1 = (unsigned int)(v15 - 1);
      if ( (_DWORD)a1 )
      {
        v16 = a1 - 3;
        if ( v16 )
        {
          if ( v16 != 9 )
          {
            v17 = *(_QWORD *)(a4 + 8);
            v18 = 22;
LABEL_75:
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(v17 + 1432),
              2u,
              5u,
              v18,
              (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
              Arg3,
              v5);
            goto LABEL_103;
          }
          *(_DWORD *)(a4 + 2432) = 1073807371;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0xFu,
            (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
        }
        else
        {
          *(_DWORD *)(a4 + 2432) = 1073807372;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x10u,
            (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
        }
      }
      else
      {
        v19 = *(_BYTE *)(a4 + 2004);
        if ( v19 && v19 == *(_BYTE *)(a4 + 402) )
        {
          *(_DWORD *)(a4 + 2432) = 1073807373;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x11u,
            (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_SERIAL_NUMBER_STRING_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
        }
        else
        {
          LOBYTE(a1) = *(_BYTE *)(a4 + 402);
          if ( (_BYTE)a1 )
          {
            v20 = *(_BYTE *)(a4 + 2003);
            if ( v20 && v20 == (_BYTE)a1 )
            {
              *(_DWORD *)(a4 + 2432) = 1073807375;
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                2u,
                5u,
                0x13u,
                (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
                Arg3,
                v5);
              if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
                McTemplateK0pqqq(
                  (PMCGEN_TRACE_CONTEXT)a1,
                  &USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE,
                  (const GUID *)(a4 + 1516),
                  *(const void **)(a4 + 24),
                  0,
                  v5,
                  Arg3);
            }
            else if ( v8 )
            {
              v21 = *(_BYTE *)(*(_QWORD *)v8 + 3LL);
              if ( v21 && v21 == (_BYTE)a1 )
              {
                *(_DWORD *)(a4 + 2432) = 1073807375;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                  2u,
                  5u,
                  0x14u,
                  (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
                  Arg3,
                  v5);
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
                  McTemplateK0pqqq(
                    (PMCGEN_TRACE_CONTEXT)a1,
                    &USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE,
                    (const GUID *)(a4 + 1516),
                    *(const void **)(a4 + 24),
                    0,
                    v5,
                    Arg3);
              }
              else
              {
                v22 = v8[8];
                if ( v22 != 0xFF )
                {
                  v23 = *(_BYTE *)(*(_QWORD *)v8 + 4LL * v22 + 47);
                  if ( v23 )
                  {
                    if ( v23 == (_BYTE)a1 )
                    {
                      *(_DWORD *)(a4 + 2432) = 1073807375;
                      WPP_RECORDER_SF_dD(
                        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                        2u,
                        5u,
                        0x15u,
                        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
                        Arg3,
                        v5);
                      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
                        McTemplateK0pqqq(
                          (PMCGEN_TRACE_CONTEXT)a1,
                          &USBHUB3_ETW_EVENT_ALTERNATE_MODE_STRING_FAILURE,
                          (const GUID *)(a4 + 1516),
                          *(const void **)(a4 + 24),
                          0,
                          v5,
                          Arg3);
                    }
                  }
                }
              }
            }
          }
          else
          {
            *(_DWORD *)(a4 + 2432) = 1073807374;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x12u,
              (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
              Arg3,
              v5);
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
              McTemplateK0pqqq(
                (PMCGEN_TRACE_CONTEXT)a1,
                &USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE,
                (const GUID *)(a4 + 1516),
                *(const void **)(a4 + 24),
                0,
                v5,
                Arg3);
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(a4 + 2432) = 1073807367;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xEu,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
        Arg3,
        v5);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
    }
  }
  else
  {
    *(_DWORD *)(a4 + 2432) = 1073807360;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
      2u,
      5u,
      0xDu,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      Arg3,
      v5);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)a1,
        &USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE,
        (const GUID *)(a4 + 1516),
        *(const void **)(a4 + 24),
        0,
        v5,
        Arg3);
  }
LABEL_103:
  if ( Arg3 < 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40000) != 0 )
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)a1,
      &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR,
      0LL,
      *(const void **)(a4 + 24),
      0,
      v5,
      Arg3);
  v30[0] = 24LL;
  v30[2] = 0LL;
  v30[1] = 0LL;
  v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          v7,
          v30);
  if ( v26 < 0 )
  {
    v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005B110);
    LODWORD(Arg2) = v26;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v27 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      Arg2);
  }
  HUBSM_AddEvent(a4 + 504, v9);
}
