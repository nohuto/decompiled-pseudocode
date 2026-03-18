/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180052CE8
 * Callers:
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x180053D74 (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180053F34 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180050074 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x1800505DC (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxx @ 0x1801459E8 (Template_xxx.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rcx
  struct CResource *v5; // rbx
  __int64 i; // r14
  _QWORD **v7; // rdi
  unsigned int v8; // ecx
  struct ISpriteImage **v9; // rax
  struct CResource *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // rcx
  struct CResource *v18; // rbx
  __int64 v19; // rcx
  struct CResource *v20; // rbx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-38h]
  struct ISpriteImage *v27; // [rsp+68h] [rbp+10h] BYREF

  v27 = a2;
  v2 = 0;
  if ( !a2 )
    goto LABEL_2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xxx(
      (_DWORD)this,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 72),
      *((_QWORD *)this + 73),
      (char)a2);
    a2 = v27;
  }
  if ( !a2 )
  {
LABEL_2:
    v4 = *((_QWORD *)this + 95);
    if ( v4 )
    {
      v5 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 95) + 160LL))(*((_QWORD *)this + 95), this);
      CResource::UnRegisterNotifierInternal(this, v5);
      *((_QWORD *)this + 95) = 0LL;
    }
    else if ( !*((_DWORD *)this + 198) )
    {
      return v2;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 198); i = (unsigned int)(i + 1) )
    {
      v17 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * i);
      v18 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 144LL))(v17);
      v19 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * i);
      (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v19 + 160LL))(v19, this);
      CResource::UnRegisterNotifierInternal(this, v18);
    }
    *((_DWORD *)this + 198) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 768, 8LL);
    goto LABEL_23;
  }
  if ( a2 == *((struct ISpriteImage **)this + 95) )
    return v2;
  v7 = (_QWORD **)((char *)this + 768);
  v8 = 0;
  v9 = (struct ISpriteImage **)*((_QWORD *)this + 96);
  if ( !*((_DWORD *)this + 198) )
  {
LABEL_13:
    if ( *((_DWORD *)this + 198) > 0x10u )
    {
      do
      {
        v20 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v7 + 144LL))(**v7);
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v7 + 160LL))(**v7, this);
        CResource::UnRegisterNotifierInternal(this, v20);
        v21 = *((_DWORD *)this + 198);
        if ( v21 )
        {
          v22 = (__int64)*v7;
          v23 = 0LL;
          if ( v21 != 1 )
          {
            do
            {
              v24 = (unsigned int)(v23 + 1);
              *(_QWORD *)(v22 + 8 * v23) = *(_QWORD *)(v22 + 8 * v24);
              v23 = v24;
            }
            while ( (unsigned int)v24 < *((_DWORD *)this + 198) - 1 );
          }
          --*((_DWORD *)this + 198);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
        }
      }
      while ( *((_DWORD *)this + 198) > 0x10u );
      a2 = v27;
    }
    v10 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 144LL))(a2);
    v11 = CResource::RegisterNotifier(this, v10);
    v2 = v11;
    if ( v11 < 0 )
    {
      v26 = 1560;
    }
    else
    {
      v12 = *((unsigned int *)this + 198);
      v13 = (unsigned int)v27;
      v14 = v12 + 1;
      if ( (int)v12 + 1 >= (unsigned int)v12 )
        v13 = v12 + 1;
      v2 = v14 < (unsigned int)v12 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v12 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v13 > *((_DWORD *)this + 197) )
      {
        v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 768, 8LL, 1LL, &v27);
        v2 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
      }
      else
      {
        (*v7)[v12] = v27;
        *((_DWORD *)this + 198) = v13;
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x619u);
        return v2;
      }
      v11 = (*(__int64 (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v27 + 152LL))(v27, this);
      v2 = v11;
      if ( v11 >= 0 )
      {
        LOBYTE(v15) = *((_BYTE *)this + 985);
        (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v27 + 200LL))(v27, v15);
        CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
LABEL_23:
        if ( *((_BYTE *)this + 986) )
          CWindowNode::ResetComposeTop(this);
        *((_BYTE *)this + 984) = 0;
        CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
        return v2;
      }
      v26 = 1563;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v26);
    return v2;
  }
  while ( a2 != *v9 )
  {
    ++v8;
    ++v9;
    if ( v8 >= *((_DWORD *)this + 198) )
      goto LABEL_13;
  }
  return v2;
}
