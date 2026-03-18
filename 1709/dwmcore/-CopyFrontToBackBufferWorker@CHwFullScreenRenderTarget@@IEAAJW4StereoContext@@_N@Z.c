/*
 * XREFs of ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18002F534
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18002F520 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801B7B60 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x180020784 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x18002BC80 (-GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x18002D9B0 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18002F080 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18002F910 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(
        CD3DDeviceLevel1 **a1,
        unsigned int a2,
        char a3)
{
  int v3; // eax
  char v5; // r14
  bool (__fastcall *v7)(CHwFullScreenRenderTarget *); // rax
  bool v8; // al
  CD3DDeviceLevel1 *v9; // rax
  CHwDisplayRenderTarget *v11; // rcx
  __int64 (__fastcall *v12)(CHwDisplayRenderTarget *, struct CD3DSurface **); // rax
  void (__fastcall *v13)(CD3DDeviceLevel1 **, _QWORD, _QWORD, CD3DSurface **); // rax
  FastRegion::Internal::CRgnData *v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // esi
  LONG v17; // r12d
  LONG v18; // r14d
  unsigned int v19; // r13d
  int v20; // r15d
  __int64 v21; // r8
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  FastRegion::Internal::CRgnData *v25; // rcx
  FastRegion::Internal::CRgnData *v26; // rcx
  __int64 (__fastcall *v27)(CD3DSurface *); // rax
  __int64 (__fastcall *v28)(CD3DSurface *); // rax
  unsigned int v29; // r12d
  unsigned int v30; // r13d
  LONG v31; // r9d
  struct CD3DSurface *v32; // r14
  CD3DSurface *v33; // r15
  int v34; // r8d
  struct ID3D11Resource *v35; // rdx
  CD3DDeviceLevel1 *v36; // rcx
  FastRegion::Internal::CRgnData *v37; // rcx
  struct tagPOINT *v38; // [rsp+30h] [rbp-99h]
  int v39; // [rsp+38h] [rbp-91h]
  CD3DSurface *v41; // [rsp+68h] [rbp-61h] BYREF
  struct CD3DSurface *v42; // [rsp+70h] [rbp-59h] BYREF
  struct tagRECT v43; // [rsp+78h] [rbp-51h] BYREF
  tagPOINT v44; // [rsp+88h] [rbp-41h] BYREF
  struct CD3DSurface *v45; // [rsp+90h] [rbp-39h]
  char v46[8]; // [rsp+98h] [rbp-31h] BYREF
  unsigned __int64 v47; // [rsp+A0h] [rbp-29h]
  LONG *v48; // [rsp+A8h] [rbp-21h]
  __int64 v49; // [rsp+B0h] [rbp-19h]
  int v50; // [rsp+B8h] [rbp-11h]
  _DWORD v51[6]; // [rsp+C8h] [rbp-1h] BYREF

  v3 = *((_DWORD *)a1 + 81);
  v42 = 0LL;
  v41 = 0LL;
  v5 = a3;
  if ( (v3 & 0x408) == 0x408 )
  {
    v7 = (bool (__fastcall *)(CHwFullScreenRenderTarget *))*((_QWORD *)*a1 + 34);
    v8 = v7 == CHwFullScreenRenderTarget::IsInDirectFlip
       ? CHwFullScreenRenderTarget::IsInDirectFlip((CHwFullScreenRenderTarget *)a1)
       : v7((CHwFullScreenRenderTarget *)a1);
    if ( !v8 && *((_DWORD *)a1 + 70) > 1u && (*(_DWORD *)a1[50] || *(_DWORD *)a1[59]) )
    {
      v11 = (CHwDisplayRenderTarget *)(a1 + 24);
      v12 = (__int64 (__fastcall *)(CHwDisplayRenderTarget *, struct CD3DSurface **))*((_QWORD *)a1[24] + 61);
      if ( v12 == CHwDisplayRenderTarget::GetLogicalBackBuffer )
        CHwDisplayRenderTarget::GetLogicalBackBuffer(v11, &v42);
      else
        v12(v11, &v42);
      v13 = (void (__fastcall *)(CD3DDeviceLevel1 **, _QWORD, _QWORD, CD3DSurface **))*((_QWORD *)*a1 + 29);
      if ( (char *)v13 == (char *)CHwFullScreenRenderTarget::GetFrontBufferSurface )
        CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, 0LL, &v41);
      else
        v13(a1, a2, 0LL, &v41);
      if ( g_LockAndReadCopyOfSwapChainBuffers )
        DebugInspectTexture(*((struct ID3D11Texture2D **)v41 + 16), 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
      v14 = a1[50];
      v15 = 0;
      v16 = 0;
      if ( *(_DWORD *)v14 )
      {
        FastRegion::Internal::CRgnData::BeginIterator(v14, (struct FastRegion::CRegion::Iterator *)v46);
        while ( (unsigned __int64)v48 < v47 )
        {
          v17 = *v48;
          v18 = v48[2];
          v51[1] = v17;
          v51[4] = v18;
          v51[2] = 0;
          v51[5] = 1;
          v44.y = v17;
          v19 = *(_DWORD *)(v49 + 8LL * v50);
          *(_QWORD *)&v43.left = v41;
          v51[0] = v19;
          v20 = *(_DWORD *)(v49 + 4LL * (2 * v50 + 1));
          v39 = *((_DWORD *)v41 + 34);
          v21 = *((unsigned int *)v42 + 34);
          v38 = (struct tagPOINT *)*((_QWORD *)v41 + 16);
          v22 = (__int64 *)*((_QWORD *)a1[25] + 82);
          v51[3] = v20;
          v45 = v42;
          v23 = *((_QWORD *)v42 + 16);
          v24 = *v22;
          v44.x = v19;
          (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD, LONG, _DWORD, struct tagPOINT *, int, _DWORD *, _DWORD))(v24 + 920))(
            v22,
            v23,
            v21,
            v19,
            v17,
            0,
            v38,
            v39,
            v51,
            0);
          if ( g_LockAndReadCopyOfTexture )
          {
            DebugInspectTexture(*((struct ID3D11Texture2D **)v45 + 16), 0);
            DebugInspectTexture(*(struct ID3D11Texture2D **)(*(_QWORD *)&v43.left + 128LL), 0);
          }
          ++v15;
          v16 += (v20 - v19) * (v18 - v17);
          FastRegion::Internal::CRgnData::StepIterator(v25, (struct FastRegion::CRegion::Iterator *)v46);
        }
        v5 = a3;
      }
      if ( *((_DWORD *)a1 + 70) == 3 )
      {
        v26 = a1[59];
        if ( *(_DWORD *)v26 )
        {
          v29 = v15;
          v30 = v16;
          FastRegion::Internal::CRgnData::BeginIterator(v26, (struct FastRegion::CRegion::Iterator *)v46);
          while ( (unsigned __int64)v48 < v47 )
          {
            v31 = *v48;
            v32 = v42;
            v33 = v41;
            v43.bottom = v48[2];
            v43.top = v31;
            v44.y = v31;
            v43.left = *(_DWORD *)(v49 + 8LL * v50);
            v44.x = v43.left;
            v34 = *((_DWORD *)v41 + 34);
            v35 = (struct ID3D11Resource *)*((_QWORD *)v41 + 16);
            v36 = a1[25];
            v43.right = *(_DWORD *)(v49 + 4LL * (2 * v50 + 1));
            CD3DDeviceLevel1::CopySubresourceRectInternal1(
              v36,
              v35,
              v34,
              &v43,
              *((struct ID3D11Resource **)v42 + 16),
              *((_DWORD *)v42 + 34),
              &v44,
              0);
            if ( g_LockAndReadCopyOfTexture )
            {
              DebugInspectTexture(*((struct ID3D11Texture2D **)v32 + 16), 0);
              DebugInspectTexture(*((struct ID3D11Texture2D **)v33 + 16), 0);
            }
            ++v15;
            v37 = (FastRegion::Internal::CRgnData *)(unsigned int)((v43.right - v43.left) * (v43.bottom - v43.top));
            v16 += (unsigned int)v37;
            FastRegion::Internal::CRgnData::StepIterator(v37, (struct FastRegion::CRegion::Iterator *)v46);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT,
              v15 - v29,
              v16 - v30);
          v5 = a3;
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
          v15,
          v16);
      if ( g_LockAndReadCopyOfSwapChainBuffers )
        DebugInspectTexture(*((struct ID3D11Texture2D **)v42 + 16), 0);
    }
  }
  if ( v5 )
  {
    if ( *((_DWORD *)a1 + 70) == 3 )
      v9 = a1[59];
    else
      v9 = a1[50];
    *(_DWORD *)v9 = 0;
  }
  if ( v41 )
  {
    v27 = *(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)v41 + 8LL);
    if ( v27 == CD3DSurface::Release )
      CD3DSurface::Release(v41);
    else
      v27(v41);
  }
  if ( v42 )
  {
    v28 = *(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)v42 + 8LL);
    if ( v28 == CD3DSurface::Release )
      CD3DSurface::Release(v42);
    else
      v28(v42);
  }
  return 0LL;
}
