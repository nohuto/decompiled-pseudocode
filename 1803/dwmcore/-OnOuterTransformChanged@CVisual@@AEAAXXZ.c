/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004D6FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004D9D4 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004DA70 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FBA0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18004FF50 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180050B88 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18013CB74 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18013CC48 (-SetSize@CVisual@@QEAAXMM@Z.c)
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

  v1 = *((_QWORD *)this + 27);
  *((_QWORD *)this + 51) = 0LL;
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
  v3 = *((_QWORD *)this + 27);
  *((_QWORD *)this + 58) = 0LL;
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
