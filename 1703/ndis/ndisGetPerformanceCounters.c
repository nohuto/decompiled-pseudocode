/*
 * XREFs of ndisGetPerformanceCounters @ 0x1C00DD224
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0069B88 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E4F48 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisGetPerformanceCounters(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbp
  unsigned int v9; // esi
  _DWORD *v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // rax
  struct _NDIS_PCW_DATA_BLOCK *v14; // r10
  unsigned int i; // r9d
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // r8
  int v17; // r9d
  __int64 v18; // rax
  _OWORD *v19; // rdx
  __int128 v20; // xmm0

  v3 = a2[23];
  v4 = 0;
  *a3 = -1073741823;
  v7 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 24LL) + 32LL) )
    return (unsigned int)-1073741790;
  v8 = *(unsigned int *)(v3 + 8);
  v9 = 48;
  v10 = (_DWORD *)a2[3];
  if ( (unsigned int)v8 < 0x30 )
    return (unsigned int)-1073741811;
  *a3 = 0;
  memset(v10, 0, 0x30uLL);
  v11 = ndisMaxNumberOfProcessors;
  *v10 = 3146112;
  v10[5] = v11;
  *((_QWORD *)v10 + 3) = a1->NumberOfIndirectionTableChanges;
  v10[3] = a1->PcwDatapathEventMask;
  v12 = 304 * v11 + 48;
  v10[4] = a1->PcwDatapathCycleMask;
  if ( (unsigned int)v8 < v12 )
  {
    v10[8] = v8 / 0x130;
    if ( !(unsigned int)(v8 / 0x130) )
      goto LABEL_10;
    v10[9] = 48;
    v9 = 304 * (v8 / 0x130) + 48;
  }
  else
  {
    v10[9] = 48;
    v9 = 304 * v11 + 48;
    v10[8] = v11;
  }
  v10[10] = 304;
  v7 = v10 + 12;
LABEL_10:
  v10[2] = v12;
  MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
  v14 = MiniportDataBlock;
  if ( v7 )
  {
    if ( MiniportDataBlock )
    {
      for ( i = 0; i < v10[8]; v19[2] = *((_OWORD *)PerCpuDataForProcessor + 2) )
      {
        PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor(v14, i);
        v18 = 2LL;
        v19 = &v7[76 * v17];
        do
        {
          v20 = *(_OWORD *)PerCpuDataForProcessor;
          PerCpuDataForProcessor = (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)((char *)PerCpuDataForProcessor + 128);
          *v19 = v20;
          v19 += 8;
          *(v19 - 7) = *((_OWORD *)PerCpuDataForProcessor - 7);
          *(v19 - 6) = *((_OWORD *)PerCpuDataForProcessor - 6);
          *(v19 - 5) = *((_OWORD *)PerCpuDataForProcessor - 5);
          *(v19 - 4) = *((_OWORD *)PerCpuDataForProcessor - 4);
          *(v19 - 3) = *((_OWORD *)PerCpuDataForProcessor - 3);
          *(v19 - 2) = *((_OWORD *)PerCpuDataForProcessor - 2);
          *(v19 - 1) = *((_OWORD *)PerCpuDataForProcessor - 1);
          --v18;
        }
        while ( v18 );
        i = v17 + 1;
        *v19 = *(_OWORD *)PerCpuDataForProcessor;
        v19[1] = *((_OWORD *)PerCpuDataForProcessor + 1);
      }
    }
  }
  a2[7] = v9;
  return v4;
}
