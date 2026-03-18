/*
 * XREFs of ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1801B9960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893D0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B9334 (-GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11Sh.c)
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x1801B93DC (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801B9564 (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::Present(
        CHDRConversionRenderTarget *this,
        char a2,
        bool a3,
        struct RenderTargetPresentParameters *a4)
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
  signed int v20; // eax
  __int64 v21; // rax
  _DWORD *v22; // rcx
  signed int v23; // eax
  signed int v24; // eax
  FastRegion::Internal::CRgnData *v25; // rcx
  signed int v26; // eax
  signed int v27; // eax
  FastRegion::Internal::CRgnData *v28; // rcx
  LONG v29; // r8d
  FastRegion::Internal::CRgnData *v30; // rdx
  const struct FastRegion::Internal::CRgnData **v31; // rdx
  LONG v32; // r8d
  FastRegion::Internal::CRgnData *v33; // rdx
  signed int v34; // eax
  FastRegion::Internal::CRgnData *v35; // rcx
  signed int v36; // eax
  __int64 result; // rax
  void **v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r8
  signed int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  signed int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r9
  unsigned int v49; // r8d
  unsigned int v50; // edx
  int v51; // ecx
  struct tagRECT v52; // xmm0
  enum DXGI_MODE_ROTATION v53; // eax
  signed int v54; // eax
  __int64 *v55; // rcx
  unsigned int v56; // r15d
  unsigned int v57; // r12d
  __int64 v58; // rax
  FastRegion::Internal::CRgnData *v59; // rcx
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
  v77 = *((_DWORD *)this - 19);
  v8 = *((_QWORD *)this - 24);
  v76 = v7;
  v63 = a3;
  v62 = a2;
  v9 = *(__int64 (__fastcall **)(char *))(v8 + 152);
  v66 = 0;
  v67 = 0;
  v78 = 0;
  v10 = v9((char *)this - 192);
  v12 = *((_DWORD *)this + 118);
  v79 = v10;
  if ( !v12 )
  {
    if ( **((_DWORD **)this + 48) )
    {
      v36 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 192),
              (const struct FastRegion::Internal::CRgnData **)this + 48);
      v15 = v36;
      if ( v36 < 0 )
      {
        v60 = 155;
        goto LABEL_46;
      }
      CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
        (CHDRConversionRenderTarget *)((char *)this - 192),
        &v66,
        &v67,
        &v70);
      v55 = (__int64 *)*((_QWORD *)this + 47);
      v56 = v66;
      v57 = v67;
      v86.left = 0;
      v58 = *v55;
      v86.top = 0;
      v86.right = v66;
      v86.bottom = v67;
      (*(void (__fastcall **)(__int64 *, __int64 *))(v58 + 24))(v55, v87);
      FastRegion::Internal::CRgnData::BeginIterator(
        *((FastRegion::Internal::CRgnData **)this + 48),
        (struct FastRegion::CRegion::Iterator *)v71);
      while ( (unsigned __int64)v73 < v72 )
      {
        v81.top = *v73;
        v81.bottom = v73[2];
        v81.left = *(_DWORD *)(v74 + 8LL * v75);
        v81.right = *(_DWORD *)(v74 + 4LL * (2 * v75 + 1));
        v36 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                (__int64)this - 192,
                (__int64)v70,
                v56,
                v57,
                DXGI_MODE_ROTATION_IDENTITY,
                (unsigned int *)&v86,
                (__int64)v87,
                (unsigned int *)&v86,
                (__int64)&v81);
        v15 = v36;
        if ( v36 < 0 )
        {
          v60 = 182;
          goto LABEL_46;
        }
        FastRegion::Internal::CRgnData::StepIterator(v59, (struct FastRegion::CRegion::Iterator *)v71);
      }
    }
    goto LABEL_44;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( *((_BYTE *)this + 768) )
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v92,
        (const struct tagRECT *)((char *)this + 136 * *((unsigned int *)this + 119) + 540));
      v61 = 0LL;
      v42 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 192),
              (const struct FastRegion::Internal::CRgnData **)v92);
      v15 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v42, 0xC8u);
      }
      else
      {
        v43 = *((_QWORD *)this + *((unsigned int *)this + 119) + 94) + 144LL;
        (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v43 + 32LL))(v43, &v65, &v64);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
        v44 = *((_QWORD *)this + *((unsigned int *)this + 119) + 94) + 144LL;
        v45 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v44 + 144LL))(v44, &v76, &v61);
        v15 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v45, 0xCEu);
        }
        else
        {
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
          v47 = *((_QWORD *)this + *((unsigned int *)this + 119) + 94) + 144LL;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 24LL))(v47, v87);
          v48 = 136LL * *((unsigned int *)this + 119);
          v49 = *(_DWORD *)((char *)this + v48 + 524);
          v50 = *(_DWORD *)((char *)this + v48 + 528);
          v51 = *(_DWORD *)((char *)this + v48 + 532);
          HIDWORD(v82[1]) = *(_DWORD *)((char *)this + v48 + 536);
          v82[0] = __PAIR64__(v50, v49);
          LODWORD(v82[1]) = v51;
          v52 = *(struct tagRECT *)v82;
          v83 = *(_QWORD *)((char *)this + v48 + 508);
          v84 = *(_DWORD *)((char *)this + v48 + 516);
          v85 = *(_DWORD *)((char *)this + v48 + 520);
          v53 = *(_DWORD *)((char *)this + v48 + 556);
          v82[0] = __PAIR64__(v50, v49);
          LODWORD(v82[1]) = v51;
          v81 = v52;
          v54 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                  (__int64)this - 192,
                  v46,
                  v65,
                  v64,
                  v53,
                  (unsigned int *)&v83,
                  (__int64)v87,
                  (unsigned int *)v82,
                  (__int64)&v81);
          v15 = v54;
          if ( v54 >= 0 )
          {
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
            FastRegion::CRegion::FreeMemory(v92);
            goto LABEL_44;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v54, 0xDCu);
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
      v38 = v92;
      goto LABEL_63;
    }
LABEL_44:
    LOBYTE(v11) = *((_BYTE *)this + 768) | v6;
    v36 = CHwFullScreenRenderTarget::Present(this, v11, v63, v80);
    v15 = v36;
    if ( v36 >= 0 )
      goto LABEL_47;
    v60 = 391;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, v60);
    goto LABEL_47;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v39 = *((_QWORD *)this + 5);
    v40 = 0LL;
    v68 = 0;
    v41 = 0LL;
    *(_QWORD *)v69 = 0LL;
    if ( v39 )
    {
      (*(void (__fastcall **)(__int64, LONG *, int *, _QWORD))(*(_QWORD *)v39 + 112LL))(v39, &v68, v69, 0LL);
      v40 = (unsigned int)v68;
      v41 = *(_QWORD *)v69;
    }
    v36 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _QWORD, _QWORD, __int64, __int64, char *))(*(_QWORD *)this + 344LL))(
            this,
            *((_QWORD *)this + 17 * *((unsigned int *)this + 119) + 61),
            *((unsigned int *)this + 34 * *((unsigned int *)this + 119) + 145),
            v40,
            v41,
            (char *)this + 136 * *((unsigned int *)this + 119) + 524);
    v15 = v36;
    if ( v36 < 0 )
    {
      v60 = 244;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  if ( v14 == 1 )
  {
    v16 = *((_DWORD *)this + 169);
    v17 = *((_DWORD *)this + 170);
    v18 = *((_DWORD *)this + 171);
    v81 = *(struct tagRECT *)((char *)this + 540);
    v68 = *((_DWORD *)this + 172);
    v86.bottom = v68;
    v86.left = v16;
    v86.top = v17;
    v86.right = v18;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v93, &v81);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v92, &v86);
    v89 = 0;
    v88 = (FastRegion::Internal::CRgnData *)&v89;
    v19 = (_DWORD **)((char *)this + 384);
    FastRegion::CRegion::Intersect(
      (const struct FastRegion::Internal::CRgnData **)this + 48,
      (const struct FastRegion::Internal::CRgnData **)v93);
    CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
      (CHDRConversionRenderTarget *)((char *)this - 192),
      &v66,
      &v67,
      &v70);
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 95) + 144LL) + 32LL))(
      *((_QWORD *)this + 95) + 144LL,
      &v65,
      &v64);
    v61 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 95) + 144LL) + 144LL))(
            *((_QWORD *)this + 95) + 144LL,
            &v76,
            &v61);
    v15 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x11Au);
      goto LABEL_49;
    }
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
    v22 = *v19;
    *(_QWORD *)v69 = v21;
    if ( *v22 )
    {
      v91 = 0;
      v90 = (FastRegion::Internal::CRgnData *)&v91;
      v23 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 192),
              (const struct FastRegion::Internal::CRgnData **)this + 48);
      v15 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x124u);
LABEL_22:
        FastRegion::CRegion::FreeMemory((void **)&v90);
LABEL_49:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v61);
        FastRegion::CRegion::FreeMemory((void **)&v88);
        FastRegion::CRegion::FreeMemory(v92);
        v38 = v93;
LABEL_63:
        FastRegion::CRegion::FreeMemory(v38);
        goto LABEL_47;
      }
      FastRegion::CRegion::Copy(&v90, (const struct FastRegion::Internal::CRgnData **)this + 48);
      FastRegion::CRegion::Subtract(&v90, (const struct FastRegion::Internal::CRgnData **)v92);
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 47) + 24LL))(*((_QWORD *)this + 47), v87);
      FastRegion::Internal::CRgnData::BeginIterator(v90, (struct FastRegion::CRegion::Iterator *)v71);
      while ( (unsigned __int64)v73 < v72 )
      {
        v81.top = *v73;
        v81.bottom = v73[2];
        v81.left = *(_DWORD *)(v74 + 8LL * v75);
        v81.right = *(_DWORD *)(v74 + 4LL * (2 * v75 + 1));
        v83 = *(_QWORD *)((char *)this + 524);
        v84 = *((_DWORD *)this + 133);
        v85 = *((_DWORD *)this + 134);
        v82[0] = *(_QWORD *)((char *)this + 508);
        v82[1] = *(_QWORD *)((char *)this + 516);
        v24 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                (__int64)this - 192,
                (__int64)v70,
                v66,
                v67,
                (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 139),
                (unsigned int *)v82,
                (__int64)v87,
                (unsigned int *)&v83,
                (__int64)&v81);
        v15 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x13Au);
          goto LABEL_22;
        }
        FastRegion::Internal::CRgnData::StepIterator(v25, (struct FastRegion::CRegion::Iterator *)v71);
      }
      FastRegion::CRegion::FreeMemory((void **)&v90);
    }
    if ( !*((_BYTE *)this + 768) )
      goto LABEL_31;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v90, &v86);
    v26 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
            (CHDRConversionRenderTarget *)((char *)this - 192),
            &v90);
    v15 = v26;
    if ( v26 >= 0 )
    {
      FastRegion::CRegion::Subtract(&v90, (const struct FastRegion::Internal::CRgnData **)v93);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 95) + 144LL) + 24LL))(
        *((_QWORD *)this + 95) + 144LL,
        v87);
      FastRegion::Internal::CRgnData::BeginIterator(v90, (struct FastRegion::CRegion::Iterator *)v71);
      while ( (unsigned __int64)v73 < v72 )
      {
        v81.top = *v73;
        v81.bottom = v73[2];
        v81.left = *(_DWORD *)(v74 + 8LL * v75);
        v81.right = *(_DWORD *)(v74 + 4LL * (2 * v75 + 1));
        v82[0] = *(_QWORD *)((char *)this + 660);
        v82[1] = *(_QWORD *)((char *)this + 668);
        v83 = *(_QWORD *)((char *)this + 644);
        v84 = *((_DWORD *)this + 163);
        v85 = *((_DWORD *)this + 164);
        v27 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                (__int64)this - 192,
                *(__int64 *)v69,
                v65,
                v64,
                (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 173),
                (unsigned int *)&v83,
                (__int64)v87,
                (unsigned int *)v82,
                (__int64)&v81);
        v15 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x157u);
          goto LABEL_22;
        }
        FastRegion::Internal::CRgnData::StepIterator(v28, (struct FastRegion::CRegion::Iterator *)v71);
      }
      FastRegion::CRegion::FreeMemory((void **)&v90);
      if ( *((_BYTE *)this + 768) )
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
      v31 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 384);
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
                (__int64)this - 192,
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
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x179u);
          goto LABEL_49;
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x144u);
    goto LABEL_22;
  }
  v15 = -2003292412;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x17Fu);
LABEL_47:
  **((_DWORD **)this + 48) = 0;
  result = v15;
  *((_BYTE *)this + 768) = 0;
  return result;
}
