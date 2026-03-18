/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x1C00223E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq @ 0x1C0001D48 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C00027D0 (WPP_RECORDER_SF_dDDD.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBDTX_ControlTransferComplete(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int Arg3; // edi
  unsigned int v5; // esi
  struct _MCGEN_TRACE_CONTEXT *v7; // r15
  _BYTE *v8; // r14
  int v9; // ebp
  int v10; // eax
  __int16 v11; // ax
  char v12; // al
  unsigned __int16 v13; // r9
  char v14; // al
  char v15; // al
  char v16; // al
  unsigned __int8 v17; // al
  char v18; // dl
  unsigned __int8 v19; // r8
  char v20; // al
  const EVENT_DESCRIPTOR *v21; // rdx
  int v22; // edi
  __int64 v23; // rax
  __int64 Arg2; // [rsp+28h] [rbp-60h]
  unsigned int v25; // [rsp+38h] [rbp-50h]
  _QWORD v26[4]; // [rsp+50h] [rbp-38h] BYREF

  Arg3 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a4 + 276);
  v7 = a1;
  v8 = *(_BYTE **)(a4 + 2632);
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
    *(_DWORD *)(a4 + 1560) = -1073741823;
    *(_DWORD *)(a4 + 1564) = -1073733632;
  }
  else
  {
    *(_DWORD *)(a4 + 1560) = Arg3;
    *(_DWORD *)(a4 + 1564) = v5;
  }
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
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( (*(_DWORD *)(a4 + 2436) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", a4 + 504);
      *(_DWORD *)(a4 + 2432) = 1073807370;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
          &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
      v10 = 4008;
      if ( v5 != -1073741820 )
        v10 = 4004;
      v9 = v10;
      goto LABEL_103;
    }
  }
  else if ( (_BYTE)a1 == 3 )
  {
    v11 = *(_WORD *)(a4 + 402);
    if ( v11 == 48 )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xBu,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( (*(_DWORD *)(a4 + 2436) & 0x2000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", a4 + 504);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
          &USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
      goto LABEL_103;
    }
    if ( v11 == 49 )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xCu,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( (*(_DWORD *)(a4 + 2436) & 0x4000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", a4 + 504);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
          &USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
      goto LABEL_103;
    }
  }
  else if ( (_BYTE)a1 == 6 && (*(_BYTE *)(a4 + 400) & 0x60) == 0 )
  {
    v12 = *(_BYTE *)(a4 + 403);
    if ( (v12 != 3 || *(_BYTE *)(a4 + 402) != 0xEE) && v12 != 6 && (*(_DWORD *)(a4 + 2436) & 1) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", a4 + 504);
    if ( *(_BYTE *)(a4 + 403) == 1 )
    {
      *(_DWORD *)(a4 + 2432) = 1073807360;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xDu,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
          &USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
    }
    else if ( *(_BYTE *)(a4 + 403) == 2 )
    {
      *(_DWORD *)(a4 + 2432) = 1073807367;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xEu,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
          &USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
    }
    else
    {
      a1 = (struct _MCGEN_TRACE_CONTEXT *)((unsigned int)*(unsigned __int8 *)(a4 + 403) - 3);
      switch ( *(_BYTE *)(a4 + 403) )
      {
        case 3:
          v14 = *(_BYTE *)(a4 + 2004);
          if ( v14 && v14 == *(_BYTE *)(a4 + 402) )
          {
            *(_DWORD *)(a4 + 2432) = 1073807373;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x11u,
              (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
              Arg3,
              v5);
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
              McTemplateK0pqqq(
                a1,
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
              v15 = *(_BYTE *)(a4 + 2003);
              if ( v15 && v15 == (_BYTE)a1 )
              {
                *(_DWORD *)(a4 + 2432) = 1073807375;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                  2u,
                  5u,
                  0x13u,
                  (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
                  Arg3,
                  v5);
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
                  McTemplateK0pqqq(
                    a1,
                    &USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE,
                    (const GUID *)(a4 + 1516),
                    *(const void **)(a4 + 24),
                    0,
                    v5,
                    Arg3);
              }
              else if ( v8 )
              {
                v16 = *(_BYTE *)(*(_QWORD *)v8 + 3LL);
                if ( v16 && v16 == (_BYTE)a1 )
                {
                  *(_DWORD *)(a4 + 2432) = 1073807375;
                  WPP_RECORDER_SF_dD(
                    *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                    2u,
                    5u,
                    0x14u,
                    (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
                    Arg3,
                    v5);
                  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
                    McTemplateK0pqqq(
                      a1,
                      &USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE,
                      (const GUID *)(a4 + 1516),
                      *(const void **)(a4 + 24),
                      0,
                      v5,
                      Arg3);
                }
                else
                {
                  v17 = v8[8];
                  if ( v17 != 0xFF )
                  {
                    v18 = *(_BYTE *)(*(_QWORD *)v8 + 4LL * v17 + 47);
                    if ( v18 )
                    {
                      if ( v18 == (_BYTE)a1 )
                      {
                        *(_DWORD *)(a4 + 2432) = 1073807375;
                        WPP_RECORDER_SF_dD(
                          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                          2u,
                          5u,
                          0x15u,
                          (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
                          Arg3,
                          v5);
                        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
                          McTemplateK0pqqq(
                            a1,
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
                (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
                Arg3,
                v5);
              if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
                McTemplateK0pqqq(
                  a1,
                  &USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE,
                  (const GUID *)(a4 + 1516),
                  *(const void **)(a4 + 24),
                  0,
                  v5,
                  Arg3);
            }
          }
          break;
        case 6:
          *(_DWORD *)(a4 + 2432) = 1073807372;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x10u,
            (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              a1,
              &USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
          break;
        case 0xF:
          *(_DWORD *)(a4 + 2432) = 1073807371;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0xFu,
            (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
            Arg3,
            v5);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
            McTemplateK0pqqq(
              a1,
              &USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE,
              (const GUID *)(a4 + 1516),
              *(const void **)(a4 + 24),
              0,
              v5,
              Arg3);
          break;
        default:
          v13 = 22;
LABEL_39:
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            v13,
            (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
            Arg3,
            v5);
          goto LABEL_103;
      }
    }
    goto LABEL_103;
  }
  v19 = *(_BYTE *)(a4 + 400);
  v20 = (v19 >> 5) & 3;
  if ( v20 != 2 || (_BYTE)a1 != *(_BYTE *)(a4 + 2052) )
  {
    if ( (_BYTE)a1 != 49 || v20 )
    {
      if ( ((*(_BYTE *)(a4 + 400) >> 5) & 3) == 0
        && ((_BYTE)a1 == 1 && *(_WORD *)(a4 + 402) == 1
         || (_BYTE)a1 == 3 && !*(_WORD *)(a4 + 402) && !*(_WORD *)(a4 + 404)) )
      {
        goto LABEL_103;
      }
      v25 = (v19 >> 5) & 3;
      WPP_RECORDER_SF_dDDD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        v25,
        5u,
        0x1Du,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5,
        v25,
        (unsigned __int8)a1);
      if ( (*(_DWORD *)(a4 + 2436) & 1) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", a4 + 504);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40000) == 0 )
        goto LABEL_103;
      v21 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
    }
    else
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0x1Cu,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( (*(_DWORD *)(a4 + 2436) & 8) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", a4 + 504);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) == 0 )
        goto LABEL_103;
      v21 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
    }
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)*(unsigned __int16 *)(*(_QWORD *)(a4 + 8) + 200LL),
      v21,
      (const GUID *)(a4 + 1516),
      *(const void **)(a4 + 24),
      *(unsigned __int16 *)(*(_QWORD *)(a4 + 8) + 200LL),
      v5,
      Arg3);
    goto LABEL_103;
  }
  switch ( *(_WORD *)(a4 + 404) )
  {
    case 4:
      *(_DWORD *)(a4 + 2432) = 1073807376;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0x17u,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
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
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0x18u,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
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
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0x19u,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        McTemplateK0pqqq(
          a1,
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
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0x1Au,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        Arg3,
        v5);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
        McTemplateK0pqqq(
          a1,
          &USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE,
          (const GUID *)(a4 + 1516),
          *(const void **)(a4 + 24),
          0,
          v5,
          Arg3);
      break;
    default:
      v13 = 27;
      goto LABEL_39;
  }
LABEL_103:
  if ( Arg3 < 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40000) != 0 )
    McTemplateK0pqqq(a1, &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR, 0LL, *(const void **)(a4 + 24), 0, v5, Arg3);
  v26[0] = 24LL;
  v26[2] = 0LL;
  v26[1] = 0LL;
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _MCGEN_TRACE_CONTEXT *, _QWORD *))(WdfFunctions_01015
                                                                                                + 1992))(
          WdfDriverGlobals,
          v7,
          v26);
  if ( v22 < 0 )
  {
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005B110);
    LODWORD(Arg2) = v22;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v23 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      Arg2);
  }
  HUBSM_AddEvent(a4 + 504, v9);
}
