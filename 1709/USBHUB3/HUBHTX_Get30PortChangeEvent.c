/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C0004B7C
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C0010270 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C00102B0 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C00102D0 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qhhhqhhh @ 0x1C0001C70 (McTemplateK0qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C00027D0 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0002A08 (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002BCB0 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(_QWORD *a1, __int64 a2)
{
  _WORD *v3; // rax
  unsigned int v4; // ebp
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // di
  unsigned __int16 v7; // si
  __int16 v8; // r13
  __int16 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 v18; // r9
  __int64 v19; // rcx
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned __int16 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int16 v31; // r9
  int v32; // eax
  unsigned __int8 v33; // dl
  __int64 v34; // [rsp+20h] [rbp-88h]
  __int64 v35; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-68h]
  __int16 v39; // [rsp+B0h] [rbp+8h]
  char v40; // [rsp+B8h] [rbp+10h]
  char v41; // [rsp+C0h] [rbp+18h]

  if ( *((_BYTE *)a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL),
      0LL,
      3887LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)a1 + 1457) = 0;
  }
  v3 = (_WORD *)a1[166];
  v4 = 3061;
  v5 = *((_WORD *)a1 + 92);
  v6 = *((_WORD *)a1 + 96);
  v7 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v5;
  if ( v3 )
    v39 = v3[998];
  else
    LOBYTE(v39) = 0;
  if ( v3 )
  {
    v8 = v3[999];
    v41 = v8;
  }
  else
  {
    LOBYTE(v8) = 0;
    v41 = 0;
  }
  if ( v3 )
  {
    v9 = v3[1000];
    v40 = v9;
  }
  else
  {
    LOBYTE(v9) = 0;
    v40 = 0;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    v11 = *a1;
    v12 = 512LL;
    *((_DWORD *)a1 + 356) = 4;
    v4 = 3065;
    if ( (*(_DWORD *)(v11 + 2584) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      McTemplateK0qhhhqhhh(
        v10,
        v12,
        (const GUID *)(*a1 + 2404LL),
        *((unsigned __int16 *)a1 + 100),
        v6,
        v5,
        v7,
        249,
        v39,
        v8,
        v9);
    goto LABEL_31;
  }
  if ( (v7 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    if ( (v6 & 8) == 0 )
    {
      *((_DWORD *)a1 + 356) = 4;
      v4 = 3065;
    }
    v14 = 512LL;
    if ( (*(_DWORD *)(*a1 + 2584LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      McTemplateK0qhhhqhhh(
        v13,
        v14,
        (const GUID *)(*a1 + 2404LL),
        *((unsigned __int16 *)a1 + 100),
        v6,
        v5,
        v7,
        v4,
        v39,
        v41,
        v40);
    goto LABEL_24;
  }
  if ( (v5 & 0x200) == 0 )
  {
    v18 = 86;
LABEL_35:
    WPP_RECORDER_SF_(a1[179], 2u, 4u, v18, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
LABEL_36:
    v4 = 3077;
    v19 = *(unsigned int *)(*a1 + 2584LL);
    if ( (v19 & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", a1 + 34);
    *(_DWORD *)(*a1 + 2588LL) = 1073872896;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
    {
      LODWORD(v34) = *((unsigned __int16 *)a1 + 100);
      McTemplateK0pq(v19, &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR, 0LL, *(_QWORD *)(*a1 + 240LL), v34);
    }
    *(_WORD *)(*a1 + 74LL) = v7;
    *(_WORD *)(*a1 + 72LL) = v5;
    goto LABEL_31;
  }
  if ( (v5 & 0x10) == 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      if ( (v5 & 0x1E0) == 0xA0 && (v6 & 0x200) != 0 && (v6 & 0x1E0) != 0xA0 )
        goto LABEL_50;
      if ( (v5 & 0x1E0) == 0xE0 && (v6 & 0x200) != 0 && (v6 & 0x1E0) != 0xE0 )
      {
        v20 = 89;
LABEL_59:
        WPP_RECORDER_SF_(a1[179], 2u, 4u, v20, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
        goto LABEL_50;
      }
    }
    v21 = (v5 >> 5) & 0xF;
    switch ( v21 )
    {
      case 0xBu:
        v22 = 90;
        goto LABEL_62;
      case 4u:
        if ( (v6 & 0x1E0) != 0x80 )
        {
          v22 = 91;
          goto LABEL_62;
        }
        goto LABEL_93;
      case 0xAu:
        v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                *a1);
        if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
                WdfDriverGlobals,
                v23)
          || *(_BYTE *)(*a1 + 232LL) )
        {
          WPP_RECORDER_SF_dD(
            a1[179],
            2u,
            4u,
            0x5Cu,
            (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
            (v5 >> 5) & 0xF,
            v5 & 1);
          if ( (*(_DWORD *)(*a1 + 2584LL) & 0x100) != 0 )
            HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", a1 + 34);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
            McTemplateK0qhhhqhhh(
              v28,
              v27,
              (const GUID *)(*a1 + 2404LL),
              *((unsigned __int16 *)a1 + 100),
              v6,
              v5,
              v7,
              245,
              v39,
              v41,
              v40);
          goto LABEL_75;
        }
        v24 = v5;
        v25 = 93;
        v26 = v5 & 1;
        break;
      case 6u:
        WPP_RECORDER_SF_dD(
          a1[179],
          2u,
          4u,
          0x5Eu,
          (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
          (v5 >> 5) & 0xF,
          v5 & 1);
        v30 = *(unsigned int *)(*a1 + 2584LL);
        if ( (v30 & 0x20) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", a1 + 34);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
          McTemplateK0qhhhqhhh(
            v30,
            v29,
            (const GUID *)(*a1 + 2404LL),
            *((unsigned __int16 *)a1 + 100),
            v6,
            v5,
            v7,
            245,
            v39,
            v41,
            v40);
        if ( (v7 & 0x80u) != 0 )
        {
          v20 = 95;
          goto LABEL_59;
        }
        if ( *((_DWORD *)a1 + 2) == 3053 )
        {
          v31 = 96;
          v32 = v5 & 1;
          v33 = 3;
          goto LABEL_87;
        }
        if ( (v5 & 2) != 0 )
        {
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x200000) == 0 )
          {
            v18 = 98;
            goto LABEL_35;
          }
          WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x61u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
        }
        v24 = v5;
        v25 = 99;
        v26 = v5 & 1;
        break;
      default:
LABEL_93:
        if ( (v7 & 1) != 0 || (v5 & 1) != (v6 & 1) )
        {
          v4 = 3017;
          goto LABEL_24;
        }
        if ( (v5 & 1) == 0 )
        {
          if ( (v5 & 2) != 0 )
          {
            v18 = 100;
            goto LABEL_35;
          }
          if ( v21 > 3u )
            return v4;
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x100000) == 0 )
          {
            v22 = 102;
            goto LABEL_62;
          }
          v31 = 101;
          v32 = (v5 >> 5) & 0xF;
          v33 = 2;
LABEL_87:
          LODWORD(v35) = v32;
          WPP_RECORDER_SF_d(a1[179], v33, 4u, v31, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids, v35);
          return v4;
        }
        if ( v21 != 5 )
        {
          if ( (v5 & 2) == 0 )
          {
            v18 = 104;
            goto LABEL_35;
          }
          if ( v21 <= 3u || v21 == 8 )
          {
            if ( (v7 & 0x10) == 0 )
            {
              if ( (v6 & 0x1E0) == 0x60 && (v5 & 0x1E0) != 0x60 )
              {
                v4 = 3085;
                goto LABEL_31;
              }
              return v4;
            }
            if ( (v5 & 0x1E0) != 0x60 )
            {
              v4 = 3073;
              goto LABEL_31;
            }
            v18 = 106;
            goto LABEL_35;
          }
          v22 = 105;
LABEL_62:
          WPP_RECORDER_SF_d(
            a1[179],
            2u,
            4u,
            v22,
            (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
            (v5 >> 5) & 0xF);
          goto LABEL_36;
        }
        WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x67u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
LABEL_75:
        ++*((_DWORD *)a1 + 361);
        v4 = 3053;
        if ( *((_DWORD *)a1 + 361) != 100 * (*((_DWORD *)a1 + 361) / 0x64u) )
          goto LABEL_31;
        LODWORD(v36) = *((_DWORD *)a1 + 361);
        WPP_RECORDER_SF_qd(a1[179], 2u, 4u, 0x6Bu, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids, a1, v36);
        if ( (*(_DWORD *)(*a1 + 2584LL) & 0x800) == 0 )
          goto LABEL_31;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", a1 + 34);
LABEL_24:
        if ( v4 != 3017 )
          goto LABEL_30;
        goto LABEL_25;
    }
    LODWORD(v36) = v26;
    LODWORD(v35) = (v24 >> 5) & 0xF;
    WPP_RECORDER_SF_dD(a1[179], 2u, 4u, v25, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids, v35, v36);
    goto LABEL_75;
  }
  if ( (v5 & 2) != 0 )
  {
    if ( (*(_DWORD *)(*a1 + 40LL) & 0x1000000) == 0 )
    {
      v18 = 88;
      goto LABEL_35;
    }
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x57u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
  }
  if ( (v5 & 1) != 0 )
  {
    v4 = 3081;
    goto LABEL_31;
  }
  if ( (v7 & 1) != 0 || (v6 & 1) != 0 )
  {
LABEL_50:
    v4 = 3017;
LABEL_25:
    if ( (v5 & 1) != 0 )
      goto LABEL_31;
    LODWORD(v38) = v7;
    LODWORD(v37) = v5;
    LODWORD(v36) = v6;
    LODWORD(v35) = *((unsigned __int16 *)a1 + 100);
    WPP_RECORDER_SF_dDDD(
      a1[179],
      v6,
      4u,
      0x6Cu,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v35,
      v36,
      v37,
      v38);
    if ( (*(_DWORD *)(*a1 + 2584LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) == 0 )
      goto LABEL_31;
    McTemplateK0qhhhqhhh(v16, v15, 0LL, *((unsigned __int16 *)a1 + 100), v6, v5, v7, 201, v39, v41, v40);
LABEL_30:
    if ( v4 != 3061 )
LABEL_31:
      *((_DWORD *)a1 + 2) = v4;
  }
  return v4;
}
