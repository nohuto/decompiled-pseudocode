/*
 * XREFs of ndisMQueueNewWorkItem @ 0x1C0060E9C
 * Callers:
 *     NdisIMQueueMiniportCallback @ 0x1C005E650 (NdisIMQueueMiniportCallback.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 */

__int64 __fastcall ndisMQueueNewWorkItem(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // edi

  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_qq(0x2Eu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (((unsigned __int128)-(__int128)a4 >> 64) & 8) + 24, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = a3;
    *((_DWORD *)PoolWithTag + 2) = 6;
    if ( a4 )
      PoolWithTag[3] = a4;
    if ( (unsigned __int8)byte_1C0099613 >= 4u )
      WPP_SF_qLq(0x30u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)PoolWithTag, 6);
    *v8 = *(_QWORD *)(a1 + 872);
    *(_QWORD *)(a1 + 872) = v8;
    v9 = 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099613 >= 2u )
      WPP_SF_q(0x2Fu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
    v9 = -1073741823;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x48000) == 0x8000 && !v9 )
    KeInsertQueueDpc((PRKDPC)(a1 + 1528), 0LL, 0LL);
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_qq(0x31u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a3);
  return v9;
}
