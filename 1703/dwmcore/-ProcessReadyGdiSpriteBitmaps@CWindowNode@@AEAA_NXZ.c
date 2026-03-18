/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180050074
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180052CE8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DisplayBufferReady@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800548F0 (-DisplayBufferReady@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // r14
  __int64 v5; // rbp
  CGdiSpriteBitmap *v6; // rcx
  bool (__fastcall *v7)(CGdiSpriteBitmap *__hidden); // rax
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // r15
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  struct CResource *v13; // rbx
  __int64 v14; // r12
  struct CResource *v15; // rbx

  v1 = *((_DWORD *)this + 198);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      v6 = *(CGdiSpriteBitmap **)(*((_QWORD *)this + 96) + 8 * v5);
      v7 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v6 + 168LL);
      v8 = v7 == CGdiSpriteBitmap::DisplayBufferReady
         ? CGdiSpriteBitmap::DisplayBufferReady(v6)
         : ((__int64 (*)(void))v7)();
      if ( v8 || *((_BYTE *)this + 986) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    v9 = *((_QWORD *)this + 95);
    if ( v9 )
    {
      v13 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 144LL))(v9);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 95) + 160LL))(*((_QWORD *)this + 95), this);
      CResource::UnRegisterNotifierInternal(this, v13);
    }
    v2 = 1;
    v10 = (unsigned int)v5;
    *((_QWORD *)this + 95) = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * v5);
    if ( v1 != 1 )
    {
      v14 = 0LL;
      do
      {
        v15 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + *((_QWORD *)this + 96)) + 144LL))(*(_QWORD *)(v14 + *((_QWORD *)this + 96)));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(v14 + *((_QWORD *)this + 96)) + 160LL))(
          *(_QWORD *)(v14 + *((_QWORD *)this + 96)),
          this);
        CResource::UnRegisterNotifierInternal(this, v15);
        *(_QWORD *)(v14 + *((_QWORD *)this + 96)) = 0LL;
        v14 += 8LL;
        --v10;
      }
      while ( v10 );
    }
    if ( v1 )
    {
      v11 = *((_DWORD *)this + 198);
      if ( v1 > v11 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x234u);
      }
      else
      {
        v12 = v11 - v1;
        if ( v12 )
          memmove(*((void **)this + 96), (const void *)(*((_QWORD *)this + 96) + 8LL * v1), 8LL * v12);
        *((_DWORD *)this + 198) = v12;
      }
    }
  }
  return v2;
}
