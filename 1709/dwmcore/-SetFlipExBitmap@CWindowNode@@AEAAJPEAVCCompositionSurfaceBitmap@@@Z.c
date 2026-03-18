/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180179B54
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x18017959C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x180098D80 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  DWORD v2; // ebp
  char *v4; // rbx
  unsigned int v5; // ecx
  struct CCompositionSurfaceBitmap **v6; // rax
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  signed int v11; // eax
  struct CResource **v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // edx
  __int64 i; // r14
  __int64 v19; // rbx
  struct CCompositionSurfaceBitmap *v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v2 = 0;
  if ( !a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 244); i = (unsigned int)(i + 1) )
    {
      v19 = *((_QWORD *)this + 119);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v19 + 8 * i));
      *(_QWORD *)(v19 + 8 * i) = 0LL;
    }
    *((_DWORD *)this + 244) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 952, 8u);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 118));
    *((_QWORD *)this + 118) = 0LL;
    v17 = 5;
    goto LABEL_31;
  }
  if ( a2 != *((struct CCompositionSurfaceBitmap **)this + 118) )
  {
    v4 = (char *)this + 952;
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x838u);
        return v2;
      }
      v8 = *((unsigned int *)v4 + 6);
      v9 = (unsigned int)v21;
      v10 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v9 = v8 + 1;
      v2 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v4 + 5) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v21);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8 * v8) = v21;
        *((_DWORD *)v4 + 6) = v9;
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x839u);
        return v2;
      }
    }
  }
  CWindowNode::ProcessReadyFlipExImages(this);
  while ( *((_DWORD *)this + 244) > 0x10u )
  {
    v12 = (struct CResource **)*((_QWORD *)this + 119);
    CResource::UnRegisterNotifierInternal(this, *v12);
    *v12 = 0LL;
    v13 = *((_DWORD *)this + 244);
    if ( v13 )
    {
      v14 = *((_QWORD *)this + 119);
      v15 = 0LL;
      if ( v13 != 1 )
      {
        do
        {
          v16 = (unsigned int)(v15 + 1);
          *(_QWORD *)(v14 + 8 * v15) = *(_QWORD *)(v14 + 8 * v16);
          v15 = v16;
        }
        while ( (unsigned int)v16 < *((_DWORD *)this + 244) - 1 );
      }
      --*((_DWORD *)this + 244);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
    }
  }
  if ( *((_DWORD *)this + 244) )
  {
    v17 = 1;
LABEL_31:
    CVisual::PropagateFlags((__int64)this, v17, 0);
  }
  return v2;
}
