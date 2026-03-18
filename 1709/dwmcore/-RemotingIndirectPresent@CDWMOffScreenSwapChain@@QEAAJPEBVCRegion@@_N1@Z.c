/*
 * XREFs of ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1801B1BEC
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B1910 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     McTemplateU0qn @ 0x1801B0BDC (McTemplateU0qn.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1801B10F0 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x1801B2118 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1801CA870 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::RemotingIndirectPresent(
        CDWMOffScreenSwapChain *this,
        FastRegion::Internal::CRgnData **a2,
        char a3,
        char a4)
{
  char v4; // r15
  CRegion *v5; // r12
  HRGN v7; // r13
  unsigned int v8; // r14d
  signed int v9; // eax
  FastRegion::Internal::CRgnData *v10; // rcx
  signed int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r10
  FastRegion::Internal::CRgnData *v15; // rcx
  unsigned int v16; // edi
  unsigned int v17; // r15d
  _QWORD *v18; // r12
  __int128 v19; // xmm1
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  _OWORD *v24; // rax
  signed int v25; // eax
  signed int v26; // eax
  __int64 v27; // rcx
  __int64 i; // rsi
  __int64 v29; // rax
  __int128 v30; // xmm1
  unsigned int v32; // [rsp+20h] [rbp-E8h]
  char v33; // [rsp+30h] [rbp-D8h]
  HRGN v35; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  unsigned int v38; // [rsp+58h] [rbp-B0h]
  FastRegion::Internal::CRgnData **v39; // [rsp+60h] [rbp-A8h]
  HGDIOBJ ho[2]; // [rsp+78h] [rbp-90h]
  __int128 v41; // [rsp+88h] [rbp-80h]
  __int128 v42; // [rsp+98h] [rbp-70h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B8h] [rbp-50h]
  struct tagRECT v45; // [rsp+C8h] [rbp-40h] BYREF

  v4 = a4;
  v5 = (CRegion *)a2;
  v39 = a2;
  v7 = 0LL;
  v8 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  if ( !*((_QWORD *)this + 67) || (v33 = 0, a3) )
    v33 = 1;
  if ( a2 && *(_DWORD *)*a2 && *((_QWORD *)this + 55) )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)&v42);
    while ( (unsigned __int64)v43 < *((_QWORD *)&v42 + 1) )
    {
      v45.top = *(_DWORD *)v43;
      v45.bottom = *(_DWORD *)(v43 + 8);
      v45.left = *(_DWORD *)(*((_QWORD *)&v43 + 1) + 8LL * v44);
      v45.right = *(_DWORD *)(*((_QWORD *)&v43 + 1) + 4LL * (2 * v44 + 1));
      v9 = CDWMOffScreenSwapChain::CopyFromTexture(this, &v45);
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x225u);
        goto LABEL_64;
      }
      FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)&v42);
    }
  }
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT)
    && **((_DWORD **)this + 34) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, 0);
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this + 34),
      (struct FastRegion::CRegion::Iterator *)&v42);
    v14 = Microsoft_Windows_Dwm_CoreEnableBits;
    while ( (unsigned __int64)v43 < *((_QWORD *)&v42 + 1) )
    {
      v45.top = *(_DWORD *)v43;
      v45.bottom = *(_DWORD *)(v43 + 8);
      v45.left = *(_DWORD *)(*((_QWORD *)&v43 + 1) + 8LL * v44);
      v15 = (FastRegion::Internal::CRgnData *)(2 * v44 + 1);
      v45.right = *(_DWORD *)(*((_QWORD *)&v43 + 1) + 4LL * (_QWORD)v15);
      if ( (v14 & 0x20) != 0 )
        McTemplateU0qn(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          *((__int64 *)&v43 + 1),
          *((_QWORD *)this + 55) == 0LL,
          v13,
          (__int64)&v45);
      FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)&v42);
    }
    if ( (v14 & 0x20) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
  }
  v16 = 0;
  if ( *((_DWORD *)this + 92) )
  {
    v17 = (unsigned int)v35;
    v18 = (_QWORD *)((char *)this + 344);
    do
    {
      v19 = *(_OWORD *)(*v18 + 48LL * v16 + 16);
      v20 = *(_DWORD *)(*v18 + 48LL * v16);
      v41 = *(_OWORD *)(*v18 + 48LL * v16 + 32);
      if ( v20 == 1 )
      {
        v43 = v41;
        v21 = v8 + 1;
        v42 = v19;
        if ( v8 + 1 >= v8 )
          v17 = v8 + 1;
        v22 = v21 < v8 ? 0x80070216 : 0;
        if ( v21 < v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0xB5u);
        }
        else if ( v17 > HIDWORD(v37) )
        {
          v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v36, 0x20u, 1, &v42);
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0xC0u);
          v8 = v38;
        }
        else
        {
          v23 = v8;
          v8 = v17;
          v24 = (_OWORD *)(v36 + 32 * v23);
          v38 = v17;
          *v24 = v19;
          v24[1] = v43;
        }
        if ( v33 )
          DynArray<_DWMIndirectMetaData,0>::RemoveAt((char *)this + 344, v16--, v12, v22);
      }
      ++v16;
    }
    while ( v16 < *((_DWORD *)this + 92) );
    v5 = (CRegion *)v39;
    v7 = v35;
    v4 = a4;
  }
  if ( !v33 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 67) + 56LL))(
            *((_QWORD *)this + 67),
            *((_QWORD *)this + 43),
            *((unsigned int *)this + 92));
    if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
      v11 = -2003304307;
    if ( v11 < 0 )
    {
      v32 = 651;
      goto LABEL_61;
    }
LABEL_54:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    {
      v29 = *((_QWORD *)this + 43);
      v30 = *(_OWORD *)(v29 + 48 * i + 16);
      LODWORD(v29) = *(_DWORD *)(v29 + 48 * i);
      *(_OWORD *)ho = v30;
      if ( !(_DWORD)v29 && ho[1] )
        DeleteObject(ho[1]);
    }
    goto LABEL_62;
  }
  if ( v5 )
  {
    CRegion::CreateHRGN(v5, &v35);
    v7 = v35;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, HRGN, _QWORD, _QWORD))(**((_QWORD **)this + 66) + 24LL))(
          *((_QWORD *)this + 66),
          v7,
          v36,
          v8);
  v11 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x268u);
    goto LABEL_62;
  }
  v27 = *((_QWORD *)this + 67);
  if ( !v27 || !*((_DWORD *)this + 92) || !v4 )
    goto LABEL_54;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 56LL))(v27, *((_QWORD *)this + 43));
  if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
    v11 = -2003304307;
  if ( v11 >= 0 )
    goto LABEL_54;
  v32 = 638;
LABEL_61:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v32);
LABEL_62:
  if ( v7 )
    DeleteObject(v7);
LABEL_64:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v36);
  return (unsigned int)v11;
}
