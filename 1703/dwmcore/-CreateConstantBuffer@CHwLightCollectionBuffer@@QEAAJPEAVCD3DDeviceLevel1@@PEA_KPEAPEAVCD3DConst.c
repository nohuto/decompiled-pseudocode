/*
 * XREFs of ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@2@Z @ 0x180199AAC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?SetLightingCollection@CHWCallbackRenderer@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1801306C4 (-SetLightingCollection@CHWCallbackRenderer@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002150C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801971E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::CreateConstantBuffer(
        CHwLightCollectionBuffer *this,
        struct CD3DDeviceLevel1 ***a2,
        unsigned __int64 *a3,
        struct CD3DConstantBuffer **a4,
        struct CD3DConstantBuffer **a5)
{
  unsigned __int8 *v9; // rdi
  enum D3D11_USAGE v10; // r8d
  int v11; // eax
  unsigned int v12; // ebx
  enum D3D11_USAGE v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct CD3DConstantBuffer *v18; // rax
  struct CD3DConstantBuffer *v19; // rcx
  struct CD3DConstantBuffer *v21[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CD3DConstantBuffer *v22; // [rsp+70h] [rbp+30h] BYREF

  v21[0] = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v21);
  v9 = (unsigned __int8 *)this + 32;
  v11 = CD3DConstantBuffer::Create(a2, 0x110u, v10, (char *)this + 32, v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xADu);
  }
  else
  {
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v22);
    v14 = CD3DConstantBuffer::Create(a2, 0xE0u, v13, (char *)this + 304, &v22);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB4u);
    }
    else
    {
      v15 = 314159LL;
      v16 = 62LL;
      do
      {
        v17 = *v9;
        v9 += 8;
        v15 = *(v9 - 1)
            + 37
            * (*(v9 - 2)
             + 37
             * (*(v9 - 3)
              + 37 * (*(v9 - 4) + 37 * (*(v9 - 5) + 37 * (*(v9 - 6) + 37 * (*(v9 - 7) + 37 * (v17 + 37 * v15)))))));
        --v16;
      }
      while ( v16 );
      v18 = v21[0];
      v21[0] = 0LL;
      *a3 = v15;
      v19 = v22;
      v22 = 0LL;
      *a4 = v18;
      *a5 = v19;
    }
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v21);
  return v12;
}
