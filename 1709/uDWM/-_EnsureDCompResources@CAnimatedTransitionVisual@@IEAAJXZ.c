/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008BA8C
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E9E4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18008A3F0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180011E7C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rsi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct CVisual ***v10; // r14
  int v11; // eax
  int v12; // eax
  int inserted; // eax
  int v14; // eax

  v1 = 0;
  v2 = 0LL;
  if ( !*((_QWORD *)this + 84) )
  {
    v4 = CResource::Create(0xAu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 84);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5E9u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v5 = CResource::Create(0x20u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 85);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5EEu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v6 = CResource::Create(0x25u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 86);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x5F3u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 87) )
  {
    v7 = CResource::Create(0x1Fu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 87);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5F8u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 88) )
  {
    v8 = CResource::Create(0x24u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 88);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5FDu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 89) )
  {
    v9 = CResource::Create(0x1Au, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 89);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x602u);
      return v1;
    }
  }
  v10 = (struct CVisual ***)((char *)this + 728);
  if ( *((_QWORD *)this + 91) )
    return v1;
  v11 = CRenderDataVisual::Create(
          *(struct IDwmChannel **)(*((_QWORD *)this + 3) + 16LL),
          (struct CRenderDataVisual **)this + 91);
  v1 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x607u);
    return v1;
  }
  if ( !*((_BYTE *)this + 975) )
    goto LABEL_29;
  v2 = (volatile signed __int32 *)**((_QWORD **)this + 7);
  if ( !v2 )
    goto LABEL_29;
  _InterlockedIncrement(v2 + 2);
  v12 = VisualCollection::Remove((CAnimatedTransitionVisual *)((char *)this + 40), (struct CVisual *)v2);
  v1 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x60Fu);
    goto LABEL_31;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*v10 + 4), (struct CVisual **)v2, 0LL, 0, 1);
  v1 = inserted;
  if ( inserted >= 0 )
  {
LABEL_29:
    v14 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), *v10, 0LL, 0, 1);
    v1 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x614u);
    goto LABEL_31;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x610u);
LABEL_31:
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v1;
}
