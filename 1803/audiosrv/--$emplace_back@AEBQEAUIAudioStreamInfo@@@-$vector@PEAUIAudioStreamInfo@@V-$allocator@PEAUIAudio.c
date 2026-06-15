/*
 * XREFs of ??$emplace_back@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAXAEBQEAUIAudioStreamInfo@@@Z @ 0x180016810
 * Callers:
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB50 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800C83D4 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

char *__fastcall std::vector<IAudioStreamInfo *>::emplace_back<IAudioStreamInfo * const &>(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  HANDLE ProcessHeap; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r14
  char *result; // rax
  LPVOID v16; // rax
  __int64 v17; // rcx

  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) || (v10 = v9 + v8, v9 + v8 < v7) )
      v10 = v6 + 1;
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        JUMPOUT(0x180075F20LL);
      }
      v11 = 8 * v10;
      if ( 8 * v10 >= 0x1000 )
      {
        if ( v11 + 39 < v11 )
        {
          std::_Xbad_alloc();
          JUMPOUT(0x180075F30LL);
        }
        v16 = operator new(v11 + 39);
        if ( !v16 )
        {
          _o__invalid_parameter_noinfo_noreturn(v17);
          JUMPOUT(0x180075F41LL);
        }
        v14 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v14 - 1) = v16;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        v14 = HeapAlloc(ProcessHeap, 0, 8 * v10);
        if ( !v14 )
        {
          _o__invalid_parameter_noinfo_noreturn(v13);
          JUMPOUT(0x180075F59LL);
        }
      }
    }
    else
    {
      v14 = 0LL;
    }
    try
    {
      v14[v6] = *a2;
      memmove(v14, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v14, v10, 8uLL);
      throw;
    }
    if ( *(_QWORD *)a1 )
      std::_Deallocate(*(void **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = &v14[v7];
    result = (char *)&v14[v10];
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    result = (char *)*a2;
    *v5 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
