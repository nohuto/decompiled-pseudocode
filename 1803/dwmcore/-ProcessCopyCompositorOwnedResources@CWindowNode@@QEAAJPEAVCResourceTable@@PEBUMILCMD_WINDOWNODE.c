/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800930C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004FCD0 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180092924 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801AA0C8 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCopyCompositorOwnedResources(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbp
  struct CCompositionSurfaceBitmap *v11; // rdx
  __int64 v12; // rbp
  struct CEffect *EffectInternal; // rax
  char v14; // al
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x9Eu);
    v8 = Resource;
    if ( Resource )
    {
      *((_BYTE *)this + 919) = 1;
      v9 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(Resource + 720));
      v4 = v9;
      if ( v9 < 0 )
      {
        v16 = 1348;
        goto LABEL_25;
      }
      v10 = 0LL;
      if ( *(_DWORD *)(v8 + 752) )
      {
        while ( 1 )
        {
          v9 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v8 + 728) + 8 * v10));
          v4 = v9;
          if ( v9 < 0 )
            break;
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *(_DWORD *)(v8 + 752) )
            goto LABEL_5;
        }
        v16 = 1352;
        goto LABEL_25;
      }
LABEL_5:
      v11 = *(struct CCompositionSurfaceBitmap **)(v8 + 864);
      if ( v11 )
      {
        v9 = CWindowNode::SetFlipExBitmap(this, v11);
        v4 = v9;
        if ( v9 < 0 )
        {
          v16 = 1357;
LABEL_25:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v16);
          return v4;
        }
      }
      v12 = 0LL;
      if ( *(_DWORD *)(v8 + 896) )
      {
        while ( 1 )
        {
          v9 = CWindowNode::SetFlipExBitmap(
                 this,
                 *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v8 + 872) + 8 * v12));
          v4 = v9;
          if ( v9 < 0 )
            break;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)(v8 + 896) )
            goto LABEL_7;
        }
        v16 = 1362;
        goto LABEL_25;
      }
LABEL_7:
      EffectInternal = CVisual::GetEffectInternal((CVisual *)v8);
      v9 = CVisual::SetEffect(this, EffectInternal);
      v4 = v9;
      if ( v9 < 0 )
      {
        v16 = 1365;
        goto LABEL_25;
      }
      *((_BYTE *)this + 918) = *(_BYTE *)(v8 + 918);
      v14 = *(_BYTE *)(v8 + 917);
      *((_BYTE *)this + 917) = v14;
      if ( v14 )
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x537u);
    }
  }
  return v4;
}
