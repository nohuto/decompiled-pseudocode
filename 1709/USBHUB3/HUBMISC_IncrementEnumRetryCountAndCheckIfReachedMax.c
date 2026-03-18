/*
 * XREFs of HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0026E08
 * Callers:
 *     HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1C001A420 (HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002A08 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]

  ++*(_DWORD *)(a1 + 32);
  v2 = 4061;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x200u);
  if ( *(_DWORD *)(a1 + 32) <= 3u )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFDFFF);
    *(_DWORD *)(a1 + 2432) = 0;
    v7 = *(void **)(a1 + 2488);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x64334855u);
    memset((void *)(a1 + 2464), 0, 0x60uLL);
    v12 = *(_DWORD *)(a1 + 32);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x11u,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      a1,
      v12);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p(v8, &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RETRY, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 2584LL) & 0x2000) != 0 )
    {
      v5 = v9 + 272;
      v6 = "HubHwVerifierDeviceEnumerationRetry";
      goto LABEL_12;
    }
  }
  else
  {
    v2 = 4089;
    v11 = *(_DWORD *)(a1 + 32);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x10u,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      a1,
      v11);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p(
        v3,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_MAXIMUM_RETRY_COUNT_REACHED,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v4 + 2584LL) & 0x1000) != 0 )
    {
      v5 = v4 + 272;
      v6 = "HubHwVerifierDeviceFailedEnumeration";
LABEL_12:
      HUBMISC_VerifierDbgBreak(v6, v5);
    }
  }
  return v2;
}
