/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x18008FF00
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801AA0C8 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180186ED0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExImages(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // bp
  __int64 v5; // rbx
  struct CResource *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned int v10; // ebx
  unsigned int v11; // ebx

  v1 = *((_DWORD *)this + 224);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      if ( CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 109)
                                                                                         + 8 * v5)
                                                                             + 64LL)) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    v6 = (struct CResource *)*((_QWORD *)this + 108);
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal(this, v6);
      *((_QWORD *)this + 108) = 0LL;
    }
    v2 = 1;
    *((_QWORD *)this + 108) = *(_QWORD *)(*((_QWORD *)this + 109) + 8 * v5);
    if ( v1 != 1 )
    {
      v7 = 0LL;
      v8 = (unsigned int)v5;
      do
      {
        v9 = *((_QWORD *)this + 109);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v7 + v9));
        *(_QWORD *)(v7 + v9) = 0LL;
        v7 += 8LL;
        --v8;
      }
      while ( v8 );
    }
    if ( v1 )
    {
      v10 = *((_DWORD *)this + 224);
      if ( v1 > v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x23Du);
      }
      else
      {
        v11 = v10 - v1;
        if ( v11 )
          memmove(*((void **)this + 109), (const void *)(*((_QWORD *)this + 109) + 8LL * v1), 8LL * v11);
        *((_DWORD *)this + 224) = v11;
      }
    }
  }
  return v2;
}
