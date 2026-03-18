/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180050B88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004CB4C (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004CB9C (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18004D0A0 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004D6FC (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x1800C6848 (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  bool v6; // bp
  struct CResource *Resource; // r14
  struct TransformParentData *TransformParentDataInternal; // rax
  struct CResource *v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  struct TransformParentData *v14; // rbx
  int v15; // eax
  bool v16; // zf
  char v18; // [rsp+80h] [rbp+18h]
  struct TransformParentData *v19; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  Resource = 0LL;
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x9Au)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x905u);
  }
  else
  {
    v18 = *((_DWORD *)a3 + 3) != 0;
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
    v11 = 0LL;
    v19 = TransformParentDataInternal;
    v12 = 0LL;
    v13 = 0LL;
    v14 = TransformParentDataInternal;
    if ( TransformParentDataInternal )
    {
      v11 = *(struct CResource **)TransformParentDataInternal;
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 152LL))(*(_QWORD *)TransformParentDataInternal);
    }
    if ( Resource == v11 )
    {
      v13 = v12;
    }
    else
    {
      if ( Resource )
      {
        v15 = CResource::RegisterNotifier(this, Resource);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x919u);
          return v4;
        }
        if ( !v14 )
        {
          v14 = (struct TransformParentData *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
          if ( v14 )
          {
            *(_QWORD *)v14 = 0LL;
            *((_QWORD *)v14 + 1) = 0LL;
          }
          else
          {
            v14 = 0LL;
          }
          if ( !v14 )
          {
            v4 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x91Eu);
            CResource::UnRegisterNotifierInternal(this, Resource);
            return v4;
          }
          CVisual::SetTransformParentDataInternal(this, v14);
        }
        v13 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 152LL))(Resource);
        *(_QWORD *)v14 = Resource;
      }
      else if ( v14 )
      {
        SAFE_DELETE<TransformParentData>(&v19);
        CVisual::SetTransformParentDataInternal(this, 0LL);
        v14 = v19;
      }
      CResource::UnRegisterNotifierInternal(this, v11);
      v16 = v13 == v12;
      if ( v13 != v12 )
      {
        CVisual::ManageTransformParentChildList(this, v14);
        v16 = v13 == v12;
      }
      v6 = !v16;
    }
    if ( v14 )
    {
      if ( *((_BYTE *)v14 + 8) != v18 )
      {
        *((_BYTE *)v14 + 8) = v18;
        if ( v13 )
          v6 = 1;
      }
    }
    if ( v6 )
    {
      CVisual::PropagateFlags((__int64)this, 5u, 0);
      CVisual::OnOuterTransformChanged(this);
    }
  }
  return v4;
}
