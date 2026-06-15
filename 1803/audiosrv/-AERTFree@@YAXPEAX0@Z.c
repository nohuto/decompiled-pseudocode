/*
 * XREFs of ?AERTFree@@YAXPEAX0@Z @ 0x18010B648
 * Callers:
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x180108F90 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x18011D000 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

void __fastcall AERTFree(void *a1, void *a2)
{
  int v3; // edi
  unsigned __int64 v4; // [rsp+40h] [rbp-28h]
  unsigned __int64 v5; // [rsp+48h] [rbp-20h]

  if ( g_bSkipRTHeap )
  {
    operator delete(a1);
  }
  else
  {
    v3 = -2147467259;
    if ( a2 )
    {
      if ( a1 )
      {
        v3 = RtlFreeMemoryBlockLookaside(a2, a1);
        LODWORD(a1) = v3 & 0xC0000000;
        if ( (v3 & 0xC0000000) == 0xC0000000 )
        {
          LODWORD(a1) = (_DWORD)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
          {
            WPP_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x25u,
              (__int64)&WPP_14502ebd56cd3c22b5b969b047a5e1b2_Traceguids,
              a2);
          }
        }
      }
    }
    AEWMILOG_MEMORY((unsigned int)a1, a2, 5u, 6u, a2, 0LL, 0LL, 0LL, v4, v5, v3);
  }
}
