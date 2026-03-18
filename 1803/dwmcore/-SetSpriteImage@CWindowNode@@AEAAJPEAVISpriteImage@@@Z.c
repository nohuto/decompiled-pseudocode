/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180092924
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800930C0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x180093728 (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18008FF48 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x18009033C (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxx @ 0x1801AA4A4 (McTemplateU0xxx.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  unsigned int v2; // ebp
  _QWORD **v4; // rdi
  unsigned int v5; // ecx
  struct ISpriteImage **v6; // rax
  struct CResource *v7; // rax
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rcx
  int v15; // eax
  struct CResource *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rcx
  struct CResource *v19; // rbx
  __int64 v20; // rcx
  struct CResource *v21; // rbx
  int v22; // ecx
  unsigned int v23; // r8d
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-28h]
  struct ISpriteImage *v28; // [rsp+58h] [rbp+10h] BYREF

  v28 = a2;
  v2 = 0;
  if ( !a2 )
    goto LABEL_19;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xxx(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 75),
      *((_QWORD *)this + 76),
      (char)a2);
    a2 = v28;
  }
  if ( !a2 )
  {
LABEL_19:
    v14 = *((_QWORD *)this + 90);
    if ( v14 )
    {
      v16 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 90) + 168LL))(*((_QWORD *)this + 90), this);
      CResource::UnRegisterNotifierInternal(this, v16);
      *((_QWORD *)this + 90) = 0LL;
      v15 = *((_DWORD *)this + 188);
    }
    else
    {
      v15 = *((_DWORD *)this + 188);
      if ( !v15 )
        return v2;
    }
    v17 = 0LL;
    if ( v15 )
    {
      do
      {
        v18 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * v17);
        v19 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 152LL))(v18);
        v20 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * v17);
        (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v20 + 168LL))(v20, this);
        CResource::UnRegisterNotifierInternal(this, v19);
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < *((_DWORD *)this + 188) );
    }
    *((_DWORD *)this + 188) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 728, 8u);
    goto LABEL_15;
  }
  if ( a2 == *((struct ISpriteImage **)this + 90) )
    return v2;
  v4 = (_QWORD **)((char *)this + 728);
  v5 = 0;
  v6 = (struct ISpriteImage **)*((_QWORD *)this + 91);
  if ( !*((_DWORD *)this + 188) )
  {
LABEL_7:
    if ( *((_DWORD *)this + 188) > 0x10u )
    {
      do
      {
        v21 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v4 + 152LL))(**v4);
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v4 + 168LL))(**v4, this);
        CResource::UnRegisterNotifierInternal(this, v21);
        v22 = *((_DWORD *)this + 188);
        v23 = 0;
        if ( v22 )
        {
          v24 = (__int64)*v4;
          if ( v22 != 1 )
          {
            do
            {
              v25 = v23++;
              *(_QWORD *)(v24 + 8 * v25) = *(_QWORD *)(v24 + 8LL * v23);
              v22 = *((_DWORD *)this + 188);
            }
            while ( v23 < v22 - 1 );
          }
          *((_DWORD *)this + 188) = v22 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
        }
      }
      while ( *((_DWORD *)this + 188) > 0x10u );
      a2 = v28;
    }
    v7 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 152LL))(a2);
    v8 = CResource::RegisterNotifier(this, v7);
    v2 = v8;
    if ( v8 < 0 )
    {
      v27 = 1027;
    }
    else
    {
      v9 = *((_DWORD *)this + 188);
      v10 = v9 + 1;
      v2 = v9 + 1 < v9 ? 0x80070216 : 0;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)this + 187) )
      {
        v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 728, 8u, 1, &v28);
        v2 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
      }
      else
      {
        (*v4)[v9] = v28;
        *((_DWORD *)this + 188) = v10;
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x404u);
        return v2;
      }
      v8 = (*(__int64 (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v28 + 160LL))(v28, this);
      v2 = v8;
      if ( v8 >= 0 )
      {
        LOBYTE(v11) = *((_BYTE *)this + 913);
        (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v28 + 208LL))(v28, v11);
        v12 = *((_DWORD *)this + 209) >> 1;
        LOBYTE(v12) = (*((_DWORD *)this + 209) & 2) != 0;
        (*(void (__fastcall **)(struct ISpriteImage *, __int64, char *))(*(_QWORD *)v28 + 216LL))(
          v28,
          v12,
          (char *)this + 784);
        CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
LABEL_15:
        if ( *((_BYTE *)this + 914) )
          CWindowNode::ResetComposeTop(this);
        *((_BYTE *)this + 912) = 0;
        CVisual::PropagateFlags((__int64)this, 5u, 0);
        return v2;
      }
      v27 = 1030;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v27);
    return v2;
  }
  while ( a2 != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 >= *((_DWORD *)this + 188) )
      goto LABEL_7;
  }
  return v2;
}
