/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18009347C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002ADA0 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  unsigned int v10; // edx
  __int64 Resource; // rax
  char (__fastcall *v13)(__int64, int); // rax
  char v14; // al
  int v15; // eax
  __int64 v16; // rcx
  __int64 i; // r15
  __int64 v18; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  v8 = *((_DWORD *)a3 + 2) != 0;
  v9 = 0;
  if ( v8 != *((_BYTE *)this + 913) )
  {
    *((_BYTE *)this + 913) = v8;
    v9 = 1;
    v16 = *((_QWORD *)this + 90);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 208LL))(v16);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 188); i = (unsigned int)(i + 1) )
    {
      LOBYTE(a2) = *((_BYTE *)this + 913);
      v18 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * i);
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v18 + 208LL))(v18, a2);
    }
  }
  v10 = *((_DWORD *)a3 + 3);
  if ( !v10
    || (Resource = CResourceTable::GetResource((__int64)v5, v10, 0x3Cu), (v4 = (struct CResource *)Resource) != 0LL)
    && ((v13 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)Resource + 48LL), v13 != CRgnGeometry::IsOfType)
      ? (v14 = v13((__int64)v4, 121))
      : (v14 = CRgnGeometry::IsOfType((__int64)v4, 121)),
        v14) )
  {
    if ( v4 != *((struct CResource **)this + 97) )
    {
      v15 = CResource::RegisterNotifier(this, v4);
      v3 = v15;
      if ( v15 >= 0 )
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 97));
        *((_QWORD *)this + 97) = v4;
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x46Fu);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x469u);
  }
  if ( v9 )
  {
LABEL_13:
    *((_BYTE *)this + 912) = 0;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return v3;
}
