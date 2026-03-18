/*
 * XREFs of HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C002300C
 * Callers:
 *     HUBDSM_ValidatingInterfaceStatusForRemoteWake @ 0x1C001EC70 (HUBDSM_ValidatingInterfaceStatusForRemoteWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqh @ 0x1C000A75C (McTemplateK0pqqh.c)
 *     WPP_RECORDER_SF_q @ 0x1C001129C (WPP_RECORDER_SF_q.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int16 v9; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  if ( *(_DWORD *)(a1 + 256) != 2 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      *(_DWORD *)(a1 + 256));
    return 4065;
  }
  v3 = *(_DWORD *)(a1 + 1632);
  v4 = (v3 >> 8) & 1;
  if ( v4 || (*(_BYTE *)(a1 + 1732) & 1) == 0 )
  {
    if ( (v3 & 4) == 0 && v4 && (*(_BYTE *)(a1 + 1732) & 1) == 0 )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x21u,
        (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
        a1);
      if ( (*(_DWORD *)(a1 + 2436) & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 504);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
      {
        v5 = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
        v9 = *(_WORD *)(a1 + 1732) & 1;
        LODWORD(v8) = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
        LODWORD(v7) = (*(_DWORD *)(a1 + 1632) >> 2) & 1;
        goto LABEL_16;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x20u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      a1);
    if ( (*(_DWORD *)(a1 + 2436) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 504);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
    {
      v5 = *(unsigned __int16 *)(a1 + 1732);
      LOWORD(v5) = *(_WORD *)(a1 + 1732) & 1;
      v9 = v5;
      LODWORD(v8) = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
      LODWORD(v7) = (*(_DWORD *)(a1 + 1632) >> 2) & 1;
LABEL_16:
      McTemplateK0pqqh(
        v5,
        &USBHUB3_ETW_EVENT_INTERFACE_WAKE_CAPABILITY_MISMATCH,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        v7,
        v8,
        v9);
    }
  }
  return v2;
}
