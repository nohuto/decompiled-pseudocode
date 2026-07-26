/*
 * XREFs of ndisCancelWaitWake @ 0x1C0010580
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C006FC80 (NdisMIdleNotificationConfirm.c)
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072FFC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F69DC (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C0100F58 (ndisMPowerPolicy.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 */

void __fastcall ndisCancelWaitWake(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  bool v4; // zf
  int v5; // ecx
  __int64 v6; // r9
  KIRQL v7; // al
  char v8; // bl

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 1296) == 0LL;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1708939;
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
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(146LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, v6);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          v5,
          (unsigned int)&CancelledWakeIrp,
          a1 + 4032,
          a1 + 4032,
          *(_DWORD *)(a1 + 4080),
          *(_QWORD *)(a1 + 4048),
          166);
    }
    v7 = KeAcquireSpinLockRaiseToDpc(v1);
    v8 = *(_BYTE *)(a1 + 1328);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    *(_BYTE *)(a1 + 1329) = 0;
    KeReleaseSpinLock(v1, v7);
    if ( v8 )
      IofCompleteRequest(*(PIRP *)(a1 + 1296), 0);
  }
}
