/*
 * XREFs of ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEBG@Z @ 0x1C00C37CC
 * Callers:
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3724 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00B1648 (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00BB128 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F1774 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPcwEnableAlwaysOnCounterSet(
        struct _NDIS_MINIPORT_BLOCK *a1,
        KRegKey *a2,
        int a3,
        char a4,
        unsigned __int16 *a5)
{
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // rdi
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  KLockHolder v10; // [rsp+28h] [rbp-20h] BYREF

  v9 = 0;
  if ( KRegKey::QueryValueUlong(a2, a5, &v9) >= 0 && v9 )
  {
    MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
    if ( MiniportDataBlock )
    {
      v10.m_State = Unlocked;
      v10.m_Lock = (KPushLockBase *)&ndisPcwMutex;
      v10.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v10);
      ndisPcwUpdateMiniportDataBlock((__int64)MiniportDataBlock, a3, v9 & ((1LL << a4) - 1), 1);
      KLockHolder::~KLockHolder(&v10);
    }
  }
}
