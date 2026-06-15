/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x1800DD7F0
 * Callers:
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x1800DDB18 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x1800F01C8 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

void __fastcall AERTDestroyHeap(void *a1, void *a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  unsigned __int64 v5; // [rsp+40h] [rbp-28h]
  unsigned __int64 v6; // [rsp+48h] [rbp-20h]

  v3 = (unsigned int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids, a1);
  }
  if ( a1 )
  {
    v4 = RtlDestroyMemoryBlockLookaside(a1);
    v3 = v4 & 0xC0000000;
    if ( (v4 & 0xC0000000) == 0xC0000000 )
    {
      v3 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids,
          a1);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  AEWMILOG_MEMORY(v3, a2, 4u, 4u, a1, 0LL, 0LL, 0LL, v5, v6, v4);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
  }
}
