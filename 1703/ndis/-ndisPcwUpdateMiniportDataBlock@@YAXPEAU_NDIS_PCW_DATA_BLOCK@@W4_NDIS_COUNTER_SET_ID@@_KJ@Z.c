/*
 * XREFs of ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00E546C
 * Callers:
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B893C (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEBG@Z @ 0x1C00B8A4C (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00E4DAC (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 *     ?ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z @ 0x1C00E53A4 (-ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwUpdateMiniportDataBlock(__int64 a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // r10
  int v6; // ebx
  unsigned int v7; // r11d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  bool i; // zf
  __int64 v12; // rcx
  unsigned int j; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *(_DWORD *)(a1 + 168) += a4;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = *(_QWORD *)(a1 + 176);
      v5 = (_DWORD *)(a1 + 104);
      v7 = 13;
      if ( v9 )
        v4 = (_DWORD *)(v9 + 80);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 176);
    v5 = (_DWORD *)a1;
    v7 = 26;
    if ( v10 )
      v4 = (_DWORD *)(v10 + 48);
  }
  for ( i = !_BitScanForward((unsigned int *)&v12, a3); !i; i = !_BitScanForward((unsigned int *)&v12, a3) )
  {
    if ( (unsigned int)v12 >= v7 )
      break;
    v5[v12] += a4;
    a3 &= ~(1 << v12);
  }
  if ( v4 )
  {
    for ( j = 0; j < v7; ++v5 )
    {
      if ( *v5 )
        v6 |= 1 << j;
      ++j;
    }
    *v4 = v6;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
}
