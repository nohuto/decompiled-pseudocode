/*
 * XREFs of ?HasUniqueShaderCache@CRenderingTechniqueFragment@@QEBA_NPEAPEAVCCompiledEffectCache@@@Z @ 0x18006BD00
 * Callers:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ @ 0x18006BE74 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderingTechniqueFragment::HasUniqueShaderCache(
        CRenderingTechniqueFragment *this,
        struct CCompiledEffectCache **a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  struct CCompiledEffectCache *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax
  struct CCompiledEffectCache *v7; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
  *a2 = 0LL;
  v4 = (struct CCompiledEffectCache *)*((_QWORD *)this + 1);
  v5 = v3 >> 4;
  if ( !(_DWORD)v5 )
  {
LABEL_7:
    *a2 = v4;
    return 1;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v2 + 8);
    if ( v6 )
    {
      v7 = *(struct CCompiledEffectCache **)(v6 + 8);
      if ( !v7 )
        return 0;
      if ( !v4 )
      {
        v4 = v7;
        goto LABEL_6;
      }
      if ( v7 != v4 )
        return 0;
    }
LABEL_6:
    if ( ++v2 >= (unsigned int)v5 )
      goto LABEL_7;
  }
}
