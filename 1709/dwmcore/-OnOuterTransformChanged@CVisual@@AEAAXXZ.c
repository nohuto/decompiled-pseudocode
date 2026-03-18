/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004FA64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004FB00 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18005111C (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180052890 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011A7EC (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18011A87C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 i; // rdx
  _QWORD *j; // rax
  __int64 k; // rcx
  _QWORD *m; // rax
  _QWORD *v8; // [rsp+8h] [rbp+8h]
  _QWORD *v9; // [rsp+8h] [rbp+8h]

  v1 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 50) = 0LL;
  if ( (*(_DWORD *)(v1 + 4) & 0x80000) != 0 )
  {
    for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v8 = *(_QWORD **)(i + 4);
    if ( v8 )
    {
      for ( j = (_QWORD *)*v8; j != v8; j = (_QWORD *)*j )
        *(j - 13) = 0LL;
    }
  }
  v3 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 57) = 0LL;
  if ( (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
  {
    for ( k = v3 + 12; (*(_DWORD *)k & 0x7F000000) != 0xD000000; k += (*(_DWORD *)k & 0xFFFFFF) + 4LL )
      ;
    v9 = *(_QWORD **)(k + 4);
    if ( v9 )
    {
      for ( m = (_QWORD *)*v9; m != v9; m = (_QWORD *)*m )
        *(m - 6) = 0LL;
    }
  }
}
