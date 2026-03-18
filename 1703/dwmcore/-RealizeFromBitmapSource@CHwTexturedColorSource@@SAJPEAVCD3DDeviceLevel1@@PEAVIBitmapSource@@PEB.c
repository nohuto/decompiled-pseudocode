/*
 * XREFs of ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704
 * Callers:
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180186D9C (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188458 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180041DC0 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180041E6C (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180041ECC (-Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$T.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18004A8D0 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800541D0 (-Release@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180054480 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180056030 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800572A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1800CB3BC (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTexturedColorSource::RealizeFromBitmapSource(
        struct CD3DDeviceLevel1 *a1,
        CBitmap *a2,
        _QWORD *a3,
        int a4,
        int a5,
        __int64 a6,
        struct CHwTexturedColorSource **a7)
{
  struct CMILBrushBitmap **v7; // rbx
  struct CHwTexturedColorSource *v8; // r12
  int v9; // r15d
  struct CMILBrushBitmap *v10; // r13
  CBitmapOfDeviceBitmaps *v13; // rcx
  void (*v14)(void); // rax
  CBitmap *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rdi
  void (__fastcall *v18)(CMILBrushBitmap *__hidden); // rax
  _QWORD *v19; // rcx
  __int64 v20; // xmm0_8
  __int64 v21; // rax
  __int64 (__fastcall *v22)(CBitmap *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  int v24; // eax
  int v25; // eax
  char *v26; // r8
  char *i; // rdx
  __int64 v28; // r9
  int v29; // eax
  unsigned int (__fastcall *v30)(CBitmapOfDeviceBitmaps *__hidden); // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  struct IBitmapSource *v34; // rdx
  struct CMILFactory *v35; // rcx
  int v36; // eax
  char *v37; // rdx
  char *v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  unsigned int v42; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v43; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  struct CHwTexturedColorSource *v46; // [rsp+58h] [rbp-A8h] BYREF
  CBitmap *v47; // [rsp+60h] [rbp-A0h]
  _QWORD *v48; // [rsp+68h] [rbp-98h]
  struct CHwTexturedColorSource **v49; // [rsp+70h] [rbp-90h]
  void **v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+88h] [rbp-78h]
  void **v52; // [rsp+90h] [rbp-70h]
  int v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  void **v55; // [rsp+A8h] [rbp-58h] BYREF
  int v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B4h] [rbp-4Ch]
  int v58; // [rsp+B8h] [rbp-48h]
  void **v59; // [rsp+C0h] [rbp-40h]
  __int128 v60; // [rsp+C8h] [rbp-38h]
  CMILBrushBitmap *v61; // [rsp+D8h] [rbp-28h]
  _QWORD v62[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  int v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+104h] [rbp+4h]
  int v67; // [rsp+108h] [rbp+8h]
  float v68; // [rsp+10Ch] [rbp+Ch]
  float v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]

  v7 = (struct CMILBrushBitmap **)((char *)a1 + 832);
  v8 = 0LL;
  v48 = a3;
  v9 = 0;
  v47 = a2;
  v10 = 0LL;
  v49 = a7;
  v46 = 0LL;
  if ( *((_QWORD *)a1 + 104)
    || (Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)a1 + 832),
        v36 = CMILBrushBitmap::Create(v35, v34, v7),
        v9 = v36,
        v36 >= 0) )
  {
    v13 = *v7;
    if ( *v7 )
    {
      v14 = *(void (**)(void))(*(_QWORD *)v13 + 8LL);
      if ( (char *)v14 == (char *)CBitmapOfDeviceBitmaps::AddRef )
        CBitmapOfDeviceBitmaps::AddRef(v13);
      else
        v14();
    }
    v10 = *v7;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x18Eu);
  }
  v42 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x12Eu);
  }
  else
  {
    v15 = v47;
    v16 = 0LL;
    v45 = 0LL;
    if ( v10 )
    {
      CMILBrushBitmapLocalSetterWrapper::Initialize(&v45, v10, v47, a5 & 0xFFFFFFFE, a6);
      v16 = v45;
    }
    v53 = 0;
    v54 = 0LL;
    v56 = 0;
    v58 = 0;
    v61 = 0LL;
    v50 = &CLegacyMilBrushRealizer::`vftable';
    v52 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
    v55 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
    v59 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
    v51 = 0;
    v57 = 3;
    v60 = 0LL;
    CMILBrush::SetDefaultRealizationPixelFormat((CMILBrush *)&v55);
    v50 = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
    v17 = ((unsigned __int64)v10 + 24) & -(__int64)(v10 != 0LL);
    if ( v61 )
      (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v61 + 16LL))(v61);
    v61 = (CMILBrushBitmap *)(((unsigned __int64)v10 + 24) & -(__int64)(v10 != 0LL));
    if ( v17 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 8LL))(((unsigned __int64)v10 + 24) & -(__int64)(v10 != 0LL));
      v17 = (__int64)v61;
      if ( v61 )
      {
        v18 = *(void (__fastcall **)(CMILBrushBitmap *__hidden))(*(_QWORD *)v61 + 48LL);
        if ( v18 == CMILBrushBitmap::SetDefaultRealizationPixelFormat )
          CMILBrushBitmap::SetDefaultRealizationPixelFormat(v61);
        else
          v18(v61);
        v17 = (__int64)v61;
      }
    }
    v19 = v48;
    if ( v48 )
    {
      *(_QWORD *)(v17 + 8) = *v48;
      *(_DWORD *)(v17 + 16) = *((_DWORD *)v19 + 2);
    }
    v20 = *v19;
    v70 = 0LL;
    v62[0] = &g_scratchContextState;
    v63 = *((_DWORD *)v19 + 2);
    v21 = *(_QWORD *)v15;
    v62[1] = &CMILMatrix::Identity;
    v62[2] = v20;
    v64 = a4;
    v22 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *, unsigned int *))(v21 + 48);
    v65 = 1;
    if ( v22 == CBitmap::GetSize )
      Size = CBitmap::GetSize(v15, &v43, &v44);
    else
      Size = v22(v15, &v43, &v44);
    v42 = Size;
    v9 = Size;
    if ( Size < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x15Du);
      v50 = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)&v50);
      CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v45);
      goto LABEL_33;
    }
    v66 = 1056964608;
    v67 = 1056964608;
    v68 = (float)(int)v43 - 0.5;
    v69 = (float)(int)v44 - 0.5;
    v24 = CHwBitmapColorSource::DeriveFromBrushAndContext(a1, v10, (const struct CHwBrushContext *)v62, &v46);
    v42 = v24;
    v9 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x169u);
      v50 = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)&v50);
      CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v45);
      v8 = v46;
    }
    else
    {
      v8 = v46;
      ++*((_DWORD *)a1 + 234);
      v25 = (*(__int64 (__fastcall **)(struct CHwTexturedColorSource *))(*(_QWORD *)v8 + 40LL))(v8);
      v42 = v25;
      v9 = v25;
      if ( v25 >= 0 )
      {
        v26 = (char *)a1 + 1008;
        *v49 = v8;
        for ( i = (char *)*((_QWORD *)a1 + 127);
              i != v26 && *((_DWORD *)i + 8) == *((_DWORD *)a1 + 234);
              i = (char *)*((_QWORD *)i + 1) )
        {
          *((_DWORD *)i + 8) = 0;
        }
        v28 = *(_QWORD *)i;
        if ( *(char **)i != v26 )
        {
          v32 = (_QWORD *)*((_QWORD *)a1 + 127);
          *(_QWORD *)i = v26;
          v33 = (_QWORD *)*((_QWORD *)a1 + 125);
          *((_QWORD *)a1 + 127) = i;
          *v33 = v28;
          *(_QWORD *)(v28 + 8) = v33;
          *((_QWORD *)a1 + 125) = v32;
          *v32 = (char *)a1 + 992;
        }
        --*((_DWORD *)a1 + 234);
        v50 = &CLegacyMilBrushRealizer::`vftable';
        if ( v61 )
          (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v61 + 16LL))(v61);
        v55 = &CMILBrushSolid::`vftable'{for `CMILBrush'};
        v59 = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
        v52 = &CMILCOMBase::`vftable';
        v50 = &CMILRefCountBase::`vftable';
        if ( v16 )
        {
          v29 = *(_DWORD *)(v16 + 112) + 1;
          if ( *(_DWORD *)(v16 + 112) == -1 )
            v29 = 1;
          *(_DWORD *)(v16 + 112) = v29;
          *(_QWORD *)(v16 + 192) = 0LL;
        }
        goto LABEL_33;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x170u);
      v37 = (char *)*((_QWORD *)a1 + 127);
      v38 = (char *)a1 + 1008;
      while ( v37 != v38 && *((_DWORD *)v37 + 8) == *((_DWORD *)a1 + 234) )
      {
        *((_DWORD *)v37 + 8) = 0;
        v37 = (char *)*((_QWORD *)v37 + 1);
      }
      v39 = *(_QWORD *)v37;
      if ( *(char **)v37 != v38 )
      {
        v40 = (_QWORD *)*((_QWORD *)a1 + 127);
        *(_QWORD *)v37 = v38;
        v41 = (_QWORD *)*((_QWORD *)a1 + 125);
        *((_QWORD *)a1 + 127) = v37;
        *v41 = v39;
        *(_QWORD *)(v39 + 8) = v41;
        *((_QWORD *)a1 + 125) = v40;
        *v40 = (char *)a1 + 992;
      }
      --*((_DWORD *)a1 + 234);
      v50 = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)&v50);
      CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v45);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CHwTexturedColorSource *))(*(_QWORD *)v8 + 8LL))(v8);
LABEL_33:
  if ( v10 )
  {
    v30 = *(unsigned int (__fastcall **)(CBitmapOfDeviceBitmaps *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v30 == CBitmapOfDeviceBitmaps::Release )
      CBitmapOfDeviceBitmaps::Release(v10);
    else
      v30(v10);
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v9, 0LL, &v42);
  return v42;
}
