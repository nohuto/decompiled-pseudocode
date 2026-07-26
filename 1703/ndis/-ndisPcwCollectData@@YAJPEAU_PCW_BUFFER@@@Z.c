/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00E4B5C
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00E4980 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     NdisGroupActiveProcessorCount @ 0x1C0023870 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0069B88 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B4FFC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E52C4 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x1C00E5588 (-ndisSumDataBlock@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  NTSTATUS v2; // esi
  ULONG active; // r14d
  struct _NDIS_PCW_DATA_BLOCK *i; // rdi
  int v5; // ebx
  unsigned __int64 *PerCpuDataForProcessor; // rax
  __int64 v7; // r9
  ULONG v8; // r8d
  _NDIS_MINIPORT_BLOCK *Miniport; // r8
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  ULONG TotalInstanceId; // r8d
  struct _PCW_DATA v14; // [rsp+30h] [rbp-D0h] BYREF
  KLockHolder v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _PCW_DATA Data; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v17[38]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v18[38]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = 0;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v18, 0, sizeof(v18));
  v15.m_State = Unlocked;
  v15.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v15.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v15);
LABEL_2:
  for ( i = (struct _NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList; ; i = i->Next )
  {
    if ( !i )
    {
      if ( v2 >= 0 )
      {
        v14.Size = 304;
        v14.Data = v18;
        v2 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v14);
      }
      goto LABEL_17;
    }
    if ( v2 < 0 )
      goto LABEL_17;
    memset(v17, 0, sizeof(v17));
    v5 = 0;
    if ( active )
      break;
LABEL_8:
    Miniport = i->Miniport;
    if ( Miniport )
    {
      if ( (Miniport->PcwDatapathEventMask & 0x2000000) != 0 )
      {
        if ( ndisReferenceMiniport((__int64)i->Miniport, 0x5Du) )
        {
          ++i->ReferenceCount;
          v10 = i->Miniport;
          KLockHolder::ReleaseExclusive(&v15);
          v17[37] = ndisPcwQueryPcfMatchCount(v10);
          ndisDereferenceMiniport((__int64)v10, 0x5Du);
          KLockHolder::AcquireExclusive(&v15);
          if ( i->ReferenceCount-- == 1 )
          {
            ExFreePoolWithTag(i, 0);
            goto LABEL_2;
          }
        }
      }
    }
    TotalInstanceId = i->TotalInstanceId;
    v14.Data = v17;
    v14.Size = 304;
    v2 = PcwAddInstance(Buffer, &i->TotalInstanceName, TotalInstanceId, 1u, &v14);
    if ( v2 < 0 )
      goto LABEL_17;
    ndisSumDataBlock(v18, v17);
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = (unsigned __int64 *)ndisPcwGetPerCpuDataForProcessor(i, v5);
    ndisSumDataBlock(v17, PerCpuDataForProcessor);
    v8 = *(_DWORD *)(v7 + 408);
    Data.Data = (const void *)v7;
    Data.Size = 304;
    v2 = PcwAddInstance(Buffer, (PCUNICODE_STRING)(v7 + 416), v8, 1u, &Data);
    if ( v2 < 0 )
      break;
    if ( ++v5 >= active )
      goto LABEL_8;
  }
LABEL_17:
  KLockHolder::~KLockHolder(&v15);
  return (unsigned int)v2;
}
