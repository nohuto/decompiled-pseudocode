/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180053F34
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180052CE8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x1800583C4 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180085068 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18012A668 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180162CDC (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18018109C (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x180181150 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCopyCompositorOwnedResources(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Resource; // rax
  struct CResourceTable *v8; // rdx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rbp
  struct CFlipChain *v12; // rdx
  struct CFlipChain *v13; // rdx
  struct CCompositionSurfaceBitmap *v14; // rdx
  __int64 v15; // rbp
  struct CEffect *EffectInternal; // rax
  char v17; // al
  __int64 v19; // r9
  CRgnGeometry *v20; // rcx
  unsigned int v21; // eax
  const void *v22; // r9
  unsigned int v23; // [rsp+20h] [rbp-28h]
  int v24; // [rsp+30h] [rbp-18h] BYREF
  __int64 v25; // [rsp+34h] [rbp-14h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 )
  {
    Resource = CResourceTable::GetResource(a2, v5, 34LL);
    v9 = Resource;
    if ( Resource )
    {
      *((_BYTE *)this + 991) = 1;
      if ( *(_QWORD *)(Resource + 816) )
      {
        if ( !*((_QWORD *)this + 102) )
          RaiseFailFastException(0LL, 0LL, 0);
        v19 = *((_QWORD *)this + 102);
        v20 = *(CRgnGeometry **)(v9 + 816);
        v25 = 0LL;
        v24 = 380;
        v21 = *(_DWORD *)(v19 + 104);
        v22 = *(const void **)(v19 + 112);
        HIDWORD(v25) = v21;
        v10 = CRgnGeometry::ProcessUpdate(v20, v8, (const struct MILCMD_RGNGEOMETRY *)&v24, v22, v21);
        v4 = v10;
        if ( v10 < 0 )
        {
          v23 = 1969;
LABEL_42:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v23);
          return v4;
        }
      }
      if ( *(_QWORD *)(v9 + 976) )
      {
        if ( !*((_QWORD *)this + 122) )
        {
          v10 = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 122);
          v4 = v10;
          if ( v10 < 0 )
          {
            v23 = 1982;
            goto LABEL_42;
          }
        }
        v10 = CDxAccumulationContext::CopyDxClipShape(
                *((CDxAccumulationContext **)this + 122),
                *(struct CDxAccumulationContext **)(v9 + 976));
        v4 = v10;
        if ( v10 < 0 )
        {
          v23 = 1988;
          goto LABEL_42;
        }
      }
      v10 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(v9 + 760));
      v4 = v10;
      if ( v10 < 0 )
      {
        v23 = 1996;
        goto LABEL_42;
      }
      v11 = 0LL;
      if ( *(_DWORD *)(v9 + 792) )
      {
        while ( 1 )
        {
          v10 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v9 + 768) + 8 * v11));
          v4 = v10;
          if ( v10 < 0 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *(_DWORD *)(v9 + 792) )
            goto LABEL_7;
        }
        v23 = 2000;
        goto LABEL_42;
      }
LABEL_7:
      v12 = *(struct CFlipChain **)(v9 + 904);
      if ( v12 )
      {
        v10 = CWindowNode::SetDxImage(this, v12);
        v4 = v10;
        if ( v10 < 0 )
        {
          v23 = 2005;
          goto LABEL_42;
        }
      }
      v13 = *(struct CFlipChain **)(v9 + 896);
      if ( v13 )
      {
        v10 = CWindowNode::SetDxImage(this, v13);
        v4 = v10;
        if ( v10 < 0 )
        {
          v23 = 2010;
          goto LABEL_42;
        }
      }
      v14 = *(struct CCompositionSurfaceBitmap **)(v9 + 920);
      if ( v14 )
      {
        v10 = CWindowNode::SetFlipExBitmap(this, v14);
        v4 = v10;
        if ( v10 < 0 )
        {
          v23 = 2015;
          goto LABEL_42;
        }
      }
      v15 = 0LL;
      if ( *(_DWORD *)(v9 + 952) )
      {
        while ( 1 )
        {
          v10 = CWindowNode::SetFlipExBitmap(
                  this,
                  *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v9 + 928) + 8 * v15));
          v4 = v10;
          if ( v10 < 0 )
            break;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= *(_DWORD *)(v9 + 952) )
            goto LABEL_11;
        }
        v23 = 2020;
        goto LABEL_42;
      }
LABEL_11:
      EffectInternal = CVisual::GetEffectInternal((CVisual *)v9);
      v10 = CVisual::SetEffect(this, EffectInternal);
      v4 = v10;
      if ( v10 < 0 )
      {
        v23 = 2023;
        goto LABEL_42;
      }
      *((_BYTE *)this + 990) = *(_BYTE *)(v9 + 990);
      v17 = *(_BYTE *)(v9 + 989);
      *((_BYTE *)this + 989) = v17;
      if ( v17 )
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x797u);
    }
  }
  return v4;
}
