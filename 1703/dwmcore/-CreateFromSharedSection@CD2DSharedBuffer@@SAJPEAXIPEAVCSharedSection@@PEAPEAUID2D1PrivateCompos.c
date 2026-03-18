/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18001E1D4
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000BCEC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000C104 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x18001E284 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x18001E2A0 (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        unsigned __int64 a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  unsigned int v8; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  _DWORD *v12; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v9 = CD2DSharedBuffer::operator new(a1);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 0;
    *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v9 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
    *((_QWORD *)v9 + 3) = a1;
    v9[8] = a2;
    *((_QWORD *)v9 + 5) = a3;
    if ( a3 )
      CBitmapOfDeviceBitmaps::AddRef(a3);
  }
  else
  {
    v10 = 0LL;
  }
  v12 = v10;
  if ( v10 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v10);
    v12 = 0LL;
    *a4 = (struct ID2D1PrivateCompositorBuffer *)(v10 + 4);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x40u);
  }
  ReleaseInterface<CSwRenderTargetGetBounds>(&v12);
  return v8;
}
