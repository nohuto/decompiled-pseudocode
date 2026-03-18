/*
 * XREFs of ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801BB7CC
 * Callers:
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180197CD8 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BB910 (-InternalRelease@-$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801BF2FC (-Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCallbackRendererManager::GetNextWARPCallbackRenderer(
        CCallbackRendererManager *this,
        struct CD3DDeviceLevel1 *a2,
        struct CWARPCallbackRenderer **a3)
{
  int v3; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  struct CWARPCallbackRenderer *v16; // [rsp+50h] [rbp+8h] BYREF
  struct CWARPCallbackRenderer *v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( *((_DWORD *)this + 22) )
    goto LABEL_13;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v16);
  v7 = CWARPCallbackRenderer::Create(a2, &v16);
  v3 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xFCu);
    goto LABEL_17;
  }
  v8 = *((unsigned int *)this + 22);
  v9 = (unsigned int)v16;
  v17 = v16;
  v10 = v8 + 1;
  if ( (int)v8 + 1 >= (unsigned int)v8 )
    v9 = v8 + 1;
  v3 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( v10 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v9 > *((_DWORD *)this + 21) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v17);
    v3 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v8) = v17;
    *((_DWORD *)this + 22) = v9;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xFDu);
LABEL_17:
    Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v16);
    return (unsigned int)v3;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(&v16);
LABEL_13:
  v12 = *((_DWORD *)this + 22) - 1;
  *a3 = *(struct CWARPCallbackRenderer **)(*((_QWORD *)this + 8) + 8LL * v12);
  v13 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 22) = v12;
  v14 = (__int64)*a3;
  *(_DWORD *)(v14 + 40) = v13;
  *(_DWORD *)(v14 + 44) = v13;
  return (unsigned int)v3;
}
