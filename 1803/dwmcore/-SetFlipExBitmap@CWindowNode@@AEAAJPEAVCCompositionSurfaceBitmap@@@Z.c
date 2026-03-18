/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801AA0C8
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800930C0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1801A9E00 (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x18008FF00 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v2; // ebp
  char *v4; // rbx
  unsigned int v5; // ecx
  struct CCompositionSurfaceBitmap **v6; // rax
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  struct CResource **v11; // rbx
  unsigned int v12; // r8d
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 i; // r14
  __int64 v19; // rbx
  struct CCompositionSurfaceBitmap *v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v2 = 0;
  if ( !a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 224); i = (unsigned int)(i + 1) )
    {
      v19 = *((_QWORD *)this + 109);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v19 + 8 * i));
      *(_QWORD *)(v19 + 8 * i) = 0LL;
    }
    *((_DWORD *)this + 224) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 872, 8u);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 108));
    *((_QWORD *)this + 108) = 0LL;
    v17 = 5;
    goto LABEL_29;
  }
  if ( a2 != *((struct CCompositionSurfaceBitmap **)this + 108) )
  {
    v4 = (char *)this + 872;
    v5 = 0;
    v6 = *(struct CCompositionSurfaceBitmap ***)v4;
    if ( *((_DWORD *)v4 + 6) )
    {
      while ( a2 != *v6 )
      {
        ++v5;
        ++v6;
        if ( v5 >= *((_DWORD *)v4 + 6) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v7 = CResource::RegisterNotifier(this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5BCu);
        return v2;
      }
      v8 = *((_DWORD *)v4 + 6);
      v9 = v8 + 1;
      v2 = v8 + 1 < v8 ? 0x80070216 : 0;
      if ( v8 + 1 < v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v4 + 5) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v21);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8LL * v8) = v21;
        *((_DWORD *)v4 + 6) = v9;
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x5BDu);
        return v2;
      }
    }
  }
  CWindowNode::ProcessReadyFlipExImages(this);
  while ( 1 )
  {
    v16 = *((_DWORD *)this + 224);
    if ( v16 <= 0x10 )
      break;
    v11 = (struct CResource **)*((_QWORD *)this + 109);
    CResource::UnRegisterNotifierInternal(this, *v11);
    *v11 = 0LL;
    v12 = 0;
    v13 = *((_DWORD *)this + 224);
    if ( v13 )
    {
      v14 = *((_QWORD *)this + 109);
      if ( v13 != 1 )
      {
        do
        {
          v15 = v12++;
          *(_QWORD *)(v14 + 8 * v15) = *(_QWORD *)(v14 + 8LL * v12);
          v13 = *((_DWORD *)this + 224);
        }
        while ( v12 < v13 - 1 );
      }
      *((_DWORD *)this + 224) = v13 - 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
    }
  }
  if ( v16 )
  {
    v17 = 1;
LABEL_29:
    CVisual::PropagateFlags((__int64)this, v17, 0);
  }
  return v2;
}
