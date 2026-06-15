/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1800D0DB4
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1800CF678 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x1800D0CF4 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x1800D1464 (WPP_SF_Pq.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x1800D90A4 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

__int64 __fastcall AERTAllocate(CVolumeStrip *a1, void *a2)
{
  int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+40h] [rbp-28h]
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( !a2 )
  {
    v3 = -1073741670;
    goto LABEL_15;
  }
  v4 = RtlAllocateMemoryBlockLookaside(a2, 192LL, &v9);
  v3 = v4;
  if ( v4 >= 0 )
    goto LABEL_15;
  if ( v4 == -1073741670 )
  {
    AERTAddMemoryToHeap(a2, 0x100000uLL);
    v3 = RtlAllocateMemoryBlockLookaside(a2, 192LL, &v9);
    if ( v3 < 0 )
    {
      a1 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        v5 = 35LL;
LABEL_14:
        WPP_SF_Pq(*((_QWORD *)a1 + 2), v5);
      }
    }
  }
  else
  {
    a1 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      v5 = 36LL;
      goto LABEL_14;
    }
  }
LABEL_15:
  AEWMILOG_MEMORY((unsigned int)a1, a2, 5u, 6u, a2, 0xC0uLL, 0LL, 0LL, v7, v8, v3);
  return v9;
}
