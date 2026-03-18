/*
 * XREFs of ?EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ @ 0x18006BE74
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006C824 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?HasUniqueShaderCache@CRenderingTechniqueFragment@@QEBA_NPEAPEAVCCompiledEffectCache@@@Z @ 0x18006BD00 (-HasUniqueShaderCache@CRenderingTechniqueFragment@@QEBA_NPEAPEAVCCompiledEffectCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x180085C90 (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::EnsureShaderCache(CBrushRenderingGraphBuilder *this)
{
  _QWORD *v1; // r13
  unsigned int v3; // ebx
  __int64 v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rcx
  char HasUniqueShaderCache; // r15
  bool v8; // cl
  struct CCompiledEffectCache *v9; // rsi
  unsigned int v10; // ebp
  CCompiledEffectCache *v12; // rax
  CCompiledEffectCache *v13; // rcx
  bool v14; // [rsp+70h] [rbp+8h]
  struct CCompiledEffectCache *v15; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD **)this;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)this + 304LL);
  v5 = *(_DWORD *)(*(_QWORD *)this + 328LL) - 1;
  HasUniqueShaderCache = CRenderingTechniqueFragment::HasUniqueShaderCache(
                           *(CRenderingTechniqueFragment **)(*(_QWORD *)(v4 + 8LL * v5) + 16LL),
                           &v15);
  v8 = *(_QWORD *)(v6 + 8) == 0LL;
  v14 = v8;
  if ( !HasUniqueShaderCache )
    goto LABEL_13;
  v9 = v15;
  v10 = 0;
  if ( v5 )
  {
    while ( CRenderingTechniqueFragment::HasUniqueShaderCache(
              *(CRenderingTechniqueFragment **)(*(_QWORD *)(v4 + 8LL * v10) + 16LL),
              &v15)
         && (v15 == v9 || !v9) )
    {
      v9 = v15;
      if ( ++v10 >= v5 )
        goto LABEL_9;
    }
    HasUniqueShaderCache = 0;
LABEL_9:
    v8 = v14;
  }
  if ( HasUniqueShaderCache )
  {
    v1[43] = v9;
    *(_BYTE *)(*(_QWORD *)this + 355LL) = 0;
    *(_BYTE *)(*(_QWORD *)this + 356LL) = v8;
  }
  else
  {
LABEL_13:
    v12 = (CCompiledEffectCache *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    if ( v12 )
      v13 = CCompiledEffectCache::CCompiledEffectCache(v12, 0LL, v1);
    else
      v13 = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 344LL) = v13;
    if ( *(_QWORD *)(*(_QWORD *)this + 344LL) )
    {
      *(_BYTE *)(*(_QWORD *)this + 355LL) = 1;
      *(_BYTE *)(*(_QWORD *)this + 356LL) = 0;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1CBu);
    }
  }
  return v3;
}
