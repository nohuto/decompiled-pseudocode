/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0
 * Callers:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180013030 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180013230 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180085158 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18008533C (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800856C0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18008804C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180088104 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180086A80 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v1; // r10
  __int64 v2; // rcx
  __int64 i; // rcx
  _QWORD *j; // rax
  _QWORD *v5; // [rsp+30h] [rbp+8h]

  CVisual::OnTransformChanged(this);
  v2 = *(_QWORD *)(v1 + 208);
  *(_QWORD *)(v1 + 440) = 0LL;
  if ( (*(_DWORD *)(v2 + 4) & 0x80000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v5 = *(_QWORD **)(i + 4);
    if ( v5 )
    {
      for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
        *(j - 6) = 0LL;
    }
  }
}
