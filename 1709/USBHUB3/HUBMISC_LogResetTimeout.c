/*
 * XREFs of HUBMISC_LogResetTimeout @ 0x1C002B25C
 * Callers:
 *     HUBDSM_LoggingResetTimeoutInResettingFor30 @ 0x1C001A850 (HUBDSM_LoggingResetTimeoutInResettingFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 */

char __fastcall HUBMISC_LogResetTimeout(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    McTemplateK0p(
      a1,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RESET_TIMEOUT,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  LOBYTE(v2) = WPP_RECORDER_SF_(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 2u,
                 5u,
                 0x73u,
                 (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
  v3 = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 2432) = 1073807362;
  if ( (v3[184] & 1) != 0 )
  {
    v2 = *(_QWORD *)v3;
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 2584LL) & 0x40) != 0 )
      LOBYTE(v2) = HUBMISC_VerifierDbgBreak("HubHwVerifierPortResetTimeout", (__int64)(v3 + 272));
  }
  return v2;
}
