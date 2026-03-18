/*
 * XREFs of ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801A3ABC
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800793BC (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180196310 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801A41CC (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::EnsureRenderBuffers(
        CHolographicInteropTexture *this,
        struct CD3DDeviceLevel1 *a2,
        unsigned int a3)
{
  unsigned int v3; // r15d
  CD3DDeviceLevel1 *v5; // r13
  int v7; // r14d
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // eax
  struct ID3D11Texture2D *v13; // rdi
  int v14; // eax
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // r8d
  _QWORD *v19; // rcx
  int RenderTargetBitmapFromTexture; // eax
  unsigned int v21; // edx
  __int64 v23; // [rsp+40h] [rbp-59h] BYREF
  struct ID3D11Texture2D *v24; // [rsp+48h] [rbp-51h] BYREF
  __int128 v25; // [rsp+50h] [rbp-49h] BYREF
  struct CD3DDeviceLevel1 *v26; // [rsp+60h] [rbp-39h]
  _DWORD v27[5]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v28; // [rsp+84h] [rbp-15h]
  int v29; // [rsp+8Ch] [rbp-Dh]
  __int64 v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+98h] [rbp-1h]
  __int128 v32; // [rsp+A0h] [rbp+7h]

  v3 = 0;
  v26 = a2;
  v5 = a2;
  v7 = 0;
  v24 = 0LL;
  v23 = 0LL;
  if ( !*((_BYTE *)this + 113) )
  {
    DWORD2(v25) = 27;
    *(_QWORD *)&v25 = "Holographic Interop texture";
    v8 = (RTL_SRWLOCK *)((char *)this + 280);
    v27[0] = *((_DWORD *)this + 31);
    v9 = *((_DWORD *)this + 32);
    v32 = v25;
    v27[1] = v9;
    v27[2] = 1;
    v27[3] = 1;
    v27[4] = a3;
    v28 = 1LL;
    v29 = 0;
    v30 = 40LL;
    v31 = 2050;
    AcquireSRWLockExclusive((PSRWLOCK)this + 35);
    v10 = operator new(0x68uLL);
    if ( v10 )
    {
      *v10 = 1LL;
      v11 = v10 + 1;
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)(v10 + 1),
        96LL,
        1LL,
        (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))CHolographicInteropTexture::RenderBuffer::RenderBuffer);
    }
    else
    {
      v11 = 0LL;
    }
    *((_QWORD *)this + 12) = v11;
    if ( v11 )
    {
      *((_DWORD *)this + 30) = 1;
      while ( 1 )
      {
        Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v24);
        v12 = CD3DDeviceLevel1::CreateTexture(v5, (const struct DWM_TEXTURE2D_DESC *)v27, 0LL, &v24);
        v7 = v12;
        if ( v12 < 0 )
          break;
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v23);
        v13 = v24;
        v14 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v24->lpVtbl->QueryInterface)(
                v24,
                &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
                &v23);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x200u);
          goto LABEL_21;
        }
        v15 = 96LL * v3;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v23 + 104LL))(
                v23,
                0LL,
                0x80000000LL,
                0LL,
                v15 + *((_QWORD *)this + 12) + 8LL);
        v7 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x207u);
          goto LABEL_21;
        }
        *(_QWORD *)&v25 = a3 | 0x300000000LL;
        DWORD2(v25) = a3 == 10;
        v17 = *((_QWORD *)this + 9);
        if ( *(_QWORD *)(v17 + 32) )
          v18 = *(_DWORD *)(v17 + 56);
        else
          v18 = DisplayId::Hmd;
        v19 = (_QWORD *)(v15 + *((_QWORD *)this + 12));
        v5 = v26;
        RenderTargetBitmapFromTexture = CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
                                          v26,
                                          v13,
                                          v18,
                                          (__int64)&v25,
                                          v19);
        v7 = RenderTargetBitmapFromTexture;
        if ( RenderTargetBitmapFromTexture < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x213u);
          goto LABEL_21;
        }
        if ( ++v3 >= *((_DWORD *)this + 30) )
          goto LABEL_15;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1FEu);
LABEL_21:
      ReleaseSRWLockExclusive(v8);
    }
    else
    {
LABEL_15:
      ReleaseSRWLockExclusive(v8);
      if ( *((_BYTE *)this + 114) )
      {
        v21 = 4;
      }
      else
      {
        *((_BYTE *)this + 114) = 1;
        v21 = 1;
      }
      CHolographicInteropTaskQueue::PostMessageW(
        *(CHolographicInteropTaskQueue **)(*((_QWORD *)this + 9) + 40LL),
        v21,
        (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
      *((_BYTE *)this + 113) = 1;
    }
    if ( v7 < 0 )
      CHolographicInteropTexture::ReleaseResources(this);
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v24);
  return (unsigned int)v7;
}
