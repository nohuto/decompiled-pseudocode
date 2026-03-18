/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180086A80
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18008524C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180086A80 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180086B80 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180086A80 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  char v1; // al
  __int64 v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  CVisual *v9; // rcx
  __int64 j; // rcx
  _QWORD *k; // rax
  _QWORD *v12; // [rsp+30h] [rbp+8h]

  v1 = *((_BYTE *)this + 488);
  if ( (v1 & 2) != 0 )
  {
    *((_BYTE *)this + 488) = v1 | 1;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v5 = *((_QWORD *)this + 9);
      v6 = (v5 & 2) != 0 ? *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 9) & 1LL;
      if ( (unsigned int)i >= v6 )
        break;
      v7 = *((_QWORD *)this + 9);
      if ( (v7 & 2) != 0 )
        v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v8 = *((_QWORD *)this + 9) & 1LL;
      if ( (unsigned int)i >= v8 )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = (CVisual *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v8 != 1 )
          v9 = (CVisual *)*((_QWORD *)v9 + i + 2);
      }
      if ( v9 )
        CVisual::OnTransformChanged(v9);
    }
  }
  v3 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 48) = 0LL;
  if ( (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
  {
    for ( j = v3 + 12; (*(_DWORD *)j & 0x7F000000) != 0xD000000; j += (*(_DWORD *)j & 0xFFFFFF) + 4LL )
      ;
    v12 = *(_QWORD **)(j + 4);
    if ( v12 )
    {
      for ( k = (_QWORD *)*v12; k != v12; k = (_QWORD *)*k )
        *(k - 13) = 0LL;
    }
  }
}
