/*
 * XREFs of ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B893C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B4FFC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B89A4 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00E546C (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

void __fastcall ndisPcwNotifyMiniportCreation(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  __int64 v3; // r9
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  PcwDataBlock = a1->IfBlock->PcwDataBlock;
  if ( PcwDataBlock )
  {
    a1->Reserved4.Buffer = (wchar_t *)PcwDataBlock;
    PcwDataBlock->Miniport = a1;
    ++*((_DWORD *)a1->Reserved4.Buffer + 42);
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, 1LL, 0LL, 0LL);
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, (unsigned int)(v3 + 2), 0LL, v3);
  }
  KLockHolder::ReleaseExclusive(&v4);
  ndisPcwEnableAlwaysOnCounters(a1);
  KLockHolder::~KLockHolder(&v4);
}
