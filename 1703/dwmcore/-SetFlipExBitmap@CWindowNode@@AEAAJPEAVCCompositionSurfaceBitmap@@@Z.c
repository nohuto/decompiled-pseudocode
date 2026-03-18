/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180162CDC
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180053F34 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x18012AA9C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x18012A338 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v3; // ebp
  char *v4; // rbx
  unsigned int v5; // ecx
  struct CCompositionSurfaceBitmap **v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  struct CResource **v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // r8
  unsigned int i; // r14d
  __int64 v19; // rbx
  __int64 v20; // rdi
  struct CCompositionSurfaceBitmap *v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = a2;
  v3 = 0;
  if ( !a2 )
  {
    for ( i = 0; i < *((_DWORD *)this + 238); *(_QWORD *)(v19 + 8 * v20) = 0LL )
    {
      v19 = *((_QWORD *)this + 116);
      v20 = i;
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v19 + 8LL * i++));
    }
    *((_DWORD *)this + 238) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 928, 8u);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 115));
    v17 = 1;
    *((_QWORD *)this + 115) = 0LL;
    goto LABEL_31;
  }
  if ( a2 != *((struct CCompositionSurfaceBitmap **)this + 115) )
  {
    v4 = (char *)this + 928;
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
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x859u);
        return v3;
      }
      v8 = *((unsigned int *)v4 + 6);
      v9 = (unsigned int)v22;
      v10 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v9 = v8 + 1;
      v3 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v4 + 5) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v22);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8 * v8) = v22;
        *((_DWORD *)v4 + 6) = v9;
      }
      if ( (v3 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x85Au);
        return v3;
      }
    }
  }
  CWindowNode::ProcessReadyFlipExImages(this);
  while ( *((_DWORD *)this + 238) > 0x10u )
  {
    v12 = (struct CResource **)*((_QWORD *)this + 116);
    CResource::UnRegisterNotifierInternal(this, *v12);
    *v12 = 0LL;
    v13 = *((_DWORD *)this + 238);
    if ( v13 )
    {
      v14 = *((_QWORD *)this + 116);
      v15 = 0LL;
      if ( v13 != 1 )
      {
        do
        {
          v16 = (unsigned int)(v15 + 1);
          *(_QWORD *)(v14 + 8 * v15) = *(_QWORD *)(v14 + 8 * v16);
          v15 = v16;
        }
        while ( (unsigned int)v16 < *((_DWORD *)this + 238) - 1 );
      }
      --*((_DWORD *)this + 238);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
    }
  }
  if ( *((_DWORD *)this + 238) )
  {
    v17 = 0;
LABEL_31:
    CVisual::PropagateFlags(this, 1, v17, 0, 0, 0, 0, 0);
  }
  return v3;
}
