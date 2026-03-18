/*
 * XREFs of ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800705E4
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x1800705D0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801A00C0 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800705C0 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180070A00 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x180077960 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(_DWORD *a1, unsigned int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // r13d
  unsigned int v7; // r15d
  struct _RGNDATA *v8; // rdi
  struct _RGNDATA *v9; // rsi
  _BOOL8 (__fastcall *v10)(CHwFullScreenRenderTarget *); // rax
  bool v11; // al
  void *v12; // rcx
  void (__fastcall *v14)(_DWORD *, _QWORD, _QWORD, CMILPoolResource **); // rax
  __int64 v15; // rcx
  unsigned int *v16; // r8
  HRGN v17; // rcx
  unsigned int v18; // r12d
  int v19; // eax
  char *Buffer; // r15
  __int64 v21; // r10
  tagPOINT v22; // rcx
  int v23; // edx
  __int64 v24; // r11
  __int64 v25; // rcx
  char *v26; // r14
  unsigned int v27; // r8d
  int v28; // r9d
  HRGN v29; // rcx
  unsigned int v30; // r14d
  int v31; // eax
  DWORD v32; // edi
  char *v33; // r15
  struct _RGNDATA *v34; // rcx
  unsigned int v35; // r8d
  tagPOINT *v36; // r14
  void *v37; // rcx
  char v38; // [rsp+60h] [rbp-49h]
  unsigned int v39; // [rsp+64h] [rbp-45h]
  int v40; // [rsp+68h] [rbp-41h]
  int v41; // [rsp+68h] [rbp-41h]
  struct _RGNDATA *v42; // [rsp+70h] [rbp-39h] BYREF
  CMILPoolResource *v43; // [rsp+78h] [rbp-31h] BYREF
  struct _RGNDATA *v44; // [rsp+80h] [rbp-29h] BYREF
  tagPOINT v45; // [rsp+88h] [rbp-21h] BYREF
  __int64 v46; // [rsp+90h] [rbp-19h]
  CMILPoolResource *v47; // [rsp+98h] [rbp-11h]
  CMILPoolResource *v48; // [rsp+A0h] [rbp-9h]
  _DWORD v49[6]; // [rsp+B0h] [rbp+7h] BYREF

  v3 = a1[77];
  v4 = 0;
  v38 = a3;
  v43 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( (v3 & 0x408) == 0x408 )
  {
    v10 = *(_BOOL8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)a1 + 256LL);
    if ( v10 == CHwFullScreenRenderTarget::IsInDirectFlip )
      v11 = CHwFullScreenRenderTarget::IsInDirectFlip((CHwFullScreenRenderTarget *)a1);
    else
      v11 = v10((CHwFullScreenRenderTarget *)a1);
    if ( v11 || a1[66] <= 1u || !*((_QWORD *)a1 + 41) && !*((_QWORD *)a1 + 42) )
      goto LABEL_8;
    v14 = *(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, CMILPoolResource **))(*(_QWORD *)a1 + 224LL);
    if ( (char *)v14 == (char *)CHwFullScreenRenderTarget::GetFrontBufferSurface )
      CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, 0LL, &v43);
    else
      v14(a1, a2, 0LL, &v43);
    if ( g_LockAndReadCopyOfSwapChainBuffers )
      CD3DDeviceLevel1::ReadTexture(*((CD3DDeviceLevel1 **)a1 + 23), *((struct ID3D11Texture2D **)v43 + 17));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      TemplateEventDescriptor(v15, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
    v17 = (HRGN)*((_QWORD *)a1 + 41);
    v18 = 0;
    if ( v17 )
    {
      v19 = HrgnToRgnData(v17, &v44, v16);
      v40 = v19;
      v7 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x3CBu);
        v8 = v44;
        goto LABEL_8;
      }
      v8 = v44;
      if ( v44->rdh.nCount )
      {
        Buffer = v44->Buffer;
        do
        {
          v21 = *((_QWORD *)a1 + 21);
          v22 = (tagPOINT)*((_QWORD *)a1 + 23);
          v23 = *((_DWORD *)v43 + 36);
          v24 = *(_QWORD *)(v21 + 136);
          v48 = v43;
          v46 = *((_QWORD *)v43 + 17);
          v49[2] = 0;
          v45 = v22;
          v25 = *(_QWORD *)(*(_QWORD *)&v22 + 648LL);
          v49[5] = 1;
          v26 = &Buffer[16 * (unsigned int)v9];
          v47 = (CMILPoolResource *)v21;
          v27 = *(_DWORD *)v26;
          v28 = *((_DWORD *)v26 + 1);
          v49[3] = *((_DWORD *)v26 + 2);
          v49[4] = *((_DWORD *)v26 + 3);
          v49[0] = v27;
          v49[1] = v28;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, _DWORD *, _DWORD))(*(_QWORD *)v25 + 920LL))(
            v25,
            v24,
            *(unsigned int *)(v21 + 144),
            v27,
            v28,
            0,
            v46,
            v23,
            v49,
            0);
          v8 = v44;
          if ( g_LockAndReadCopyOfTexture )
          {
            CD3DDeviceLevel1::ReadTexture(*(CD3DDeviceLevel1 **)&v45, *((struct ID3D11Texture2D **)v47 + 17));
            CD3DDeviceLevel1::ReadTexture(*(CD3DDeviceLevel1 **)&v45, *((struct ID3D11Texture2D **)v48 + 17));
          }
          ++v18;
          LODWORD(v9) = (_DWORD)v9 + 1;
          v4 += (*((_DWORD *)v26 + 3) - *((_DWORD *)v26 + 1)) * (*((_DWORD *)v26 + 2) - *(_DWORD *)v26);
        }
        while ( (unsigned int)v9 < v8->rdh.nCount );
        v9 = v42;
        v7 = v40;
      }
    }
    v29 = (HRGN)*((_QWORD *)a1 + 42);
    if ( !v29 )
    {
LABEL_42:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v29, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop, v18, v4);
      if ( g_LockAndReadCopyOfSwapChainBuffers )
        CD3DDeviceLevel1::ReadTexture(
          *((CD3DDeviceLevel1 **)a1 + 23),
          *(struct ID3D11Texture2D **)(*((_QWORD *)a1 + 21) + 136LL));
      goto LABEL_8;
    }
    v39 = v18;
    v30 = v18;
    LODWORD(v46) = v4;
    v31 = HrgnToRgnData(v29, &v42, v16);
    v41 = v31;
    v7 = v31;
    if ( v31 >= 0 )
    {
      v9 = v42;
      if ( v42->rdh.nCount )
      {
        v32 = 0;
        v33 = v42->Buffer;
        do
        {
          v34 = (struct _RGNDATA *)*((_QWORD *)a1 + 23);
          v48 = (CMILPoolResource *)*((_QWORD *)a1 + 21);
          v35 = *((_DWORD *)v43 + 36);
          v36 = (tagPOINT *)&v33[16 * v32];
          v42 = v34;
          v47 = v43;
          v45 = *v36;
          CD3DDeviceLevel1::CopySubresourceRectInternal1(
            (CD3DDeviceLevel1 *)v34,
            *((struct ID3D11Resource **)v43 + 17),
            v35,
            (const struct tagRECT *)v36,
            *((struct ID3D11Resource **)v48 + 17),
            *((_DWORD *)v48 + 36),
            &v45,
            0);
          if ( g_LockAndReadCopyOfTexture )
          {
            CD3DDeviceLevel1::ReadTexture((CD3DDeviceLevel1 *)v42, *((struct ID3D11Texture2D **)v48 + 17));
            CD3DDeviceLevel1::ReadTexture((CD3DDeviceLevel1 *)v42, *((struct ID3D11Texture2D **)v47 + 17));
          }
          ++v18;
          ++v32;
          v29 = (HRGN)(unsigned int)((v36[1].x - v36->x) * (v36[1].y - v36->y));
          v4 += (unsigned int)v29;
        }
        while ( v32 < v9->rdh.nCount );
        v8 = v44;
        v7 = v41;
        v30 = v39;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v29, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT, v18 - v30, v4 - (unsigned int)v46);
      goto LABEL_42;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x3EDu);
    v9 = v42;
LABEL_8:
    a3 = v38;
  }
  if ( a1[66] == 3 )
  {
    v12 = (void *)*((_QWORD *)a1 + 42);
    if ( v12 && a3 )
    {
      DeleteObject(v12);
      *((_QWORD *)a1 + 42) = 0LL;
    }
  }
  else
  {
    v37 = (void *)*((_QWORD *)a1 + 41);
    if ( v37 && a3 )
    {
      DeleteObject(v37);
      *((_QWORD *)a1 + 41) = 0LL;
    }
  }
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  if ( v9 )
    HeapFree(WPF::g_processHeap, 0, v9);
  if ( v43 )
    CMILPoolResource::Release(v43);
  return v7;
}
