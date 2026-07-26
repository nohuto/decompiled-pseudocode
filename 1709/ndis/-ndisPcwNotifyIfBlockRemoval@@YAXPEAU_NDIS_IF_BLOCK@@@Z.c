/*
 * XREFs of ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00AB0C8
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00014EC (ndisIfDeregisterInterfaceEx.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisPcwNotifyIfBlockRemoval(struct _NDIS_IF_BLOCK *a1)
{
  _NDIS_PCW_DATA_BLOCK *v2; // rbx
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  _NDIS_PCW_DATA_BLOCK *i; // rax
  _NDIS_PCW_DATA_BLOCK *Next; // rax
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v6.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v6.m_State = Unlocked;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  PcwDataBlock = a1->PcwDataBlock;
  if ( PcwDataBlock )
  {
    --PcwDataBlock->ReferenceCount;
    a1->PcwDataBlock = 0LL;
    for ( i = (_NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList; i; i = i->Next )
    {
      if ( i == PcwDataBlock )
      {
        Next = i->Next;
        if ( v2 )
          v2->Next = Next;
        else
          ndisPcwDataBlockList = Next;
        break;
      }
      v2 = i;
    }
    if ( !PcwDataBlock->ReferenceCount )
      ExFreePoolWithTag(PcwDataBlock, 0);
  }
  KLockHolder::~KLockHolder(&v6);
}
