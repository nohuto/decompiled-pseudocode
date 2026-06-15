/*
 * XREFs of ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x1400454E8
 * Callers:
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400548B0 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x140060000 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

__int64 __fastcall AERTUnlockZoneHeap(void *a1, void *a2)
{
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned __int64 v6; // [rsp+40h] [rbp-28h]
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v3 = (unsigned int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_14502ebd56cd3c22b5b969b047a5e1b2_Traceguids,
      (__int64)a1);
  }
  if ( a1 )
  {
    v4 = RtlUnlockMemoryZone(a1);
    v3 = v4 & 0xC0000000;
    if ( (v4 & 0xC0000000) == 0xC0000000 )
    {
      v3 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_14502ebd56cd3c22b5b969b047a5e1b2_Traceguids);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  AEWMILOG_MEMORY(v3, a2, 5u, 9u, a1, 0LL, 0LL, 0LL, v6, v7, v4);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, (__int64)&WPP_14502ebd56cd3c22b5b969b047a5e1b2_Traceguids);
  }
  return v4 | 0x10000000u;
}
