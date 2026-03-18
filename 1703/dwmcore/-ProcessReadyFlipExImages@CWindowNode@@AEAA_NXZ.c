/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x18012A338
 * Callers:
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180162CDC (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801643B0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExImages(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // bp
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  void *v10; // rcx

  v1 = *((_DWORD *)this + 238);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = v1 - 1;
      if ( CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 116)
                                                                                         + 8 * v4)
                                                                             + 64LL)) )
        break;
      --v1;
      if ( !(_DWORD)v4 )
        return v2;
    }
    if ( *((_QWORD *)this + 115) )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 115));
      *((_QWORD *)this + 115) = 0LL;
    }
    v2 = 1;
    v5 = (unsigned int)v4;
    *((_QWORD *)this + 115) = *(_QWORD *)(*((_QWORD *)this + 116) + 8 * v4);
    if ( v1 != 1 )
    {
      v6 = 0LL;
      do
      {
        v7 = *((_QWORD *)this + 116);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v6 + v7));
        *(_QWORD *)(v6 + v7) = 0LL;
        v6 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    if ( v1 )
    {
      v8 = *((_DWORD *)this + 238);
      if ( v1 > v8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x234u);
      }
      else
      {
        v9 = v8 - v1;
        if ( v9 )
          memmove(*((void **)this + 116), (const void *)(*((_QWORD *)this + 116) + 8LL * v1), 8LL * v9);
        *((_DWORD *)this + 238) = v9;
      }
    }
    v10 = (void *)*((_QWORD *)this + 122);
    if ( v10 )
    {
      WPF::ProcessHeapImpl::Free(v10);
      *((_QWORD *)this + 122) = 0LL;
    }
  }
  return v2;
}
