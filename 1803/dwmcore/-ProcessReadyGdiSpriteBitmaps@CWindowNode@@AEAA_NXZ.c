/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18008FF48
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18008F90C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180092924 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800947F0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // r14
  CGdiSpriteBitmap *v4; // rcx
  __int64 (__fastcall *v5)(CGdiSpriteBitmap *__hidden, struct IBitmapRealization **); // rax
  struct IBitmapRealization *v6; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  struct CResource *v13; // rbx
  __int64 v14; // r15
  struct CResource *v15; // rbx
  struct IBitmapRealization *v16; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 188);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v8 = v1 - 1;
      v9 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * v8);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 176LL))(v9) || *((_BYTE *)this + 914) )
        break;
      --v1;
      if ( !(_DWORD)v8 )
        goto LABEL_2;
    }
    v10 = *((_QWORD *)this + 90);
    if ( v10 )
    {
      v13 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 152LL))(v10);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 90) + 168LL))(*((_QWORD *)this + 90), this);
      CResource::UnRegisterNotifierInternal(this, v13);
    }
    v2 = 1;
    *((_QWORD *)this + 90) = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * v8);
    if ( v1 != 1 )
    {
      v14 = 0LL;
      do
      {
        v15 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + *((_QWORD *)this + 91)) + 152LL))(*(_QWORD *)(v14 + *((_QWORD *)this + 91)));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(v14 + *((_QWORD *)this + 91)) + 168LL))(
          *(_QWORD *)(v14 + *((_QWORD *)this + 91)),
          this);
        CResource::UnRegisterNotifierInternal(this, v15);
        *(_QWORD *)(v14 + *((_QWORD *)this + 91)) = 0LL;
        v14 += 8LL;
        --v8;
      }
      while ( v8 );
    }
    if ( v1 )
    {
      v11 = *((_DWORD *)this + 188);
      if ( v1 > v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x23Du);
      }
      else
      {
        v12 = v11 - v1;
        if ( v12 )
          memmove(*((void **)this + 91), (const void *)(*((_QWORD *)this + 91) + 8LL * v1), 8LL * v12);
        *((_DWORD *)this + 188) = v12;
      }
    }
  }
LABEL_2:
  v4 = (CGdiSpriteBitmap *)*((_QWORD *)this + 90);
  if ( v4 )
  {
    v16 = 0LL;
    v5 = *(__int64 (__fastcall **)(CGdiSpriteBitmap *__hidden, struct IBitmapRealization **))(*(_QWORD *)v4 + 80LL);
    if ( v5 == CGdiSpriteBitmap::GetCurrentRenderingRealization )
      CGdiSpriteBitmap::GetCurrentRenderingRealization(v4, &v16);
    else
      v5(v4, &v16);
    v6 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return v2;
}
