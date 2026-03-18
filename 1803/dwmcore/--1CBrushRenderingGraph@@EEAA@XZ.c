/*
 * XREFs of ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18008EA84
 * Callers:
 *     ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x18008EB30 (--_GCBrushRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18007117C (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18016CDC4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  __int64 i; // rdi
  __int64 v5; // rcx
  __int64 j; // rdi
  CRenderingTechnique *v7; // rcx
  CCompiledEffectCache *v8; // rcx

  v2 = *((_BYTE *)this + 195) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v8 = (CCompiledEffectCache *)*((_QWORD *)this + 23);
    if ( v8 )
      CCompiledEffectCache::`scalar deleting destructor'(v8, a2);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 24 * i);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 42); j = (unsigned int)(j + 1) )
  {
    v7 = *(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * j);
    if ( v7 )
      CRenderingTechnique::`scalar deleting destructor'(v7);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
