/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180050F6C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18009B68C (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18011A31C (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180179B54 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18018B6E0 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x18018B77C (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCopyCompositorOwnedResources(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Resource; // rax
  __int64 v8; // rdi
  signed int v9; // eax
  __int64 v10; // rbp
  struct CFlipChain *v11; // rdx
  struct CFlipChain *v12; // rdx
  struct CCompositionSurfaceBitmap *v13; // rdx
  __int64 v14; // rbp
  struct CEffect *EffectInternal; // rax
  char v16; // al
  unsigned int v18; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
    return v4;
  Resource = CResourceTable::GetResource(a2, v5, 139LL);
  v8 = Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x78Eu);
    return v4;
  }
  *((_BYTE *)this + 1015) = 1;
  if ( *(_QWORD *)(Resource + 1000) )
  {
    if ( *((_QWORD *)this + 125)
      || (v9 = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 125), v4 = v9, v9 >= 0) )
    {
      v9 = CDxAccumulationContext::CopyDxClipShape(
             *((CDxAccumulationContext **)this + 125),
             *(struct CDxAccumulationContext **)(v8 + 1000));
      v4 = v9;
      if ( v9 >= 0 )
        goto LABEL_4;
      v18 = 1958;
    }
    else
    {
      v18 = 1952;
    }
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v18);
    return v4;
  }
LABEL_4:
  v9 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(v8 + 784));
  v4 = v9;
  if ( v9 < 0 )
  {
    v18 = 1966;
    goto LABEL_37;
  }
  v10 = 0LL;
  if ( *(_DWORD *)(v8 + 816) )
  {
    while ( 1 )
    {
      v9 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v8 + 792) + 8 * v10));
      v4 = v9;
      if ( v9 < 0 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(v8 + 816) )
        goto LABEL_6;
    }
    v18 = 1970;
    goto LABEL_37;
  }
LABEL_6:
  v11 = *(struct CFlipChain **)(v8 + 928);
  if ( v11 )
  {
    v9 = CWindowNode::SetDxImage(this, v11);
    v4 = v9;
    if ( v9 < 0 )
    {
      v18 = 1975;
      goto LABEL_37;
    }
  }
  v12 = *(struct CFlipChain **)(v8 + 920);
  if ( v12 )
  {
    v9 = CWindowNode::SetDxImage(this, v12);
    v4 = v9;
    if ( v9 < 0 )
    {
      v18 = 1980;
      goto LABEL_37;
    }
  }
  v13 = *(struct CCompositionSurfaceBitmap **)(v8 + 944);
  if ( v13 )
  {
    v9 = CWindowNode::SetFlipExBitmap(this, v13);
    v4 = v9;
    if ( v9 < 0 )
    {
      v18 = 1985;
      goto LABEL_37;
    }
  }
  v14 = 0LL;
  if ( *(_DWORD *)(v8 + 976) )
  {
    while ( 1 )
    {
      v9 = CWindowNode::SetFlipExBitmap(this, *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v8 + 952) + 8 * v14));
      v4 = v9;
      if ( v9 < 0 )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(v8 + 976) )
        goto LABEL_10;
    }
    v18 = 1990;
    goto LABEL_37;
  }
LABEL_10:
  EffectInternal = CVisual::GetEffectInternal((CVisual *)v8);
  v9 = CVisual::SetEffect(this, EffectInternal);
  v4 = v9;
  if ( v9 < 0 )
  {
    v18 = 1993;
    goto LABEL_37;
  }
  *((_BYTE *)this + 1014) = *(_BYTE *)(v8 + 1014);
  v16 = *(_BYTE *)(v8 + 1013);
  *((_BYTE *)this + 1013) = v16;
  if ( v16 )
    ++*(_DWORD *)(*((_QWORD *)this + 2) + 256LL);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v4;
}
