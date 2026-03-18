/*
 * XREFs of ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x18007B958
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
        CHwFullScreenRenderTarget *this,
        struct CD3DSurface *a2,
        FastRegion::Internal::CRgnData **a3,
        struct CD3DSurface *a4)
{
  unsigned int v5; // edi
  CHwFullScreenRenderTarget *v7; // r10
  int v8; // r13d
  int v9; // esi
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned int v12; // r12d
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  FastRegion::Internal::CRgnData *v16; // rcx
  int v18; // [rsp+38h] [rbp-71h]
  _BYTE v20[8]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-39h]
  int *v22; // [rsp+78h] [rbp-31h]
  __int64 v23; // [rsp+80h] [rbp-29h]
  int v24; // [rsp+88h] [rbp-21h]
  _DWORD v25[6]; // [rsp+98h] [rbp-11h] BYREF

  v5 = 0;
  FastRegion::Internal::CRgnData::BeginIterator(*a3, (struct FastRegion::CRegion::Iterator *)v20);
  while ( (unsigned __int64)v22 < v21 )
  {
    v8 = *v22;
    v9 = v22[2];
    v10 = *((_QWORD *)a2 + 16);
    v25[2] = 0;
    v11 = *((unsigned int *)a4 + 34);
    v25[1] = v8;
    v25[4] = v9;
    v25[5] = 1;
    v12 = *(_DWORD *)(v23 + 8LL * v24);
    v25[0] = v12;
    v13 = *(_DWORD *)(v23 + 4LL * (2 * v24 + 1));
    v14 = *((_QWORD *)a4 + 16);
    v15 = *(_QWORD *)(*((_QWORD *)v7 + 28) + 656LL);
    v18 = *((_DWORD *)a2 + 34);
    v25[3] = v13;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD, __int64, int, _DWORD *, _DWORD))(*(_QWORD *)v15 + 920LL))(
      v15,
      v14,
      v11,
      v12,
      v8,
      0,
      v10,
      v18,
      v25,
      0);
    if ( g_LockAndReadCopyOfTexture )
    {
      DebugInspectTexture(*((struct ID3D11Texture2D **)a4 + 16), 0);
      DebugInspectTexture(*((struct ID3D11Texture2D **)a2 + 16), 0);
    }
    v5 += (v9 - v8) * (v13 - v12);
    FastRegion::Internal::CRgnData::StepIterator(v16, (struct FastRegion::CRegion::Iterator *)v20);
    v7 = this;
  }
  return v5;
}
