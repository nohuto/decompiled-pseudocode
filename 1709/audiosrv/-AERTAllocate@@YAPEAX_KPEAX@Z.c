/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1800DD5E0
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1800DB678 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x1800DD520 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x1800DDED0 (WPP_SF_Pq.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x1800F01C8 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

CAudioDGProcess *__fastcall AERTAllocate(CAudioDGProcess *a1, void *a2)
{
  int v4; // esi
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+40h] [rbp-28h]
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]
  CAudioDGProcess *v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = a1;
  if ( g_bSkipRTHeap )
    return (CAudioDGProcess *)operator new(0xC0uLL);
  v9 = 0LL;
  if ( a2 )
  {
    v5 = RtlAllocateMemoryBlockLookaside(a2, 192LL, &v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741670 )
      {
        AERTAddMemoryToHeap(a2, 0x100000uLL);
        v4 = RtlAllocateMemoryBlockLookaside(a2, 192LL, &v9);
        if ( v4 >= 0 )
          goto LABEL_17;
        a1 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
        {
          goto LABEL_17;
        }
        v6 = 35LL;
      }
      else
      {
        a1 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
        {
          goto LABEL_17;
        }
        v6 = 36LL;
      }
      WPP_SF_Pq(*((_QWORD *)a1 + 2), v6);
    }
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_17:
  AEWMILOG_MEMORY((unsigned int)a1, a2, 5u, 6u, a2, 0xC0uLL, 0LL, 0LL, v7, v8, v4);
  return v9;
}
