/*
 * XREFs of HUBPDO_ValidateURB @ 0x1C00132EC
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     McTemplateK0ppn @ 0x1C0010B74 (McTemplateK0ppn.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00110D0 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C00111AC (WPP_RECORDER_SF_dqd.c)
 */

__int64 __fastcall HUBPDO_ValidateURB(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v5; // si
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-28h]

  if ( *a2 < 0x18u )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x800) != 0 )
      McTemplateK0ppn(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
    WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL), *a2, a3, 0x2Du, v10);
  }
  v5 = a2[1];
  v6 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 4) = 0;
  if ( v5 <= 0x3Cu )
  {
    if ( v5 == 30 || (unsigned __int16)(v5 - 48) <= 1u )
    {
      v7 = *a2;
      if ( *a2 != 40 )
      {
        *((_DWORD *)a2 + 1) = -2147483136;
        v6 = -1073741811;
        WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL), 40LL, v7, 0x2Fu, v10);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x800) != 0 )
          McTemplateK0ppn(
            v8,
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
    v6 = -1073741811;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x1000) != 0 )
      McTemplateK0ppn(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_FUNCTION,
        (const GUID *)(*(_QWORD *)(a1 + 24) + 1516LL),
        *(_QWORD *)(a1 + 24) + 24LL,
        a2);
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      a3,
      0x2Eu,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      v5,
      a2);
  }
  return v6;
}
