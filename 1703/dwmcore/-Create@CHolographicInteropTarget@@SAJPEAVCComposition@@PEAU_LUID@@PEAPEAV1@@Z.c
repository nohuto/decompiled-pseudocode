/*
 * XREFs of ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801A66E4
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801A601C (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CHolographicInteropTarget@@KAPEAX_K@Z @ 0x180153AB4 (--2CHolographicInteropTarget@@KAPEAX_K@Z.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801A6868 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Create(
        struct CComposition *a1,
        struct _LUID *a2,
        struct CHolographicInteropTarget **a3)
{
  char *v6; // rax
  CBitmapOfDeviceBitmaps *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (char *)CHolographicInteropTarget::operator new();
  v7 = (CBitmapOfDeviceBitmaps *)v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = a1;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *(_QWORD *)v6 = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
    *((_QWORD *)v6 + 8) = &CHolographicInteropTarget::`vftable'{for `IRenderTargetResource'};
    *((_QWORD *)v6 + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
    *(_OWORD *)(v6 + 140) = _xmm;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v7);
    v9 = CHolographicInteropTarget::Initialize(v7, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1Du);
      CMILCOMBase::InternalRelease(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v8;
}
