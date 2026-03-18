/*
 * XREFs of ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800059A4
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x18000518C (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18000587C (-_Growmap@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::push_back(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 *v9; // rcx
  void *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Growmap((_QWORD *)a1);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) &= 2 * v5 - 1;
  v6 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v7 = (v6 >> 1) & (v5 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
  {
    v10 = operator new(0x10uLL);
    if ( !v10 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = v10;
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7);
  v9 = (__int64 *)(result + 8 * (v6 & 1));
  if ( v9 )
  {
    *v9 = 0LL;
    if ( v9 != a2 )
    {
      result = *a2;
      *v9 = *a2;
      *a2 = 0LL;
    }
  }
  ++*(_QWORD *)(a1 + 32);
  return result;
}
