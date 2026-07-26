/*
 * XREFs of ndisPopulateRssProcessorSet @ 0x1C001E998
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C001E800 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPopulateRssProcessorSet(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  bool v5; // r14
  unsigned int SortKey; // r9d
  __int64 *v7; // r12
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  _DWORD *v10; // r8
  int v11; // ecx
  _PROCESSOR_NUMBER v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  _PROCESSOR_NUMBER *v15; // rsi
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v17; // rcx
  bool v18; // cf
  unsigned int v19; // ecx
  __int64 result; // rax
  __int64 v21; // r8
  __int64 v22; // r11
  __int64 *v23; // r9
  __int64 v24; // r10
  __int64 *v25; // rdx
  __int64 v26; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 32);
  v5 = v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 33) < 0x14u);
  SortKey = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  v7 = (__int64 *)(a2 + 40);
  v8 = 0;
  v9 = 0;
  if ( WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey )
  {
    v10 = ndisRssProcessors;
    do
    {
      if ( !v5 || !LOWORD(v10[v9]) )
      {
        v11 = *(_DWORD *)(a2 + 8);
        v12 = (_PROCESSOR_NUMBER)v10[v9];
        if ( v12.Group >= (unsigned __int16)v11 && (v12.Group > (unsigned __int16)v11 || v12.Number >= BYTE2(v11)) )
        {
          v13 = *(_DWORD *)(a2 + 32);
          if ( v12.Group < (unsigned __int16)v13
            || v12.Group <= (unsigned __int16)v13
            && ((v14 = HIWORD(v13), v12.Number < (unsigned __int8)v14) || v12.Number <= (unsigned __int8)v14) )
          {
            if ( !v5 || !v12.Group && BYTE2(v10[v9]) < 0x20u )
            {
              v15 = (_PROCESSOR_NUMBER *)&v7[v8];
              *v15 = v12;
              ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v15);
              v17 = *(_QWORD *)(a1 + 4432);
              if ( v17 )
                v15[1].Group = *(_WORD *)(v17 + 2LL * ProcessorIndexFromNumber);
              else
                v15[1].Group = 0;
              SortKey = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
              ++v8;
              v10 = ndisRssProcessors;
            }
          }
        }
      }
      ++v9;
    }
    while ( v9 < SortKey );
  }
  v18 = *(_DWORD *)(a2 + 12) < v8;
  v19 = v8;
  result = 0xFFFFLL;
  *(_DWORD *)(a2 + 24) = v8;
  if ( v18 )
    v19 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v19;
  *(_DWORD *)(a2 + 20) = 40;
  *(_DWORD *)(a2 + 28) = 8;
  if ( *(_WORD *)(a2 + 16) != 0xFFFF && (int)v8 > 0 )
  {
    v21 = -1LL;
    v22 = v8;
    v23 = v7;
    do
    {
      result = *v23;
      v24 = v21;
      v26 = *v23;
      if ( v21 >= 0 )
      {
        v25 = v23;
        do
        {
          if ( WORD2(v26) >= *((_WORD *)v25 - 2) )
            break;
          *v25 = *(v25 - 1);
          --v25;
          --v24;
        }
        while ( v24 >= 0 );
      }
      ++v23;
      v7[v24 + 1] = result;
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  return result;
}
