/*
 * XREFs of NdisIfDeleteIfStackEntry @ 0x1C00435C0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z @ 0x1C001CECC (-ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z.c)
 *     WPP_SF_dL @ 0x1C0044424 (WPP_SF_dL_ea_1C0044424.c)
 */

void __stdcall NdisIfDeleteIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  KIRQL v4; // si
  struct _NDIS_IF_STACK_ENTRY *StackEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 v8; // rdx

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_dL(54LL, LowerLayerIfIndex, HigherLayerIfIndex, LowerLayerIfIndex);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  StackEntry = ndisIfFindStackEntry(HigherLayerIfIndex, LowerLayerIfIndex);
  if ( StackEntry )
  {
    --StackEntry->HigherLayerIf->LowerLayerIfCount;
    --StackEntry->LowerLayerIf->HigherLayerIfCount;
    Flink = StackEntry->Link.Flink;
    Blink = StackEntry->Link.Blink;
    if ( (struct _NDIS_IF_STACK_ENTRY *)StackEntry->Link.Flink->Blink != StackEntry
      || (struct _NDIS_IF_STACK_ENTRY *)Blink->Flink != StackEntry )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    ExFreePoolWithTag(StackEntry, 0);
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_dL(55LL, v8, HigherLayerIfIndex, LowerLayerIfIndex);
}
