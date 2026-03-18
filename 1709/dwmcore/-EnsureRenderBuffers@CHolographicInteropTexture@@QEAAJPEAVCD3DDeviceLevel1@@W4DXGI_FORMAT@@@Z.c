/*
 * XREFs of ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801BE470
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180021D30 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A65D0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801BED2C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
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
  signed int v12; // eax
  struct ID3D11Texture2D *v13; // rdi
  signed int v14; // eax
  __int64 v15; // r13
  signed int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // r8d
  _QWORD *v19; // rcx
  signed int RenderTargetBitmapFromTexture; // eax
  __int64 v21; // rax
  CHolographicInteropTaskQueue *v22; // rcx
  struct IUnknown *v23; // r8
  unsigned int v24; // edx
  __int64 v26; // [rsp+40h] [rbp-59h] BYREF
  struct ID3D11Texture2D *v27; // [rsp+48h] [rbp-51h] BYREF
  __int128 v28; // [rsp+50h] [rbp-49h] BYREF
  struct CD3DDeviceLevel1 *v29; // [rsp+60h] [rbp-39h]
  _DWORD v30[5]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v31; // [rsp+84h] [rbp-15h]
  int v32; // [rsp+8Ch] [rbp-Dh]
  __int64 v33; // [rsp+90h] [rbp-9h]
  int v34; // [rsp+98h] [rbp-1h]
  __int128 v35; // [rsp+A0h] [rbp+7h]

  v3 = 0;
  v29 = a2;
  v5 = a2;
  v7 = 0;
  v27 = 0LL;
  v26 = 0LL;
  if ( *((_BYTE *)this + 121) )
    goto LABEL_31;
  DWORD2(v28) = 27;
  *(_QWORD *)&v28 = "Holographic Interop texture";
  v8 = (RTL_SRWLOCK *)((char *)this + 288);
  v30[0] = *((_DWORD *)this + 33);
  v9 = *((_DWORD *)this + 34);
  v35 = v28;
  v30[1] = v9;
  v30[2] = 1;
  v30[3] = 1;
  v30[4] = a3;
  v31 = 1LL;
  v32 = 0;
  v33 = 40LL;
  v34 = 2050;
  AcquireSRWLockExclusive((PSRWLOCK)this + 36);
  v10 = operator new(0x68uLL);
  if ( v10 )
  {
    *v10 = 1LL;
    v11 = v10 + 1;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)(v10 + 1),
      96LL,
      1LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CHolographicInteropTexture::RenderBuffer::RenderBuffer);
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 13) = v11;
  if ( v11 )
  {
    *((_DWORD *)this + 32) = 1;
    while ( 1 )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
      v12 = CD3DDeviceLevel1::CreateTexture(v5, (const struct DWM_TEXTURE2D_DESC *)v30, 0LL, &v27);
      v7 = v12;
      if ( v12 < 0 )
        break;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      v13 = v27;
      v14 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v27->lpVtbl->QueryInterface)(
              v27,
              &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
              &v26);
      v7 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x239u);
        goto LABEL_23;
      }
      v15 = 96LL * v3;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v26 + 104LL))(
              v26,
              0LL,
              0x80000000LL,
              0LL,
              v15 + *((_QWORD *)this + 13) + 8LL);
      v7 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x240u);
        goto LABEL_23;
      }
      *(_QWORD *)&v28 = a3 | 0x100000000LL;
      DWORD2(v28) = a3 == 10;
      v17 = *((_QWORD *)this + 9);
      if ( *(_QWORD *)(v17 + 32) )
        v18 = *(_DWORD *)(v17 + 56);
      else
        v18 = DisplayId::Hmd;
      v19 = (_QWORD *)(v15 + *((_QWORD *)this + 13));
      v5 = v29;
      RenderTargetBitmapFromTexture = CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
                                        v29,
                                        v13,
                                        v18,
                                        (__int64)&v28,
                                        v19);
      v7 = RenderTargetBitmapFromTexture;
      if ( RenderTargetBitmapFromTexture < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmapFromTexture, 0x24Cu);
        goto LABEL_23;
      }
      if ( ++v3 >= *((_DWORD *)this + 32) )
        goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x237u);
LABEL_23:
    ReleaseSRWLockExclusive(v8);
    goto LABEL_29;
  }
LABEL_15:
  ReleaseSRWLockExclusive(v8);
  v21 = *((_QWORD *)this + 9);
  if ( *((_BYTE *)this + 122) )
  {
    v22 = *(CHolographicInteropTaskQueue **)(v21 + 40);
    if ( !v22 || !*(_BYTE *)(v21 + 192) )
      goto LABEL_28;
    v23 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
    v24 = 4;
  }
  else
  {
    *((_BYTE *)this + 122) = 1;
    v22 = *(CHolographicInteropTaskQueue **)(v21 + 40);
    if ( !v22 || !*(_BYTE *)(v21 + 192) )
      goto LABEL_28;
    v23 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
    v24 = 1;
  }
  CHolographicInteropTaskQueue::PostMessageW(v22, v24, v23, 0LL, 0LL, 0LL, 0LL);
LABEL_28:
  *((_BYTE *)this + 121) = 1;
LABEL_29:
  if ( v7 < 0 )
    CHolographicInteropTexture::ReleaseResources(this);
LABEL_31:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  return (unsigned int)v7;
}
