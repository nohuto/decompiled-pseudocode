/*
 * XREFs of ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0004530
 * Callers:
 *     <none>
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(struct _NDIS_WORK_ITEM *a1, _QWORD *a2)
{
  void *v2; // rsi
  KIRQL v4; // bl
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = (void *)a2[10];
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(146LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v2);
  v6 = 0LL;
  v5[0] = 0LL;
  v5[1] = a2[11];
  v6 = a2[12];
  LODWORD(v5[0]) = 1;
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v5);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v2);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ExFreePoolWithTag(a2, 0);
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_(147LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids);
}
