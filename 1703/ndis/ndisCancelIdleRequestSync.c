/*
 * XREFs of ndisCancelIdleRequestSync @ 0x1C006E724
 * Callers:
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006DB18 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisSelectiveSuspendStop @ 0x1C006F934 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0071100 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0072390 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ndisCancelIdleRequest @ 0x1C006E618 (ndisCancelIdleRequest.c)
 */

void __fastcall ndisCancelIdleRequestSync(_QWORD *a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // rdi
  KIRQL v6; // dl

  v4 = a1[560];
  ndisCancelIdleRequest(a1, a2, a3);
  KeWaitForSingleObject((PVOID)(v4 + 200), Executive, 0, 0, 0LL);
  if ( a4 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
    if ( (*(_DWORD *)(v4 + 504) & 0x410) == 0x10 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v4, v6);
      KeWaitForSingleObject((PVOID)(v4 + 248), Executive, 0, 0, 0LL);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v4, v6);
    }
  }
}
