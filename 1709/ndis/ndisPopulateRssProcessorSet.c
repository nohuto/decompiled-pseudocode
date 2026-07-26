/*
 * XREFs of ndisPopulateRssProcessorSet @ 0x1C001A5A8
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C001A410 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPopulateRssProcessorSet(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  bool v5; // bp
  __int64 *v6; // r12
  unsigned int v7; // ebx
  unsigned int i; // esi
  int v9; // ecx
  _PROCESSOR_NUMBER v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  _PROCESSOR_NUMBER *v13; // r14
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 result; // rax
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 *v21; // r9
  __int64 v22; // r10
  __int64 *v23; // rdx
  __int64 v24; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 32);
  v5 = v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 33) < 0x14u);
  v6 = (__int64 *)(a2 + 40);
  v7 = 0;
  for ( i = 0; i < LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink); ++i )
  {
    if ( !v5 || !*(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 4LL * i) )
    {
      v9 = *(_DWORD *)(a2 + 8);
      v10 = *(_PROCESSOR_NUMBER *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 4LL * i);
      if ( v10.Group >= (unsigned __int16)v9 && (v10.Group > (unsigned __int16)v9 || v10.Number >= BYTE2(v9)) )
      {
        v11 = *(_DWORD *)(a2 + 32);
        if ( v10.Group < (unsigned __int16)v11
          || v10.Group <= (unsigned __int16)v11
          && ((v12 = HIWORD(v11), v10.Number < (unsigned __int8)v12) || v10.Number <= (unsigned __int8)v12) )
        {
          if ( !v5 || !v10.Group && *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 4LL * i + 2) < 0x20u )
          {
            v13 = (_PROCESSOR_NUMBER *)&v6[v7];
            *v13 = v10;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v13);
            v15 = *(_QWORD *)(a1 + 4432);
            if ( v15 )
              v13[1].Group = *(_WORD *)(v15 + 2LL * ProcessorIndexFromNumber);
            else
              v13[1].Group = 0;
            ++v7;
          }
        }
      }
    }
  }
  v16 = *(_DWORD *)(a2 + 12);
  v17 = v7;
  *(_DWORD *)(a2 + 24) = v7;
  *(_DWORD *)(a2 + 20) = 40;
  if ( v16 < v7 )
    v17 = v16;
  *(_DWORD *)(a2 + 28) = 8;
  result = 0xFFFFLL;
  *(_DWORD *)(a2 + 12) = v17;
  if ( *(_WORD *)(a2 + 16) != 0xFFFF && (int)v7 > 0 )
  {
    v19 = -1LL;
    v20 = v7;
    v21 = v6;
    do
    {
      result = *v21;
      v22 = v19;
      v24 = *v21;
      if ( v19 >= 0 )
      {
        v23 = v21;
        do
        {
          if ( WORD2(v24) >= *((_WORD *)v23 - 2) )
            break;
          *v23 = *(v23 - 1);
          --v23;
          --v22;
        }
        while ( v22 >= 0 );
      }
      ++v21;
      v6[v22 + 1] = result;
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
