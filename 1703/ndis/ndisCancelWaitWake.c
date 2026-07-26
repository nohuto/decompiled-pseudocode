/*
 * XREFs of ndisCancelWaitWake @ 0x1C002375C
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C006DD30 (NdisMIdleNotificationConfirm.c)
 *     ndisSelectiveSuspendStop @ 0x1C006F934 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0070E94 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00EA84C (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 */

void __fastcall ndisCancelWaitWake(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  bool v4; // zf
  int v5; // ecx
  KIRQL v6; // al
  char v7; // bl

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 1296) == 0LL;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1708852;
  if ( v4 || *(_BYTE *)(a1 + 1328) || *(_BYTE *)(a1 + 1330) )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock(v1, v3);
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    *(_WORD *)(a1 + 1329) = 257;
    KeReleaseSpinLock(v1, v3);
    if ( IoCancelIrp(*(PIRP *)(a1 + 1296)) )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(143LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          v5,
          (unsigned int)&CancelledWakeIrp,
          a1 + 4032,
          a1 + 4032,
          *(_DWORD *)(a1 + 4080),
          *(_QWORD *)(a1 + 4048),
          79);
    }
    v6 = KeAcquireSpinLockRaiseToDpc(v1);
    v7 = *(_BYTE *)(a1 + 1328);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    *(_BYTE *)(a1 + 1329) = 0;
    KeReleaseSpinLock(v1, v6);
    if ( v7 )
      IofCompleteRequest(*(PIRP *)(a1 + 1296), 0);
  }
}
