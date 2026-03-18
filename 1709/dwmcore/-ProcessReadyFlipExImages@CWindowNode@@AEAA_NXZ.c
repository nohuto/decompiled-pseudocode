/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x180098D80
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180179B54 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18015DF20 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExImages(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // bp
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  void *v11; // rcx

  v1 = *((_DWORD *)this + 244);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      if ( CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 119)
                                                                                         + 8 * v5)
                                                                             + 64LL)) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    if ( *((_QWORD *)this + 118) )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 118));
      *((_QWORD *)this + 118) = 0LL;
    }
    v2 = 1;
    *((_QWORD *)this + 118) = *(_QWORD *)(*((_QWORD *)this + 119) + 8 * v5);
    if ( v1 != 1 )
    {
      v6 = 0LL;
      v7 = (unsigned int)v5;
      do
      {
        v8 = *((_QWORD *)this + 119);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v6 + v8));
        *(_QWORD *)(v6 + v8) = 0LL;
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
    if ( v1 )
    {
      v9 = *((_DWORD *)this + 244);
      if ( v1 > v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x234u);
      }
      else
      {
        v10 = v9 - v1;
        if ( v10 )
          memmove(*((void **)this + 119), (const void *)(*((_QWORD *)this + 119) + 8LL * v1), 8LL * v10);
        *((_DWORD *)this + 244) = v10;
      }
    }
    v11 = (void *)*((_QWORD *)this + 125);
    if ( v11 )
    {
      WPF::ProcessHeapImpl::Free(v11);
      *((_QWORD *)this + 125) = 0LL;
    }
  }
  return v2;
}
