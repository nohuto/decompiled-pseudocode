/*
 * XREFs of ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180025030
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800298A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x180088984 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180159790 (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // ebx
  char *v5; // rbp
  __int64 (__fastcall *v6)(struct CResource *, __int64); // rax
  char v7; // al
  int v8; // eax

  v2 = 0;
  if ( a2 != this[12] )
  {
    v5 = 0LL;
    if ( a2 )
    {
      v6 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( (char *)v6 == (char *)CCompositionSurfaceBitmap::IsOfType )
        v7 = CCompositionSurfaceBitmap::IsOfType(a2, 35LL);
      else
        v7 = v6(a2, 35LL);
      if ( v7 )
      {
        v5 = (char *)a2 + 64;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 15LL) )
      {
        *((_BYTE *)a2 + 361) = 1;
        CCachedVisualImage::SetForHwndBitmap((struct CResource *)((char *)a2 - 16), 0);
        v5 = (char *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != (struct CResource *)16));
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 98LL) )
      {
        v2 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x3A4u);
        return v2;
      }
      v8 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3A7u);
        return v2;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
    this[12] = a2;
    Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(this + 13, v5);
  }
  return v2;
}
