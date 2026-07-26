/*
 * XREFs of ndisIovGetNicSwitchList @ 0x1C0023A88
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisIovCopyNicSwitchInfo @ 0x1C006B6B8 (ndisIovCopyNicSwitchInfo.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // r13
  __int64 v6; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbp
  unsigned int i; // r14d

  v4 = 0;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(85LL, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2890611;
  *a2 = 0LL;
  if ( ndisIovNicSwitchWithoutIovSupported(a1)
    || (v6 = *(_QWORD *)(a1 + 4640)) != 0 && *(_QWORD *)(a1 + 3584) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(572 * *(_DWORD *)(a1 + 4720) + 16), 0x6F69444Eu);
    *a2 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0x80;
      *(_BYTE *)(*a2 + 1) = 1;
      *(_WORD *)(*a2 + 2) = 16;
      *(_DWORD *)(*a2 + 4) = 16;
      *(_DWORD *)(*a2 + 8) = *(_DWORD *)(a1 + 4720);
      *(_DWORD *)(*a2 + 12) = 572;
      v9 = *a2;
      v10 = *(_QWORD **)(a1 + 4728);
      v11 = v9 + *(unsigned int *)(v9 + 4);
      for ( i = 0; v10 != (_QWORD *)(a1 + 4728) && i < *(_DWORD *)(a1 + 4720); ++i )
      {
        ndisIovCopyNicSwitchInfo(v11, v10);
        v10 = (_QWORD *)*v10;
        v11 += 572LL;
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(86LL, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1, v4);
  return v4;
}
