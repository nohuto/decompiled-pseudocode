/*
 * XREFs of ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800D8A3C
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800D8930 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1800D8FFC (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800D923C (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     McTemplateU0qn @ 0x1801EAA7C (McTemplateU0qn.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x1801EACC4 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::RemotingIndirectPresent(
        CDWMOffScreenSwapChain *this,
        FastRegion::Internal::CRgnData **a2,
        char a3,
        char a4)
{
  char v4; // r14
  CRegion *v5; // r12
  HRGN v7; // r13
  unsigned int v8; // r15d
  int v9; // eax
  FastRegion::Internal::CRgnData *v10; // rcx
  int v11; // edi
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 i; // rsi
  FastRegion::Internal::CRgnData *v17; // rcx
  int v18; // r9d
  char v19; // r10
  FastRegion::Internal::CRgnData *v20; // rcx
  unsigned int v21; // r14d
  _QWORD *v22; // r13
  __int128 v23; // xmm1
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  _OWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int128 v30; // xmm1
  unsigned int v31; // [rsp+20h] [rbp-E8h]
  char v32; // [rsp+30h] [rbp-D8h]
  HRGN v34; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h]
  unsigned int v37; // [rsp+58h] [rbp-B0h]
  FastRegion::Internal::CRgnData **v38; // [rsp+60h] [rbp-A8h]
  HGDIOBJ ho[2]; // [rsp+78h] [rbp-90h]
  __int128 v40; // [rsp+88h] [rbp-80h]
  __int128 v41; // [rsp+98h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-60h]
  int v43; // [rsp+B8h] [rbp-50h]
  struct tagRECT v44; // [rsp+C8h] [rbp-40h] BYREF

  v4 = a4;
  v5 = (CRegion *)a2;
  v38 = a2;
  v7 = 0LL;
  v8 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  if ( !*((_QWORD *)this + 68) || (v32 = 0, a3) )
    v32 = 1;
  if ( a2 && *(_DWORD *)*a2 && *((_QWORD *)this + 56) )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)&v41);
    while ( (unsigned __int64)v42 < *((_QWORD *)&v41 + 1) )
    {
      v44.top = *(_DWORD *)v42;
      v44.bottom = *(_DWORD *)(v42 + 8);
      v44.left = *(_DWORD *)(*((_QWORD *)&v42 + 1) + 8LL * v43);
      v44.right = *(_DWORD *)(*((_QWORD *)&v42 + 1) + 4LL * (2 * v43 + 1));
      v9 = CDWMOffScreenSwapChain::CopyFromTexture(this, &v44);
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x226u);
        goto LABEL_20;
      }
      FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)&v41);
    }
  }
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT) )
  {
    v17 = (FastRegion::Internal::CRgnData *)*((_QWORD *)this + 34);
    if ( *(_DWORD *)v17 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, 0LL);
        v17 = (FastRegion::Internal::CRgnData *)*((_QWORD *)this + 34);
      }
      FastRegion::Internal::CRgnData::BeginIterator(v17, (struct FastRegion::CRegion::Iterator *)&v41);
      v19 = Microsoft_Windows_Dwm_CoreEnableBits;
      while ( (unsigned __int64)v42 < *((_QWORD *)&v41 + 1) )
      {
        v44.top = *(_DWORD *)v42;
        v44.bottom = *(_DWORD *)(v42 + 8);
        v44.left = *(_DWORD *)(*((_QWORD *)&v42 + 1) + 8LL * v43);
        v20 = (FastRegion::Internal::CRgnData *)(2 * v43 + 1);
        v44.right = *(_DWORD *)(*((_QWORD *)&v42 + 1) + 4LL * (_QWORD)v20);
        if ( (v19 & 0x20) != 0 )
          McTemplateU0qn(
            (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
            DWORD2(v42),
            *((_QWORD *)this + 56) == 0LL,
            v18,
            (__int64)&v44);
        FastRegion::Internal::CRgnData::StepIterator(v20, (struct FastRegion::CRegion::Iterator *)&v41);
      }
      if ( (v19 & 0x20) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
    }
  }
  v12 = 0;
  if ( *((_DWORD *)this + 92) )
  {
    v21 = (unsigned int)v34;
    v22 = (_QWORD *)((char *)this + 344);
    do
    {
      v23 = *(_OWORD *)(*v22 + 48LL * v12 + 16);
      v24 = *(_DWORD *)(*v22 + 48LL * v12);
      v40 = *(_OWORD *)(*v22 + 48LL * v12 + 32);
      if ( v24 == 1 )
      {
        v42 = v40;
        v25 = v8 + 1;
        v41 = v23;
        if ( v8 + 1 >= v8 )
          v21 = v8 + 1;
        if ( v25 < v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25 < v8 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v21 > HIDWORD(v36) )
        {
          v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v35, 0x20u, 1, &v41);
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u);
          v8 = v37;
        }
        else
        {
          v26 = v8;
          v8 = v21;
          v27 = (_OWORD *)(v35 + 32 * v26);
          v37 = v21;
          *v27 = v23;
          v27[1] = v42;
        }
        if ( v32 )
          DynArray<_DWMIndirectMetaData,0>::RemoveAt((char *)this + 344, v12--);
      }
      ++v12;
    }
    while ( v12 < *((_DWORD *)this + 92) );
    v5 = (CRegion *)v38;
    v7 = v34;
    v4 = a4;
  }
  if ( !v32 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 68) + 56LL))(
            *((_QWORD *)this + 68),
            *((_QWORD *)this + 43));
    if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
      v11 = -2003304307;
    if ( v11 < 0 )
    {
      v31 = 652;
      goto LABEL_55;
    }
LABEL_17:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    {
      v29 = *((_QWORD *)this + 43);
      v30 = *(_OWORD *)(v29 + 48 * i + 16);
      LODWORD(v29) = *(_DWORD *)(v29 + 48 * i);
      *(_OWORD *)ho = v30;
      if ( !(_DWORD)v29 && ho[1] )
        DeleteObject(ho[1]);
    }
    goto LABEL_18;
  }
  if ( v5 )
  {
    CRegion::CreateHRGN(v5, &v34);
    v7 = v34;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, HRGN, _QWORD, _QWORD))(**((_QWORD **)this + 67) + 24LL))(
          *((_QWORD *)this + 67),
          v7,
          v35,
          v8);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x269u);
    goto LABEL_18;
  }
  v14 = *((_QWORD *)this + 68);
  if ( !v14 || !*((_DWORD *)this + 92) || !v4 )
    goto LABEL_17;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 56LL))(v14, *((_QWORD *)this + 43));
  if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
    v11 = -2003304307;
  if ( v11 >= 0 )
    goto LABEL_17;
  v31 = 639;
LABEL_55:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v31);
LABEL_18:
  if ( v7 )
    DeleteObject(v7);
LABEL_20:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v35);
  return (unsigned int)v11;
}
