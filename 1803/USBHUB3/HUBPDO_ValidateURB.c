/*
 * XREFs of HUBPDO_ValidateURB @ 0x1C0013B70
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0014A80 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     McTemplateK0ppn @ 0x1C0010B04 (McTemplateK0ppn.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0011398 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0011474 (WPP_RECORDER_SF_dqd.c)
 */

__int64 __fastcall HUBPDO_ValidateURB(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int16 v6; // si
  unsigned int v7; // edi
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  int v11; // [rsp+20h] [rbp-28h]

  v4 = *a2;
  if ( (unsigned __int16)v4 < 0x18u )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x800) != 0 )
    {
      McTemplateK0ppn(
        v4,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
      LOWORD(v4) = *a2;
    }
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      (unsigned __int16)v4,
      a3,
      0x2Du,
      v11);
  }
  v6 = a2[1];
  v7 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 4) = 0;
  if ( v6 <= 0x3Cu )
  {
    if ( v6 == 30 || (unsigned __int16)(v6 - 48) <= 1u )
    {
      v8 = *a2;
      if ( *a2 != 40 )
      {
        *((_DWORD *)a2 + 1) = -2147483136;
        v7 = -1073741811;
        WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL), 40LL, v8, 0x2Fu, v11);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x800) != 0 )
          McTemplateK0ppn(
            v9,
            &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
            (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
            *(_QWORD *)(a1 + 24) + 24LL,
            a2);
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 1) = -2147483136;
    v7 = -1073741811;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x1000) != 0 )
      McTemplateK0ppn(
        v4,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_FUNCTION,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      a3,
      0x2Eu,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v6,
      a2);
  }
  return v7;
}
