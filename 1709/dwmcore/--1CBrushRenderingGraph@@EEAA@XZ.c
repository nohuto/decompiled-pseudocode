/*
 * XREFs of ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18006FF14
 * Callers:
 *     ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x18006FFD0 (--_GCBrushRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18006DF64 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180145644 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  unsigned int i; // edi
  CResource *v5; // rcx
  void (*v6)(void); // rax
  __int64 j; // rdi
  CRenderingTechnique *v8; // rcx
  CCompiledEffectCache *v9; // rcx

  v2 = *((_BYTE *)this + 355) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v9 = (CCompiledEffectCache *)*((_QWORD *)this + 43);
    if ( v9 )
      CCompiledEffectCache::`scalar deleting destructor'(v9, a2);
  }
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v5 = *(CResource **)(((unsigned __int64)i << 6) + *((_QWORD *)this + 2));
    if ( v5 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
      if ( (char *)v6 == (char *)CResource::Release )
        CResource::Release(v5);
      else
        v6();
    }
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 82); j = (unsigned int)(j + 1) )
  {
    v8 = *(CRenderingTechnique **)(*((_QWORD *)this + 38) + 8 * j);
    if ( v8 )
      CRenderingTechnique::`scalar deleting destructor'(v8);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 38);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
