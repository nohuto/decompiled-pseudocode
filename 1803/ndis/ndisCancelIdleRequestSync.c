/*
 * XREFs of ndisCancelIdleRequestSync @ 0x1C0070648
 * Callers:
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006FA44 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00732F0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0074750 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ndisCancelIdleRequest @ 0x1C007052C (ndisCancelIdleRequest.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B116C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00B2C94 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisCancelIdleRequestSync(_QWORD *a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // r14
  struct NDISWATCHDOG__ *v9; // rbx
  KIRQL v10; // dl
  struct NDISWATCHDOG__ *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1[560];
  ndisMakeWatchdog(&v11, a1, 38LL, *(_QWORD *)(a1[473] + 848LL), 10000, 0LL);
  ndisCancelIdleRequest(a1, a2, a3);
  v9 = v11;
  ndisWaitForEventThenDisarmWatchdog(v11, (struct _KEVENT *)(v4 + 200));
  if ( a4 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
    if ( (*(_DWORD *)(v4 + 504) & 0x410) == 0x10 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v4, v10);
      KeWaitForSingleObject((PVOID)(v4 + 248), Executive, 0, 0, 0LL);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v4, v10);
    }
  }
  if ( v9 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v9);
}
