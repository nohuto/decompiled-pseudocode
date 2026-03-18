/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180098DC8
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18009B68C (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  struct CResource *v11; // rbx
  __int64 v12; // r12
  struct CResource *v13; // rbx

  v1 = *((_DWORD *)this + 204);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      v6 = *(_QWORD *)(*((_QWORD *)this + 99) + 8 * v5);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) || *((_BYTE *)this + 1010) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    v7 = *((_QWORD *)this + 98);
    if ( v7 )
    {
      v11 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 152LL))(v7);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 98) + 168LL))(*((_QWORD *)this + 98), this);
      CResource::UnRegisterNotifierInternal(this, v11);
    }
    v2 = 1;
    v8 = (unsigned int)v5;
    *((_QWORD *)this + 98) = *(_QWORD *)(*((_QWORD *)this + 99) + 8 * v5);
    if ( v1 != 1 )
    {
      v12 = 0LL;
      do
      {
        v13 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + *((_QWORD *)this + 99)) + 152LL))(*(_QWORD *)(v12 + *((_QWORD *)this + 99)));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(v12 + *((_QWORD *)this + 99)) + 168LL))(
          *(_QWORD *)(v12 + *((_QWORD *)this + 99)),
          this);
        CResource::UnRegisterNotifierInternal(this, v13);
        *(_QWORD *)(v12 + *((_QWORD *)this + 99)) = 0LL;
        v12 += 8LL;
        --v8;
      }
      while ( v8 );
    }
    if ( v1 )
    {
      v9 = *((_DWORD *)this + 204);
      if ( v1 > v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x234u);
      }
      else
      {
        v10 = v9 - v1;
        if ( v10 )
          memmove(*((void **)this + 99), (const void *)(*((_QWORD *)this + 99) + 8LL * v1), 8LL * v10);
        *((_DWORD *)this + 204) = v10;
      }
    }
  }
  return v2;
}
