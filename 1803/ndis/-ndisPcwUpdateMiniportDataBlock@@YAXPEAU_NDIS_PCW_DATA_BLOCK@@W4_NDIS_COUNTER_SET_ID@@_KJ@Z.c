/*
 * XREFs of ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00B1648
 * Callers:
 *     ?ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z @ 0x1C00B162C (-ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C36BC (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEBG@Z @ 0x1C00C37CC (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00F1648 (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwUpdateMiniportDataBlock(__int64 a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r10
  _DWORD *v5; // r11
  int v6; // edi
  unsigned int v7; // ebx
  int v8; // edx
  __int64 v9; // rax
  bool i; // zf
  __int64 v11; // rcx
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
      v4 = (_DWORD *)(a1 + 104);
      v7 = 13;
      v5 = (_DWORD *)((*(_QWORD *)(a1 + 176) + 80LL) & -(__int64)(*(_QWORD *)(a1 + 176) != 0LL));
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 176);
    v7 = 26;
    v4 = (_DWORD *)a1;
    if ( v9 )
      v5 = (_DWORD *)(v9 + 48);
  }
  for ( i = !_BitScanForward((unsigned int *)&v11, a3); !i; i = !_BitScanForward((unsigned int *)&v11, a3) )
  {
    if ( (unsigned int)v11 >= v7 )
      break;
    v4[v11] += a4;
    a3 &= ~(1 << v11);
  }
  if ( v5 )
  {
    for ( j = 0; j < v7; ++v4 )
    {
      if ( *v4 )
        v6 |= 1 << j;
      ++j;
    }
    *v5 = v6;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
}
