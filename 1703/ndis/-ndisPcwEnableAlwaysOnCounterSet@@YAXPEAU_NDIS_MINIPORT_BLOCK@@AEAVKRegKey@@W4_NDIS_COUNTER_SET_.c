/*
 * XREFs of ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEBG@Z @ 0x1C00B8A4C
 * Callers:
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B89A4 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00B11B4 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E4F48 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00E546C (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

void __fastcall ndisPcwEnableAlwaysOnCounterSet(
        struct _NDIS_MINIPORT_BLOCK *a1,
        KRegKey *a2,
        unsigned int a3,
        char a4,
        unsigned __int16 *a5)
{
  unsigned int v8; // ebx
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // rdi
  unsigned int v10; // [rsp+20h] [rbp-28h] BYREF
  KLockHolder v11; // [rsp+28h] [rbp-20h] BYREF

  v10 = 0;
  if ( KRegKey::QueryValueUlong(a2, a5, &v10) >= 0 )
  {
    v8 = v10;
    if ( v10 )
    {
      MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
      if ( MiniportDataBlock )
      {
        v11.m_State = Unlocked;
        v11.m_Lock = (KPushLockBase *)&ndisPcwMutex;
        v11.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v11);
        ndisPcwUpdateMiniportDataBlock(MiniportDataBlock, a3, ((unsigned int)(1LL << a4) - 1) & v8, 1LL);
        KLockHolder::~KLockHolder(&v11);
      }
    }
  }
}
