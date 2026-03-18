/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C0004B64
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C0010200 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C0010240 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C0010260 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qhhhqhhh @ 0x1C0001C60 (McTemplateK0qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C00027C0 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00029F8 (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002CC40 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(_QWORD *a1, __int64 a2)
{
  __int16 v2; // r15
  _WORD *v4; // rax
  unsigned int v5; // ebp
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // di
  unsigned __int16 v8; // si
  __int16 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  __int64 v16; // rcx
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // cx
  int v19; // eax
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 v28; // r9
  unsigned __int8 v29; // dl
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-98h]
  __int64 v35; // [rsp+28h] [rbp-90h]
  int v36; // [rsp+28h] [rbp-90h]
  __int64 v37; // [rsp+30h] [rbp-88h]
  __int64 v38; // [rsp+38h] [rbp-80h]
  __int64 v39; // [rsp+40h] [rbp-78h]
  __int16 v40; // [rsp+C0h] [rbp+8h]
  char v41; // [rsp+D0h] [rbp+18h]

  LOBYTE(v2) = 0;
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
  v4 = (_WORD *)a1[166];
  v5 = 3061;
  v6 = *((_WORD *)a1 + 92);
  v7 = *((_WORD *)a1 + 96);
  v8 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v6;
  if ( v4 )
    v40 = v4[998];
  else
    LOBYTE(v40) = 0;
  if ( v4 )
  {
    v9 = v4[999];
    v41 = v9;
  }
  else
  {
    LOBYTE(v9) = 0;
    v41 = 0;
  }
  if ( v4 )
    v2 = v4[1000];
  if ( (v6 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    v11 = *a1;
    v12 = 512LL;
    *((_DWORD *)a1 + 356) = 4;
    v5 = 3065;
    if ( (*(_DWORD *)(v11 + 2584) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      McTemplateK0qhhhqhhh(
        v10,
        v12,
        (const GUID *)(*a1 + 2404LL),
        *((unsigned __int16 *)a1 + 100),
        v7,
        v6,
        v8,
        249,
        v40,
        v9,
        v2);
    goto LABEL_116;
  }
  if ( (v8 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    if ( (v7 & 8) == 0 )
    {
      *((_DWORD *)a1 + 356) = 4;
      v5 = 3065;
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
        v7,
        v6,
        v8,
        v5,
        v40,
        v41,
        v2);
    goto LABEL_109;
  }
  if ( (v6 & 0x200) == 0 )
  {
    v15 = 86;
LABEL_97:
    v16 = a1[179];
    goto LABEL_98;
  }
  if ( (v6 & 0x10) == 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      if ( (v6 & 0x1E0) == 0xA0 && (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xA0 )
        goto LABEL_34;
      if ( (v6 & 0x1E0) == 0xE0 && (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xE0 )
      {
        v17 = 89;
LABEL_43:
        WPP_RECORDER_SF_(a1[179], 2u, 4u, v17, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
        goto LABEL_34;
      }
    }
    v18 = (v6 >> 5) & 0xF;
    switch ( v18 )
    {
      case 0xBu:
        v19 = (v6 >> 5) & 0xF;
        v20 = 90;
LABEL_46:
        v21 = a1[179];
        v36 = v19;
LABEL_47:
        WPP_RECORDER_SF_d(v21, 2u, 4u, v20, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids, v36);
LABEL_99:
        v30 = *a1;
        v5 = 3077;
        if ( (*(_DWORD *)(*a1 + 2584LL) & 0x10) != 0 )
        {
          HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", a1 + 34);
          v30 = *a1;
        }
        *(_DWORD *)(v30 + 2588) = 1073872896;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
        {
          LODWORD(v34) = *((unsigned __int16 *)a1 + 100);
          McTemplateK0pq(v30, &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR, 0LL, *(_QWORD *)(*a1 + 240LL), v34);
        }
        *(_WORD *)(*a1 + 74LL) = v8;
        *(_WORD *)(*a1 + 72LL) = v6;
        goto LABEL_116;
      case 4u:
        if ( (v7 & 0x1E0) != 0x80 )
        {
          v19 = (v6 >> 5) & 0xF;
          v20 = 91;
          goto LABEL_46;
        }
        goto LABEL_75;
      case 0xAu:
        v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                *a1);
        if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
                WdfDriverGlobals,
                v22)
          || *(_BYTE *)(*a1 + 232LL) )
        {
          WPP_RECORDER_SF_dD(
            a1[179],
            2u,
            4u,
            0x5Cu,
            (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
            (v6 >> 5) & 0xF,
            v6 & 1);
          if ( (*(_DWORD *)(*a1 + 2584LL) & 0x100) != 0 )
            HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", a1 + 34);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
            McTemplateK0qhhhqhhh(
              v25,
              v24,
              (const GUID *)(*a1 + 2404LL),
              *((unsigned __int16 *)a1 + 100),
              v7,
              v6,
              v8,
              245,
              v40,
              v41,
              v2);
          goto LABEL_86;
        }
        v23 = 93;
        LODWORD(v37) = v6 & 1;
        LODWORD(v35) = (v6 >> 5) & 0xF;
        break;
      case 6u:
        WPP_RECORDER_SF_dD(
          a1[179],
          2u,
          4u,
          0x5Eu,
          (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
          (v6 >> 5) & 0xF,
          v6 & 1);
        v27 = *(unsigned int *)(*a1 + 2584LL);
        if ( (v27 & 0x20) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", a1 + 34);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
          McTemplateK0qhhhqhhh(
            v27,
            v26,
            (const GUID *)(*a1 + 2404LL),
            *((unsigned __int16 *)a1 + 100),
            v7,
            v6,
            v8,
            245,
            v40,
            v41,
            v2);
        if ( (v8 & 0x80u) != 0 )
        {
          v17 = 95;
          goto LABEL_43;
        }
        if ( *((_DWORD *)a1 + 2) == 3053 )
        {
          v28 = 96;
          v21 = a1[179];
          v29 = 3;
          LODWORD(v35) = v6 & 1;
          goto LABEL_69;
        }
        if ( (v6 & 2) != 0 )
        {
          v16 = a1[179];
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x200000) == 0 )
          {
            v15 = 98;
            goto LABEL_98;
          }
          WPP_RECORDER_SF_(v16, 2u, 4u, 0x61u, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
        }
        v23 = 99;
        LODWORD(v37) = v6 & 1;
        LODWORD(v35) = (v6 >> 5) & 0xF;
        break;
      default:
LABEL_75:
        if ( (v8 & 1) != 0 || (v6 & 1) != (v7 & 1) )
        {
          v5 = 3017;
          goto LABEL_109;
        }
        if ( (v6 & 1) == 0 )
        {
          if ( (v6 & 2) != 0 )
          {
            v15 = 100;
            goto LABEL_97;
          }
          if ( v18 > 3u )
            return v5;
          v21 = a1[179];
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x100000) == 0 )
          {
            v20 = 102;
            v36 = (v6 >> 5) & 0xF;
            goto LABEL_47;
          }
          v28 = 101;
          LODWORD(v35) = (v6 >> 5) & 0xF;
          v29 = 2;
LABEL_69:
          WPP_RECORDER_SF_d(v21, v29, 4u, v28, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids, v35);
          return v5;
        }
        if ( v18 != 5 )
        {
          if ( (v6 & 2) == 0 )
          {
            v15 = 104;
            goto LABEL_97;
          }
          if ( v18 <= 3u || v18 == 8 )
          {
            if ( (v8 & 0x10) != 0 )
            {
              if ( v18 == 3 )
              {
                v15 = 106;
                goto LABEL_97;
              }
              v5 = 3073;
            }
            else
            {
              if ( (v7 & 0x1E0) != 0x60 || v18 == 3 )
                return v5;
              v5 = 3085;
            }
LABEL_116:
            *((_DWORD *)a1 + 2) = v5;
            return v5;
          }
          v19 = (v6 >> 5) & 0xF;
          v20 = 105;
          goto LABEL_46;
        }
        WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x67u, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
LABEL_86:
        ++*((_DWORD *)a1 + 361);
        v5 = 3053;
        if ( *((_DWORD *)a1 + 361) != 100 * (*((_DWORD *)a1 + 361) / 0x64u) )
          goto LABEL_116;
        LODWORD(v37) = *((_DWORD *)a1 + 361);
        WPP_RECORDER_SF_qd(a1[179], 2u, 4u, 0x6Bu, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids, a1, v37);
        if ( (*(_DWORD *)(*a1 + 2584LL) & 0x800) == 0 )
          goto LABEL_116;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", a1 + 34);
LABEL_109:
        if ( v5 != 3017 )
          goto LABEL_115;
        goto LABEL_110;
    }
    WPP_RECORDER_SF_dD(a1[179], 2u, 4u, v23, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids, v35, v37);
    goto LABEL_86;
  }
  if ( (v6 & 2) != 0 )
  {
    v16 = a1[179];
    if ( (*(_DWORD *)(*a1 + 40LL) & 0x1000000) != 0 )
    {
      WPP_RECORDER_SF_(v16, 2u, 4u, 0x57u, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
      goto LABEL_29;
    }
    v15 = 88;
LABEL_98:
    WPP_RECORDER_SF_(v16, 2u, 4u, v15, (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
    goto LABEL_99;
  }
LABEL_29:
  if ( (v6 & 1) != 0 )
  {
    v5 = 3081;
    goto LABEL_116;
  }
  if ( (v8 & 1) == 0 && (v7 & 1) == 0 )
    return v5;
LABEL_34:
  v5 = 3017;
LABEL_110:
  if ( (v6 & 1) != 0 )
    goto LABEL_116;
  LODWORD(v39) = v8;
  LODWORD(v38) = v6;
  LODWORD(v37) = v7;
  LODWORD(v35) = *((unsigned __int16 *)a1 + 100);
  WPP_RECORDER_SF_dDDD(
    a1[179],
    v7,
    4u,
    0x6Cu,
    (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
    v35,
    v37,
    v38,
    v39);
  if ( (*(_DWORD *)(*a1 + 2584LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) == 0 )
    goto LABEL_116;
  McTemplateK0qhhhqhhh(v32, v31, 0LL, *((unsigned __int16 *)a1 + 100), v7, v6, v8, 201, v40, v41, v2);
LABEL_115:
  if ( v5 != 3061 )
    goto LABEL_116;
  return v5;
}
