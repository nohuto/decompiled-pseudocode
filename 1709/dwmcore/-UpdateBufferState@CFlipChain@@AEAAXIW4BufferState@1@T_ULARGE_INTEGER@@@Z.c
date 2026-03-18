/*
 * XREFs of ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x180165EDC
 * Callers:
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x180165790 (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x180166688 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 * Callees:
 *     McTemplateU0xxqqxqqq @ 0x1801668E0 (McTemplateU0xxqqxqqq.c)
 */

__int64 __fastcall CFlipChain::UpdateBufferState(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax

  if ( a3 )
  {
    v5 = a3 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( !v7 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 144) + 8LL) = 3;
          goto LABEL_16;
        }
        if ( v7 != 1 )
          goto LABEL_16;
        *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 176);
        if ( *(_DWORD *)(a1 + 168) == 1 )
          *(_DWORD *)(a1 + 192) = a4;
        QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 200));
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 168) == 1;
        *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 176);
        if ( v8 )
          *(_DWORD *)(a1 + 192) = a4;
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(**(_QWORD **)(a1 + 280) + 240LL);
      }
      v9 = *(_QWORD *)(a1 + 144);
      --*(_DWORD *)(a1 + 120);
      *(_DWORD *)(v9 + 8) = 2;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 144);
      ++*(_DWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 184) = a4;
      *(_DWORD *)(v10 + 8) = 1;
    }
  }
  else
  {
    v11 = *(__int64 **)(a1 + 144);
    v12 = *v11;
    *v11 = 0LL;
    v11[1] = 0LL;
    **(_QWORD **)(a1 + 144) = v12;
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 8LL) = 0;
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 256) )
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 232) + 24LL);
  else
    LODWORD(v13) = 0;
  result = *(unsigned int *)(a1 + 120);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    return McTemplateU0xxqqxqqq(
             v13,
             *(_DWORD *)(*(_QWORD *)(a1 + 144) + 8LL),
             *(_DWORD *)(a1 + 208),
             0,
             0,
             *(_DWORD *)(*(_QWORD *)(a1 + 144) + 8LL),
             v13,
             0,
             result,
             *(_DWORD *)(a1 + 168));
  return result;
}
