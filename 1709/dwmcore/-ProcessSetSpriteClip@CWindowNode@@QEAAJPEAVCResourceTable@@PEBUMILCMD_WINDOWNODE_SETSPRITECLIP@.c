/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18009CBC4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096BB0 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v3; // esi
  struct CResource *v4; // rdi
  struct CResourceTable *v5; // r12
  char v8; // dl
  char v9; // bp
  __int64 v10; // rdx
  __int64 Resource; // rax
  bool (__fastcall *v13)(__int64, int); // rax
  bool v14; // al
  signed int v15; // eax
  __int64 v16; // rcx
  __int64 i; // r15
  __int64 v18; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  v8 = *((_DWORD *)a3 + 2) != 0;
  v9 = 0;
  if ( v8 != *((_BYTE *)this + 1009) )
  {
    *((_BYTE *)this + 1009) = v8;
    v9 = 1;
    v16 = *((_QWORD *)this + 98);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 208LL))(v16);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 204); i = (unsigned int)(i + 1) )
    {
      LOBYTE(a2) = *((_BYTE *)this + 1009);
      v18 = *(_QWORD *)(*((_QWORD *)this + 99) + 8 * i);
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v18 + 208LL))(v18, a2);
    }
  }
  v10 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v10
    || (Resource = CResourceTable::GetResource(v5, v10, 55LL), (v4 = (struct CResource *)Resource) != 0LL)
    && ((v13 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)Resource + 48LL), v13 != CRgnGeometry::IsOfType)
      ? (v14 = v13((__int64)v4, 109))
      : (v14 = CRgnGeometry::IsOfType((__int64)v4, 109)),
        v14) )
  {
    if ( v4 != *((struct CResource **)this + 105) )
    {
      v15 = CResource::RegisterNotifier(this, v4);
      v3 = v15;
      if ( v15 >= 0 )
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 105));
        *((_QWORD *)this + 105) = v4;
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x6C6u);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x6C0u);
  }
  if ( v9 )
  {
LABEL_13:
    *((_BYTE *)this + 1008) = 0;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return v3;
}
