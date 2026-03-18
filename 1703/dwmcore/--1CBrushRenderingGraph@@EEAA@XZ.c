/*
 * XREFs of ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18001A19C
 * Callers:
 *     ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x18001A250 (--_GCBrushRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180016EA8 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180152C58 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  unsigned int i; // edi
  __int64 v5; // rcx
  __int64 j; // rdi
  CRenderingTechnique *v7; // rcx
  CCompiledEffectCache *v8; // rcx

  v2 = *((_BYTE *)this + 355) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v8 = (CCompiledEffectCache *)*((_QWORD *)this + 43);
    if ( v8 )
      CCompiledEffectCache::`scalar deleting destructor'(v8, a2);
  }
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v5 = *(_QWORD *)(((unsigned __int64)i << 6) + *((_QWORD *)this + 2));
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 82); j = (unsigned int)(j + 1) )
  {
    v7 = *(CRenderingTechnique **)(*((_QWORD *)this + 38) + 8 * j);
    if ( v7 )
      CRenderingTechnique::`scalar deleting destructor'(v7);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 304);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
