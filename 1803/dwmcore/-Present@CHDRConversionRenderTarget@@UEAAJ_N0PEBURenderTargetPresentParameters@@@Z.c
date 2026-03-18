/*
 * XREFs of ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1801F31D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801F2BA4 (-GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11Sh.c)
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x1801F2C4C (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801F2DD4 (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::Present(
        CHDRConversionRenderTarget *this,
        char a2,
        bool a3,
        const struct RenderTargetPresentParameters *a4)
{
  __int64 v4; // rax
  char v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(char *); // rax
  char v10; // al
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ebx
  LONG v16; // r14d
  LONG v17; // r13d
  LONG v18; // r15d
  _DWORD **v19; // r12
  int v20; // eax
  __int64 v21; // rax
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  FastRegion::Internal::CRgnData *v25; // rcx
  int v26; // eax
  int v27; // eax
  FastRegion::Internal::CRgnData *v28; // rcx
  LONG v29; // r8d
  FastRegion::Internal::CRgnData *v30; // rdx
  const struct FastRegion::Internal::CRgnData **v31; // rdx
  LONG v32; // r8d
  FastRegion::Internal::CRgnData *v33; // rdx
  int v34; // eax
  FastRegion::Internal::CRgnData *v35; // rcx
  int v36; // eax
  void **v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r9
  unsigned int v48; // r8d
  unsigned int v49; // edx
  int v50; // ecx
  struct tagRECT v51; // xmm0
  enum DXGI_MODE_ROTATION v52; // eax
  int v53; // eax
  __int64 *v54; // rcx
  unsigned int v55; // r15d
  unsigned int v56; // r12d
  __int64 v57; // rax
  FastRegion::Internal::CRgnData *v58; // rcx
  __int64 result; // rax
  unsigned int v60; // [rsp+20h] [rbp-E0h]
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  char v62; // [rsp+58h] [rbp-A8h]
  bool v63; // [rsp+59h] [rbp-A7h]
  int v64; // [rsp+5Ch] [rbp-A4h] BYREF
  int v65; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v67; // [rsp+68h] [rbp-98h] BYREF
  LONG v68; // [rsp+6Ch] [rbp-94h] BYREF
  int v69[2]; // [rsp+70h] [rbp-90h] BYREF
  struct ID3D11ShaderResourceView *v70; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v71[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v72; // [rsp+88h] [rbp-78h]
  LONG *v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+98h] [rbp-68h]
  int v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+B0h] [rbp-50h] BYREF
  int v77; // [rsp+B8h] [rbp-48h]
  int v78; // [rsp+BCh] [rbp-44h]
  char v79; // [rsp+C0h] [rbp-40h]
  struct RenderTargetPresentParameters *v80; // [rsp+C8h] [rbp-38h]
  struct tagRECT v81; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v82[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-10h] BYREF
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+FCh] [rbp-4h]
  struct tagRECT v86; // [rsp+100h] [rbp+0h] BYREF
  __int64 v87[2]; // [rsp+110h] [rbp+10h] BYREF
  FastRegion::Internal::CRgnData *v88; // [rsp+120h] [rbp+20h] BYREF
  int v89; // [rsp+128h] [rbp+28h] BYREF
  FastRegion::Internal::CRgnData *v90; // [rsp+170h] [rbp+70h] BYREF
  int v91; // [rsp+178h] [rbp+78h] BYREF
  void *v92[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v93[10]; // [rsp+210h] [rbp+110h] BYREF

  v4 = *((_QWORD *)this + 1);
  v80 = a4;
  v65 = 0;
  v6 = a2;
  v64 = 0;
  v7 = *(_QWORD *)(v4 + 728);
  v77 = *((_DWORD *)this - 25);
  v8 = *((_QWORD *)this - 27);
  v76 = v7;
  v63 = a3;
  v62 = a2;
  v9 = *(__int64 (__fastcall **)(char *))(v8 + 160);
  v66 = 0;
  v67 = 0;
  v78 = 0;
  v10 = v9((char *)this - 216);
  v12 = *((_DWORD *)this + 122);
  v79 = v10;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( !*((_BYTE *)this + 784) )
        goto LABEL_44;
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v92,
        (const struct tagRECT *)((char *)this + 136 * *((unsigned int *)this + 123) + 556));
      v61 = 0LL;
      v41 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 216),
              (const struct FastRegion::Internal::CRgnData **)v92);
      v15 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xC8u);
      }
      else
      {
        v42 = *((_QWORD *)this + *((unsigned int *)this + 123) + 96) + 144LL;
        (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v42 + 32LL))(v42, &v65, &v64);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
        v43 = *((_QWORD *)this + *((unsigned int *)this + 123) + 96) + 144LL;
        v44 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v43 + 144LL))(v43, &v76, &v61);
        v15 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xCEu);
        }
        else
        {
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
          v46 = *((_QWORD *)this + *((unsigned int *)this + 123) + 96) + 144LL;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 24LL))(v46, v87);
          v47 = 136LL * *((unsigned int *)this + 123);
          v48 = *(_DWORD *)((char *)this + v47 + 540);
          v49 = *(_DWORD *)((char *)this + v47 + 544);
          v50 = *(_DWORD *)((char *)this + v47 + 548);
          HIDWORD(v82[1]) = *(_DWORD *)((char *)this + v47 + 552);
          v82[0] = __PAIR64__(v49, v48);
          LODWORD(v82[1]) = v50;
          v51 = *(struct tagRECT *)v82;
          v83 = *(_QWORD *)((char *)this + v47 + 524);
          v84 = *(_DWORD *)((char *)this + v47 + 532);
          v85 = *(_DWORD *)((char *)this + v47 + 536);
          v52 = *(_DWORD *)((char *)this + v47 + 572);
          v82[0] = __PAIR64__(v49, v48);
          LODWORD(v82[1]) = v50;
          v81 = v51;
          v53 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                  (__int64)this - 216,
                  v45,
                  v65,
                  v64,
                  v52,
                  (unsigned int *)&v83,
                  (__int64)v87,
                  (unsigned int *)v82,
                  (__int64)&v81);
          v15 = v53;
          if ( v53 >= 0 )
          {
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
            FastRegion::CRegion::FreeMemory(v92);
            goto LABEL_44;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xDCu);
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
      v37 = v92;
LABEL_62:
      FastRegion::CRegion::FreeMemory(v37);
      goto LABEL_73;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v15 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x17Fu);
        goto LABEL_73;
      }
      v16 = *((_DWORD *)this + 173);
      v17 = *((_DWORD *)this + 174);
      v18 = *((_DWORD *)this + 175);
      v81 = *(struct tagRECT *)((char *)this + 556);
      v68 = *((_DWORD *)this + 176);
      v86.bottom = v68;
      v86.left = v16;
      v86.top = v17;
      v86.right = v18;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v93, &v81);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v92, &v86);
      v89 = 0;
      v88 = (FastRegion::Internal::CRgnData *)&v89;
      v19 = (_DWORD **)((char *)this + 400);
      FastRegion::CRegion::Intersect(
        (const struct FastRegion::Internal::CRgnData **)this + 50,
        (const struct FastRegion::Internal::CRgnData **)v93);
      CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
        (CHDRConversionRenderTarget *)((char *)this - 216),
        &v66,
        &v67,
        &v70);
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 97) + 144LL) + 32LL))(
        *((_QWORD *)this + 97) + 144LL,
        &v65,
        &v64);
      v61 = 0LL;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 97) + 144LL)
                                                                     + 144LL))(
              *((_QWORD *)this + 97) + 144LL,
              &v76,
              &v61);
      v15 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x11Au);
        goto LABEL_48;
      }
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
      v22 = *v19;
      *(_QWORD *)v69 = v21;
      if ( *v22 )
      {
        v91 = 0;
        v90 = (FastRegion::Internal::CRgnData *)&v91;
        v23 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
                (CHDRConversionRenderTarget *)((char *)this - 216),
                (const struct FastRegion::Internal::CRgnData **)this + 50);
        v15 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x124u);
LABEL_22:
          FastRegion::CRegion::FreeMemory((void **)&v90);
LABEL_48:
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
          FastRegion::CRegion::FreeMemory((void **)&v88);
          FastRegion::CRegion::FreeMemory(v92);
          v37 = v93;
          goto LABEL_62;
        }
        FastRegion::CRegion::Copy((int **)&v90, (int **)this + 50);
        FastRegion::CRegion::Subtract(&v90, (const struct FastRegion::Internal::CRgnData **)v92);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 49) + 24LL))(*((_QWORD *)this + 49), v87);
        FastRegion::Internal::CRgnData::BeginIterator(v90, (struct FastRegion::CRegion::Iterator *)v71);
        while ( (unsigned __int64)v73 < v72 )
        {
          v81.top = *v73;
          v81.bottom = v73[2];
          v81.left = *(_DWORD *)(v74 + 8LL * v75);
          v81.right = *(_DWORD *)(v74 + 4LL * (2 * v75 + 1));
          v83 = *(_QWORD *)((char *)this + 540);
          v84 = *((_DWORD *)this + 137);
          v85 = *((_DWORD *)this + 138);
          v82[0] = *(_QWORD *)((char *)this + 524);
          v82[1] = *(_QWORD *)((char *)this + 532);
          v24 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                  (__int64)this - 216,
                  (__int64)v70,
                  v66,
                  v67,
                  (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 143),
                  (unsigned int *)v82,
                  (__int64)v87,
                  (unsigned int *)&v83,
                  (__int64)&v81);
          v15 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x13Au);
            goto LABEL_22;
          }
          FastRegion::Internal::CRgnData::StepIterator(v25, (struct FastRegion::CRegion::Iterator *)v71);
        }
        FastRegion::CRegion::FreeMemory((void **)&v90);
      }
      if ( !*((_BYTE *)this + 784) )
        goto LABEL_31;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v90, &v86);
      v26 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 216),
              &v90);
      v15 = v26;
      if ( v26 >= 0 )
      {
        FastRegion::CRegion::Subtract(&v90, (const struct FastRegion::Internal::CRgnData **)v93);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 97) + 144LL) + 24LL))(
          *((_QWORD *)this + 97) + 144LL,
          v87);
        FastRegion::Internal::CRgnData::BeginIterator(v90, (struct FastRegion::CRegion::Iterator *)v71);
        while ( (unsigned __int64)v73 < v72 )
        {
          v81.top = *v73;
          v81.bottom = v73[2];
          v81.left = *(_DWORD *)(v74 + 8LL * v75);
          v81.right = *(_DWORD *)(v74 + 4LL * (2 * v75 + 1));
          v82[0] = *(_QWORD *)((char *)this + 676);
          v82[1] = *(_QWORD *)((char *)this + 684);
          v83 = *(_QWORD *)((char *)this + 660);
          v84 = *((_DWORD *)this + 167);
          v85 = *((_DWORD *)this + 168);
          v27 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                  (__int64)this - 216,
                  *(__int64 *)v69,
                  v65,
                  v64,
                  (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 177),
                  (unsigned int *)&v83,
                  (__int64)v87,
                  (unsigned int *)v82,
                  (__int64)&v81);
          v15 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x157u);
            goto LABEL_22;
          }
          FastRegion::Internal::CRgnData::StepIterator(v28, (struct FastRegion::CRegion::Iterator *)v71);
        }
        FastRegion::CRegion::FreeMemory((void **)&v90);
        if ( *((_BYTE *)this + 784) )
        {
          if ( v16 >= v18 || (v29 = v68, v17 >= v68) )
          {
            *(_DWORD *)v88 = 0;
          }
          else
          {
            v30 = v88;
            *(_DWORD *)v88 = 2;
            *((_DWORD *)v30 + 1) = v16;
            *((_DWORD *)v30 + 2) = v18;
            *((_DWORD *)v30 + 3) = v17;
            *((_DWORD *)v30 + 4) = 16;
            *((_DWORD *)v30 + 7) = v16;
            *((_DWORD *)v30 + 8) = v18;
            *((_DWORD *)v30 + 5) = v29;
            *((_DWORD *)v30 + 6) = 16;
          }
          v31 = (const struct FastRegion::Internal::CRgnData **)v93;
          goto LABEL_37;
        }
LABEL_31:
        if ( !**v19 )
          goto LABEL_38;
        if ( v16 >= v18 || (v32 = v68, v17 >= v68) )
        {
          *(_DWORD *)v88 = 0;
        }
        else
        {
          v33 = v88;
          *(_DWORD *)v88 = 2;
          *((_DWORD *)v33 + 1) = v16;
          *((_DWORD *)v33 + 2) = v18;
          *((_DWORD *)v33 + 3) = v17;
          *((_DWORD *)v33 + 4) = 16;
          *((_DWORD *)v33 + 7) = v16;
          *((_DWORD *)v33 + 8) = v18;
          *((_DWORD *)v33 + 5) = v32;
          *((_DWORD *)v33 + 6) = 16;
        }
        v31 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 400);
LABEL_37:
        FastRegion::CRegion::Intersect(&v88, v31);
LABEL_38:
        FastRegion::Internal::CRgnData::BeginIterator(v88, (struct FastRegion::CRegion::Iterator *)v71);
        while ( (unsigned __int64)v73 < v72 )
        {
          v81.top = *v73;
          v81.bottom = v73[2];
          v81.left = *(_DWORD *)(v74 + 8LL * v75);
          v81.right = *(_DWORD *)(v74 + 4LL * (2 * v75 + 1));
          v34 = CHDRConversionRenderTarget::HDRConvertWithFakeOverlay(
                  (__int64)this - 216,
                  (__int64)v70,
                  v66,
                  v67,
                  *(__int64 *)v69,
                  v65,
                  v64,
                  (__int64)&v81);
          v15 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x179u);
            goto LABEL_48;
          }
          FastRegion::Internal::CRgnData::StepIterator(v35, (struct FastRegion::CRegion::Iterator *)v71);
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
        FastRegion::CRegion::FreeMemory((void **)&v88);
        FastRegion::CRegion::FreeMemory(v92);
        FastRegion::CRegion::FreeMemory(v93);
        v6 = v62;
        goto LABEL_44;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x144u);
      goto LABEL_22;
    }
    v38 = *((_QWORD *)this + 4);
    v39 = 0LL;
    v68 = 0;
    v40 = 0LL;
    *(_QWORD *)v69 = 0LL;
    if ( v38 )
    {
      (*(void (__fastcall **)(__int64, LONG *, int *, _QWORD))(*(_QWORD *)v38 + 120LL))(v38, &v68, v69, 0LL);
      v39 = (unsigned int)v68;
      v40 = *(_QWORD *)v69;
    }
    v36 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _QWORD, _QWORD, __int64, __int64, char *))(*(_QWORD *)this + 392LL))(
            this,
            *((_QWORD *)this + 17 * *((unsigned int *)this + 123) + 63),
            *((unsigned int *)this + 34 * *((unsigned int *)this + 123) + 149),
            v39,
            v40,
            (char *)this + 136 * *((unsigned int *)this + 123) + 540);
    v15 = v36;
    if ( v36 >= 0 )
      goto LABEL_44;
    v60 = 244;
LABEL_72:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, v60);
    goto LABEL_73;
  }
  if ( !**((_DWORD **)this + 50) )
    goto LABEL_44;
  v36 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
          (CHDRConversionRenderTarget *)((char *)this - 216),
          (const struct FastRegion::Internal::CRgnData **)this + 50);
  v15 = v36;
  if ( v36 < 0 )
  {
    v60 = 155;
    goto LABEL_72;
  }
  CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
    (CHDRConversionRenderTarget *)((char *)this - 216),
    &v66,
    &v67,
    &v70);
  v54 = (__int64 *)*((_QWORD *)this + 49);
  v55 = v66;
  v56 = v67;
  v86.left = 0;
  v57 = *v54;
  v86.top = 0;
  v86.right = v66;
  v86.bottom = v67;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v57 + 24))(v54, v87);
  FastRegion::Internal::CRgnData::BeginIterator(
    *((FastRegion::Internal::CRgnData **)this + 50),
    (struct FastRegion::CRegion::Iterator *)v71);
  while ( (unsigned __int64)v73 < v72 )
  {
    v81.top = *v73;
    v81.bottom = v73[2];
    v81.left = *(_DWORD *)(v74 + 8LL * v75);
    v81.right = *(_DWORD *)(v74 + 4LL * (2 * v75 + 1));
    v36 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
            (__int64)this - 216,
            (__int64)v70,
            v55,
            v56,
            DXGI_MODE_ROTATION_IDENTITY,
            (unsigned int *)&v86,
            (__int64)v87,
            (unsigned int *)&v86,
            (__int64)&v81);
    v15 = v36;
    if ( v36 < 0 )
    {
      v60 = 182;
      goto LABEL_72;
    }
    FastRegion::Internal::CRgnData::StepIterator(v58, (struct FastRegion::CRegion::Iterator *)v71);
  }
LABEL_44:
  LOBYTE(v11) = *((_BYTE *)this + 784) | v6;
  v36 = CHwFullScreenRenderTarget::Present(this, v11, v63, v80);
  v15 = v36;
  if ( v36 < 0 )
  {
    v60 = 391;
    goto LABEL_72;
  }
  if ( g_LockAndReadTarget )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 49) + 224LL))(
      *((_QWORD *)this + 49),
      0LL,
      0LL);
LABEL_73:
  **((_DWORD **)this + 50) = 0;
  result = v15;
  *((_BYTE *)this + 784) = 0;
  return result;
}
