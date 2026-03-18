/*
 * XREFs of ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800B0F64
 * Callers:
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800B1244 (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800B12A4 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 * Callees:
 *     Template_xxqqxqqq @ 0x180164140 (Template_xxqqxqqq.c)
 */

__int64 __fastcall CFlipChain::UpdateBufferState(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx

  if ( !a3 )
  {
    v13 = *(__int64 **)(a1 + 136);
    v14 = *v13;
    *v13 = 0LL;
    v13[1] = 0LL;
    **(_QWORD **)(a1 + 136) = v14;
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + 8LL) = 0;
    goto LABEL_7;
  }
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      v5 = *(_DWORD *)(a1 + 160) == 1;
      *(_DWORD *)(a1 + 188) = *(_DWORD *)(a1 + 168);
      if ( v5 )
        *(_DWORD *)(a1 + 184) = a4;
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(**(_QWORD **)(a1 + 272) + 248LL);
      goto LABEL_6;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v5 = *(_DWORD *)(a1 + 160) == 1;
        *(_DWORD *)(a1 + 188) = *(_DWORD *)(a1 + 168);
        if ( v5 )
          *(_DWORD *)(a1 + 184) = a4;
        QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 192));
LABEL_6:
        v6 = *(_QWORD *)(a1 + 136);
        --*(_DWORD *)(a1 + 112);
        *(_DWORD *)(v6 + 8) = 2;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 136) + 8LL) = 3;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 136);
    ++*(_DWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 176) = a4;
    *(_DWORD *)(v12 + 8) = 1;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 248) )
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 24LL);
  else
    LODWORD(v7) = 0;
  result = *(unsigned int *)(a1 + 112);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    return Template_xxqqxqqq(
             v7,
             *(_DWORD *)(*(_QWORD *)(a1 + 136) + 8LL),
             *(_DWORD *)(a1 + 200),
             0,
             0,
             *(_DWORD *)(*(_QWORD *)(a1 + 136) + 8LL),
             v7,
             0,
             result,
             *(_DWORD *)(a1 + 160));
  return result;
}
