/*
 * XREFs of ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00E4DAC
 * Callers:
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00E53B8 (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00E546C (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

void __fastcall ndisPcwDeleteConsumer(struct _NDIS_PCW_CONSUMER_BLOCK *a1)
{
  __int64 i; // rdi
  _DWORD *v3; // rsi
  void *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 10); i = (unsigned int)(i + 1) )
  {
    v3 = *(_DWORD **)(*((_QWORD *)a1 + 6) + 8 * i);
    ndisPcwUpdateMiniportDataBlock(v3, *((unsigned int *)a1 + 2), *((_QWORD *)a1 + 2), 0xFFFFFFFFLL);
    if ( !v3[42] )
      ExFreePoolWithTag(v3, 0);
  }
  v4 = (void *)*((_QWORD *)a1 + 6);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)a1 + 6) = 0LL;
  }
  ExFreePoolWithTag(a1, 0);
}
