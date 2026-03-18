/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18009B68C
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18009CE6C (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180098DC8 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x180099464 (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxx @ 0x180179FA8 (McTemplateU0xxx.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  DWORD v2; // ebp
  __int64 v4; // rcx
  struct CResource *v5; // rbx
  __int64 i; // r14
  _QWORD **v7; // rdi
  unsigned int v8; // ecx
  struct ISpriteImage **v9; // rax
  struct CResource *v10; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v18; // rcx
  struct CResource *v19; // rbx
  __int64 v20; // rcx
  struct CResource *v21; // rbx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  signed int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-28h]
  struct ISpriteImage *v28; // [rsp+58h] [rbp+10h] BYREF

  v28 = a2;
  v2 = 0;
  if ( !a2 )
    goto LABEL_2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xxx(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 74),
      *((_QWORD *)this + 75),
      (char)a2);
    a2 = v28;
  }
  if ( !a2 )
  {
LABEL_2:
    v4 = *((_QWORD *)this + 98);
    if ( v4 )
    {
      v5 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 152LL))(v4);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 98) + 168LL))(*((_QWORD *)this + 98), this);
      CResource::UnRegisterNotifierInternal(this, v5);
      *((_QWORD *)this + 98) = 0LL;
    }
    else if ( !*((_DWORD *)this + 204) )
    {
      return v2;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 204); i = (unsigned int)(i + 1) )
    {
      v18 = *(_QWORD *)(*((_QWORD *)this + 99) + 8 * i);
      v19 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 152LL))(v18);
      v20 = *(_QWORD *)(*((_QWORD *)this + 99) + 8 * i);
      (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v20 + 168LL))(v20, this);
      CResource::UnRegisterNotifierInternal(this, v19);
    }
    *((_DWORD *)this + 204) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 792, 8u);
    goto LABEL_21;
  }
  if ( a2 == *((struct ISpriteImage **)this + 98) )
    return v2;
  v7 = (_QWORD **)((char *)this + 792);
  v8 = 0;
  v9 = (struct ISpriteImage **)*((_QWORD *)this + 99);
  if ( !*((_DWORD *)this + 204) )
  {
LABEL_11:
    if ( *((_DWORD *)this + 204) > 0x10u )
    {
      do
      {
        v21 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v7 + 152LL))(**v7);
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v7 + 168LL))(**v7, this);
        CResource::UnRegisterNotifierInternal(this, v21);
        v22 = *((_DWORD *)this + 204);
        if ( v22 )
        {
          v23 = (__int64)*v7;
          v24 = 0LL;
          if ( v22 != 1 )
          {
            do
            {
              v25 = (unsigned int)(v24 + 1);
              *(_QWORD *)(v23 + 8 * v24) = *(_QWORD *)(v23 + 8 * v25);
              v24 = v25;
            }
            while ( (unsigned int)v25 < *((_DWORD *)this + 204) - 1 );
          }
          --*((_DWORD *)this + 204);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
        }
      }
      while ( *((_DWORD *)this + 204) > 0x10u );
      a2 = v28;
    }
    v10 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 152LL))(a2);
    v11 = CResource::RegisterNotifier(this, v10);
    v2 = v11;
    if ( v11 < 0 )
    {
      v27 = 1539;
    }
    else
    {
      v12 = *((unsigned int *)this + 204);
      v13 = (unsigned int)v28;
      v14 = v12 + 1;
      if ( (int)v12 + 1 >= (unsigned int)v12 )
        v13 = v12 + 1;
      v2 = v14 < (unsigned int)v12 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v12 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0xB5u);
      }
      else if ( v13 > *((_DWORD *)this + 203) )
      {
        v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 792, 8u, 1, &v28);
        v2 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0xC0u);
      }
      else
      {
        (*v7)[v12] = v28;
        *((_DWORD *)this + 204) = v13;
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x604u);
        return v2;
      }
      v11 = (*(__int64 (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v28 + 160LL))(v28, this);
      v2 = v11;
      if ( v11 >= 0 )
      {
        LOBYTE(v15) = *((_BYTE *)this + 1009);
        (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v28 + 208LL))(v28, v15);
        v16 = *((_DWORD *)this + 225) >> 1;
        LOBYTE(v16) = (*((_DWORD *)this + 225) & 2) != 0;
        (*(void (__fastcall **)(struct ISpriteImage *, __int64, char *))(*(_QWORD *)v28 + 216LL))(
          v28,
          v16,
          (char *)this + 848);
        CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
LABEL_21:
        if ( *((_BYTE *)this + 1010) )
          CWindowNode::ResetComposeTop(this);
        *((_BYTE *)this + 1008) = 0;
        CVisual::PropagateFlags((__int64)this, 5u, 0);
        return v2;
      }
      v27 = 1542;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v27);
    return v2;
  }
  while ( a2 != *v9 )
  {
    ++v8;
    ++v9;
    if ( v8 >= *((_DWORD *)this + 204) )
      goto LABEL_11;
  }
  return v2;
}
