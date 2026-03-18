/*
 * XREFs of UsbhDisarmHubForWakeDetect @ 0x1C0005F78
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C00025A0 (Usbh_SSH_HubPendingResume.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0005F28 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0015D58 (UsbhArmHubForWakeDetect.c)
 *     UsbhUninitialize @ 0x1C003BB80 (UsbhUninitialize.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B18 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

void __fastcall UsbhDisarmHubForWakeDetect(int a1)
{
  __int64 v1; // r10
  __int64 v2; // rax
  __int64 v3; // rbx
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  Log(a1, 16, 1750554413, 0, 0LL);
  v2 = FdoExt(v1);
  v3 = v2;
  if ( *(_DWORD *)(v2 + 4884) )
  {
    _m_prefetchw((const void *)(v2 + 4884));
    v4 = *(_DWORD *)(v2 + 4884);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4884), v4 | 1, v4);
    }
    while ( v5 != v4 );
    if ( v4 == 4 )
    {
      IoCancelIrp(*(PIRP *)(v3 + 4888));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4884), 4, 5) == 7 )
        IofCompleteRequest(*(PIRP *)(v3 + 4888), 0);
    }
  }
}
