/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020FAC
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x180001F7C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180074CC4 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _Init_thread_footer @ 0x1800C2F28 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C2F88 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GenerateShaders(CD3DDeviceLevel1 *this)
{
  unsigned int v2; // r14d
  _DWORD *v3; // r15
  __int64 v4; // rdi
  __m128i v5; // xmm6
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  int v7; // ebx
  unsigned int i; // edi
  unsigned int j; // r14d
  __m128i v10; // xmm7
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r8
  __m128i v14; // xmm6
  unsigned int k; // r14d
  __int64 v16; // rdi
  __int64 *v17; // rbx
  unsigned int v18; // r14d
  __int64 v19; // rdi
  __int64 *v20; // rbx
  unsigned int m; // edi
  __int64 v22; // r14
  __int64 *v23; // rbx
  struct CSurfaceShaderComposer **v24; // rsi
  struct CSurfaceShaderComposer *v25; // r14
  __int64 *v26; // rdi
  CMILPoolResource *v28; // rcx
  unsigned int v29; // [rsp+28h] [rbp-49h]
  struct CSurfaceShaderComposer **v30; // [rsp+48h] [rbp-29h] BYREF
  struct CSurfaceShaderComposer *v31; // [rsp+50h] [rbp-21h] BYREF
  int v32; // [rsp+58h] [rbp-19h]
  const char *v33; // [rsp+60h] [rbp-11h]
  int v34; // [rsp+68h] [rbp-9h]
  __int128 v35; // [rsp+70h] [rbp-1h]
  BOOL v36; // [rsp+E0h] [rbp+6Fh] BYREF
  int v37; // [rsp+E4h] [rbp+73h]
  struct ID3D11PixelShader *v38; // [rsp+E8h] [rbp+77h] BYREF

  v2 = 0;
  v3 = (_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL);
  do
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
    v4 = *((_QWORD *)this + 81);
    v5 = off_18026DB40[v2];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 8 * v2 + 1048);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, char *))(*(_QWORD *)v4 + 96LL))(
                                                     v4,
                                                     v5.m128i_i64[0],
                                                     _mm_srli_si128(v5, 8).m128i_u64[0],
                                                     0LL,
                                                     (char *)this + 8 * v2 + 1048);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v29 = 620;
LABEL_46:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, v29);
      return (unsigned int)v7;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
    ++v2;
  }
  while ( v2 < 8 );
  for ( i = 0; i < 4; ++i )
  {
    *(_QWORD *)&v35 = 0xFFFFFFFFLL;
    v31 = (struct CSurfaceShaderComposer *)"NoOp";
    v32 = 0;
    v33 = "NoOp";
    v34 = 0;
    v30 = (struct CSurfaceShaderComposer **)i;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     this,
                                                     (const struct CommonRenderingShaderDesc *)&v30,
                                                     0,
                                                     (enum VertexShaderKey::Enum *)&v36,
                                                     &v38);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v29 = 632;
      goto LABEL_46;
    }
    if ( ((unsigned __int8)v30 & 1) != 0 )
    {
      LODWORD(v30) = (unsigned int)v30 | 4;
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       this,
                                                       (const struct CommonRenderingShaderDesc *)&v30,
                                                       0,
                                                       (enum VertexShaderKey::Enum *)&v36,
                                                       &v38);
      v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v29 = 638;
        goto LABEL_46;
      }
    }
  }
  for ( j = 0; j < 4; ++j )
  {
    v10 = *(__m128i *)&(&off_18026DB00)[2 * (int)j];
    v36 = j - 2 <= 1;
    v37 = ((j - 1) & 0xFFFFFFFD) != 0 ? 2 : 4;
    LOBYTE(v11) = VertexShaderDesc::ResolveKey((__int64)&v36);
    v12 = *((_QWORD *)this + 81);
    v14 = *(__m128i *)(v13 + 16LL * v11 + 2546496);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 8 * j + 1168);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64, unsigned __int64, char *))(*(_QWORD *)v12 + 88LL))(
                                                     v12,
                                                     v10.m128i_i64[0],
                                                     _mm_srli_si128(v10, 8).m128i_u64[0],
                                                     v14.m128i_i64[0],
                                                     _mm_srli_si128(v14, 8).m128i_u64[0],
                                                     (char *)this + 8 * j + 1168);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v29 = 652;
      goto LABEL_46;
    }
  }
  for ( k = 0; k < 0x18; ++k )
  {
    v16 = *((_QWORD *)this + 81);
    v17 = (__int64 *)((char *)this + 8 * k);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v17 + 150);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v16 + 160LL))(
                                                     v16,
                                                     &byte_180216A60[264 * k],
                                                     (char *)v17 + 1200);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v29 = 659;
      goto LABEL_46;
    }
  }
  v18 = 0;
  do
  {
    v19 = *((_QWORD *)this + 81);
    v20 = (__int64 *)((char *)this + 8 * v18);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v20 + 222);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, struct HINSTANCE__ *, char *))(*(_QWORD *)v19 + 176LL))(
                                                     v19,
                                                     &_ImageBase + 10 * (int)v18 + 555294,
                                                     (char *)v20 + 1776);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v29 = 666;
      goto LABEL_46;
    }
    ++v18;
  }
  while ( !v18 );
  for ( m = 0; m < 4; ++m )
  {
    v22 = *((_QWORD *)this + 81);
    v23 = (__int64 *)((char *)this + 8 * m);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v23 + 223);
    if ( dword_180272830 > *v3 )
    {
      Init_thread_header(&dword_180272830);
      if ( dword_180272830 == -1 )
      {
        dword_18026E0D4 = 1;
        dword_18026E0D8 = 1;
        xmmword_18026E0B4 = xmmword_18021E4A0;
        qword_18026E0DC = 8LL;
        xmmword_18026E0C4 = xmmword_18021E4A0;
        word_18026E0E4 = 0;
        xmmword_18026E0E8 = xmmword_18021E4A0;
        qword_18026E108 = 1LL;
        xmmword_18026E0F8 = xmmword_18021E4A0;
        qword_18026E110 = 7LL;
        xmmword_18026E11C = xmmword_18021E4A0;
        word_18026E118 = 0;
        xmmword_18026E12C = xmmword_18021E4A0;
        dword_18026E13C = 1;
        xmmword_18026E150 = xmmword_18021E4A0;
        dword_18026E140 = 1;
        xmmword_18026E160 = xmmword_18021E4A0;
        qword_18026E144 = 7LL;
        word_18026E14C = 0;
        Init_thread_footer(&dword_180272830);
      }
    }
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v22 + 168LL))(
                                                     v22,
                                                     (char *)&unk_18026E0A0 + 52 * (int)m,
                                                     (char *)v23 + 1784);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v29 = 673;
      goto LABEL_46;
    }
  }
  if ( *((int *)this + 189) >= 37632 )
  {
    v31 = 0LL;
    v30 = (struct CSurfaceShaderComposer **)((char *)this + 1160);
    LOBYTE(v32) = 1;
    v7 = CSurfaceShaderComposer::Create(this, &v31);
    if ( (_BYTE)v32 )
    {
      v24 = v30;
      v25 = v31;
      v26 = (__int64 *)*v30;
      if ( v31 != *v30 )
      {
        if ( v26 )
        {
          v28 = (CMILPoolResource *)v26[7];
          if ( v28 )
          {
            v26[7] = 0LL;
            CMILPoolResource::Release(v28);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26 + 6);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v26 + 5);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26 + 4);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26 + 3);
          `vector destructor iterator'(
            v26,
            8uLL,
            3uLL,
            Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
          WPF::ProcessHeapImpl::Free(v26);
        }
        *v24 = v25;
      }
    }
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2ACu);
  }
  return (unsigned int)v7;
}
