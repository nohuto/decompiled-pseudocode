/*
 * XREFs of ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801FAEA4
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x1801FE504 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800767F0 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DF5DC (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801FB978 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::EnsureRenderBuffers(
        CHolographicInteropTexture *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_FORMAT a3)
{
  _QWORD *v3; // rdi
  int v5; // r14d
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // r12d
  _QWORD *v9; // rax
  unsigned int v10; // r13d
  int v11; // eax
  struct ID3D11Texture2D *v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // r8d
  int RenderTargetBitmapFromTexture; // eax
  __int64 v20; // rax
  CHolographicInteropTaskQueue *v21; // rcx
  struct IUnknown *v22; // r8
  unsigned int v23; // edx
  __int64 *v25; // [rsp+40h] [rbp-69h] BYREF
  struct ID3D11Texture2D *v26; // [rsp+48h] [rbp-61h] BYREF
  __int128 v27; // [rsp+50h] [rbp-59h] BYREF
  enum DXGI_FORMAT v28; // [rsp+60h] [rbp-49h]
  CD3DDeviceLevel1 *v29; // [rsp+68h] [rbp-41h]
  __int64 v30; // [rsp+70h] [rbp-39h]
  _DWORD v31[5]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v32; // [rsp+94h] [rbp-15h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  __int64 v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A8h] [rbp-1h]
  __int128 v36; // [rsp+B0h] [rbp+7h]
  const void *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = 0LL;
  v28 = a3;
  v29 = a2;
  v5 = 0;
  v26 = 0LL;
  v25 = 0LL;
  if ( *((_BYTE *)this + 133) )
    goto LABEL_40;
  v6 = *((_DWORD *)this + 36);
  if ( (unsigned int)(v6 - 1) <= 0x3FFF )
  {
    v7 = *((_DWORD *)this + 37);
    if ( (unsigned int)(v7 - 1) <= 0x3FFF )
    {
      v31[0] = v6;
      DWORD2(v27) = 27;
      *(_QWORD *)&v27 = "Holographic Interop texture";
      v31[1] = v7;
      v31[2] = 1;
      v36 = v27;
      v31[3] = 1;
      v31[4] = a3;
      v32 = 1LL;
      v33 = 0;
      v34 = 40LL;
      v35 = 2050;
      AcquireSRWLockExclusive((PSRWLOCK)this + 38);
      v8 = 0;
      if ( *((_DWORD *)this + 35) )
      {
        while ( 2 )
        {
          v9 = operator new(0x68uLL);
          if ( v9 )
          {
            v3 = v9 + 1;
            *v9 = 1LL;
            `vector constructor iterator'(
              (CInputSinkStruct::InputQueueInfo *)(v9 + 1),
              96LL,
              1LL,
              (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CHolographicInteropTexture::RenderBuffer::RenderBuffer);
          }
          if ( v8 >= 2uLL )
            ModuleFailFastForHRESULT(-2147483637, retaddr);
          *((_QWORD *)this + v8 + 13) = v3;
          *((_DWORD *)this + 34) = 1;
          v10 = 0;
          do
          {
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
            v11 = CD3DDeviceLevel1::CreateTexture(v29, (const struct DWM_TEXTURE2D_DESC *)v31, 0LL, &v26);
            v5 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x250u);
              goto LABEL_30;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
            v12 = v26;
            v13 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 **))v26->lpVtbl->QueryInterface)(
                    v26,
                    &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
                    &v25);
            v5 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x252u);
              goto LABEL_30;
            }
            if ( v8 >= 2uLL )
              ModuleFailFastForHRESULT(-2147483637, retaddr);
            v14 = *v25;
            v15 = *((_QWORD *)this + v8 + 13) + 8LL;
            v30 = 96LL * v10;
            v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, __int64))(v14 + 104))(
                    v25,
                    0LL,
                    0x80000000LL,
                    0LL,
                    v15 + v30);
            v5 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x258u);
              goto LABEL_30;
            }
            *(_QWORD *)&v27 = (unsigned int)v28 | 0x100000000LL;
            DWORD2(v27) = v28 == DXGI_FORMAT_R16G16B16A16_FLOAT;
            if ( v8 >= 2uLL )
              ModuleFailFastForHRESULT(-2147483637, retaddr);
            v17 = *((_QWORD *)this + 9);
            if ( *(_QWORD *)(v17 + 32) )
              v18 = *(_DWORD *)(v17 + 56);
            else
              v18 = DisplayId::Hmd;
            RenderTargetBitmapFromTexture = CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
                                              v29,
                                              v12,
                                              v18,
                                              (__int64)&v27,
                                              (_QWORD *)(*((_QWORD *)this + v8 + 13) + v30));
            v3 = 0LL;
            v5 = RenderTargetBitmapFromTexture;
            if ( RenderTargetBitmapFromTexture < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x263u);
LABEL_30:
              ReleaseSRWLockExclusive((PSRWLOCK)this + 38);
              goto LABEL_38;
            }
            ++v10;
          }
          while ( v10 < *((_DWORD *)this + 34) );
          if ( ++v8 < *((_DWORD *)this + 35) )
            continue;
          break;
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)this + 38);
      v20 = *((_QWORD *)this + 9);
      if ( *((_BYTE *)this + 134) )
      {
        v21 = *(CHolographicInteropTaskQueue **)(v20 + 40);
        if ( !v21 || !*(_BYTE *)(v20 + 224) )
          goto LABEL_36;
        v22 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
        v23 = 4;
      }
      else
      {
        *((_BYTE *)this + 134) = 1;
        v21 = *(CHolographicInteropTaskQueue **)(v20 + 40);
        if ( !v21 || !*(_BYTE *)(v20 + 224) )
          goto LABEL_36;
        v22 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
        v23 = 1;
      }
      CHolographicInteropTaskQueue::PostMessageW(v21, v23, v22, 0LL, 0LL, 0LL, 0LL);
LABEL_36:
      *((_BYTE *)this + 133) = 1;
      goto LABEL_38;
    }
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x230u);
LABEL_38:
  if ( v5 < 0 )
    CHolographicInteropTexture::ReleaseResources(this);
LABEL_40:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
  return (unsigned int)v5;
}
