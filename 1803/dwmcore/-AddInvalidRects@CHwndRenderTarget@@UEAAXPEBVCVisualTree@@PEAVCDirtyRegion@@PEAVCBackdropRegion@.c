/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800602F0
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x18000BDF4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800468C0 (-GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004F67C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x18007C100 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180098470 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DEA8 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18009E078 (-GetRectBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18013E76C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180158FE8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180170110 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801721EC (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  bool v4; // zf
  _DWORD *v8; // rdx
  bool v9; // si
  int v10; // eax
  float v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  CDirectFlipInfo *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  unsigned __int8 v19; // si
  __int64 v20; // r11
  bool v21; // al
  CHwFullScreenRenderTarget *v22; // rcx
  __int64 (__fastcall *v23)(CHwFullScreenRenderTarget *__hidden, const struct CMILMatrix *, struct CDirtyRegion *); // rax
  int v24; // eax
  CHwDisplayRenderTarget *v25; // r15
  char *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  char v29; // si
  __int64 j; // rdi
  __int64 v31; // rax
  __int128 v32; // xmm0
  CVisual *v33; // r13
  __int64 v34; // rax
  void (__fastcall *v35)(CHwDisplayRenderTarget *, struct MilRectF *); // rax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm5_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm7_4
  float v42; // xmm2_4
  unsigned int v43; // eax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v45; // r9d
  int v46; // r8d
  struct _LIST_ENTRY *Blink; // rdx
  int v48; // eax
  __int128 *v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // r9
  unsigned int v52; // r10d
  CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int64 v54; // rax
  __int64 v55; // r15
  unsigned int i; // r9d
  int v57; // r9d
  int v58; // eax
  __int128 *RectBounds; // rax
  __int64 v60; // r9
  unsigned int k; // r10d
  __int64 v62; // rax
  __int64 v63; // xmm1_8
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // xmm1_8
  __int64 v67; // rcx
  int v68; // ecx
  unsigned int v69; // [rsp+20h] [rbp-E0h]
  __int64 v70; // [rsp+30h] [rbp-D0h] BYREF
  struct CVisualTree *v71; // [rsp+38h] [rbp-C8h]
  _BYTE v72[64]; // [rsp+40h] [rbp-C0h] BYREF
  int v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+90h] [rbp-70h] BYREF
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int128 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v77; // [rsp+B0h] [rbp-50h]
  _BYTE v78[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v79[16]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = *((_BYTE *)this + 89) == 0;
  v71 = a2;
  if ( !v4 )
  {
    CDirtyRegion::SetFullDirty(a3);
    *((_BYTE *)this + 89) = 0;
  }
  v8 = (_DWORD *)*((_QWORD *)this + 12);
  v9 = 0;
  if ( !v8 )
    goto LABEL_7;
  v10 = v8[28];
  if ( ((v8[78] - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v10 - v8[26] == v8[33] - v8[31] && v8[29] - v8[27] == v8[32] - v8[30] )
      goto LABEL_7;
LABEL_80:
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 9) + 216LL))((char *)this - 72) )
    {
      v54 = *((_QWORD *)this + 96);
      if ( v54 )
        v9 = *(_BYTE *)(v54 + 1195) == 0;
    }
    goto LABEL_7;
  }
  if ( v10 - v8[26] != v8[32] - v8[30] || v8[29] - v8[27] != v8[33] - v8[31] )
    goto LABEL_80;
LABEL_7:
  *((_BYTE *)a3 + 2885) |= v9;
  v11 = 1.0
      / (float)((float)(*((float *)this + 42) * *((float *)this + 37))
              - (float)(*((float *)this + 41) * *((float *)this + 38)));
  if ( v11 > *((float *)a3 + 719) )
    *((float *)a3 + 719) = v11;
  v12 = *((_QWORD *)this + 14);
  if ( v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12)
      && (!*(_DWORD *)(*((_QWORD *)this - 7) + 284LL) || *((_BYTE *)this + 782)) )
    {
      *((_BYTE *)this + 780) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 780) )
        *((_BYTE *)this + 89) = 1;
      *((_BYTE *)this + 780) = 0;
    }
  }
  if ( *((_BYTE *)this + 89) )
  {
    CDirtyRegion::SetFullDirty(a3);
  }
  else
  {
    if ( (*((_BYTE *)this + 356) & 8) == 0 )
      CDirtyRegion::ConvertAnyDirtyToFullDirty(a3);
    v13 = *((_QWORD *)this + 58);
    if ( *((_DWORD *)this + 122) )
    {
      v55 = *((unsigned int *)this + 122);
      do
      {
        CDirtyRegion::Add(a3);
        v13 += 16LL;
        --v55;
      }
      while ( v55 );
    }
    v14 = *((_QWORD *)this + 96);
    if ( v14 )
    {
      v15 = *(CDirectFlipInfo **)(v14 + 1056);
      if ( v15 )
        CDirectFlipInfo::AddOverdrawToDirtyRegion(v15, a3, (CHwndRenderTarget *)((char *)this + 148));
    }
  }
  v16 = *((_QWORD *)this + 13);
  if ( v16 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v16 + 136LL))(v16, &v70, 0LL) >= 0 )
    {
      v19 = 0;
      if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
      {
        v17 = (unsigned int)dword_1802D6788;
        v18 = 0LL;
        if ( dword_1802D6788 )
        {
          while ( *(_QWORD *)(qword_1802D6770 + 12LL * (_QWORD)v18) != v70 )
          {
            v18 = (struct Windows::Foundation::Numerics::float4x4 *)(unsigned int)((_DWORD)v18 + 1);
            if ( (unsigned int)v18 >= dword_1802D6788 )
              goto LABEL_22;
          }
          v19 = *(_DWORD *)(qword_1802D6770 + 12LL * (_QWORD)v18 + 8) != 0;
        }
      }
LABEL_22:
      if ( v19 != (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct Windows::Foundation::Numerics::float4x4 *))(**((_QWORD **)this + 13) + 160LL))(
                    *((_QWORD *)this + 13),
                    v17,
                    v18) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 152LL))(*((_QWORD *)this + 13), v19);
        CDirtyRegion::SetFullDirty(a3);
      }
    }
    v20 = *((_QWORD *)this - 7);
    if ( *(_DWORD *)(v20 + 1304) && (*(_BYTE *)(v20 + 1347) || !CDirtyRegion::IsEmpty(a3)) )
    {
      *((_BYTE *)a3 + 2881) = 1;
      *(_BYTE *)(*((_QWORD *)this - 7) + 1347LL) = 0;
      v20 = *((_QWORD *)this - 7);
    }
    if ( *(_DWORD *)(v20 + 1308) )
      *((_BYTE *)a3 + 2882) = 1;
    v73 = *((_DWORD *)this + 53);
    v21 = Windows::Foundation::Numerics::invert(
            (CHwndRenderTarget *)((char *)this + 148),
            (const struct Windows::Foundation::Numerics::float4x4 *)v72,
            v18);
    LOWORD(v73) = v73 & 0xCCF;
    if ( !v21 )
      v73 = 0;
    v22 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 13);
    v23 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, const struct CMILMatrix *, struct CDirtyRegion *))(*(_QWORD *)v22 + 264LL);
    if ( v23 == CHwFullScreenRenderTarget::ContributeToDirtyRegion )
      v24 = CHwFullScreenRenderTarget::ContributeToDirtyRegion(v22, (const struct CMILMatrix *)v72, a3);
    else
      v24 = v23(v22, (const struct CMILMatrix *)v72, a3);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7B8,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\hwndrendertarget.cpp",
        (const char *)(unsigned int)v24,
        v69);
    v4 = *((_BYTE *)a3 + 2886) == 0;
    v25 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 13);
    v76 = 0uLL;
    if ( v4 )
    {
      v26 = (char *)a3 + 24;
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v76, v26);
        v26 = (char *)(v27 + 16);
      }
      while ( v28 != 1 );
    }
    else
    {
      for ( i = 0; i < *((_DWORD *)a3 + 319); i = v57 + 1 )
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v76, (char *)a3 + 16 * i + 1116);
    }
    v29 = 0;
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a4 + 10); v29 = 0 )
    {
      v31 = *((_QWORD *)a4 + 2);
      v32 = *(_OWORD *)(v31 + 24 * j + 8);
      v33 = *(CVisual **)(v31 + 24 * j);
      v34 = *(_QWORD *)v25;
      v77 = v32;
      v35 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(v34 + 336);
      if ( v35 == CHwDisplayRenderTarget::GetClippedDeviceBounds )
        CHwDisplayRenderTarget::GetClippedDeviceBounds(v25, (struct MilRectF *)&v74);
      else
        v35(v25, (struct MilRectF *)&v74);
      v36 = *(float *)&v74;
      if ( *(float *)&v77 > *(float *)&v74 )
      {
        LODWORD(v74) = v77;
        v36 = *(float *)&v77;
      }
      v37 = *((float *)&v74 + 1);
      v38 = *((float *)&v74 + 1);
      if ( *((float *)&v77 + 1) > *((float *)&v74 + 1) )
      {
        HIDWORD(v74) = DWORD1(v77);
        v37 = *((float *)&v77 + 1);
        v38 = *((float *)&v77 + 1);
      }
      v39 = *(float *)&v75;
      v40 = *(float *)&v75;
      if ( *(float *)&v75 > *((float *)&v77 + 2) )
      {
        LODWORD(v75) = DWORD2(v77);
        v39 = *((float *)&v77 + 2);
        v40 = *((float *)&v77 + 2);
      }
      v41 = *((float *)&v75 + 1);
      v42 = *((float *)&v75 + 1);
      if ( *((float *)&v75 + 1) > *((float *)&v77 + 3) )
      {
        HIDWORD(v75) = HIDWORD(v77);
        v41 = *((float *)&v77 + 3);
        v42 = *((float *)&v77 + 3);
      }
      if ( v40 <= v36 || v42 <= v38 )
      {
        v75 = 0LL;
        v74 = 0LL;
        goto LABEL_53;
      }
      if ( v40 > v36
        && v42 > v37
        && (v36 < *(float *)&v76
         || v37 < *((float *)&v76 + 1)
         || *((float *)&v76 + 2) < v39
         || *((float *)&v76 + 3) < v41)
        && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(&v76, &v74) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v33 + 27) + 4LL) & 0x10000) != 0 )
        {
          WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v33);
          if ( CWindowBackgroundTreatment::HasValidSource(
                 WindowBackgroundTreatmentInternal,
                 (int (__fastcall ***)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **))v25) )
          {
            goto LABEL_53;
          }
          v58 = CDirtyRegion::Add(a3);
          if ( v58 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x4Au);
            break;
          }
          RectBounds = (__int128 *)CDirtyRegion::GetRectBounds(a3, v78);
          v50 = *((_DWORD *)a4 + 10);
          v76 = *RectBounds;
          if ( (unsigned int)j < v50 )
          {
            v60 = *((_QWORD *)a4 + 2);
            for ( k = j; k < v50 - 1; v50 = *((_DWORD *)a4 + 10) )
            {
              v62 = k++;
              v63 = *(_QWORD *)(v60 + 24LL * k + 16);
              v64 = 3 * v62;
              *(_OWORD *)(v60 + 8 * v64) = *(_OWORD *)(v60 + 24LL * k);
              *(_QWORD *)(v60 + 8 * v64 + 16) = v63;
            }
LABEL_73:
            *((_DWORD *)a4 + 10) = v50 - 1;
          }
          else
          {
LABEL_108:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
          }
          v29 = 1;
          goto LABEL_53;
        }
        Flink = CVisual::FindTreeData(v33, v71)[8].Flink;
        if ( Flink )
        {
          while ( (CHwDisplayRenderTarget *)Flink[1].Flink != v25 )
          {
            Flink = Flink[5].Blink;
            if ( !Flink )
              goto LABEL_70;
          }
          v45 = (unsigned int)Flink[3].Flink;
          v46 = 0;
          if ( v45 )
          {
            Blink = Flink[1].Blink;
            while ( LODWORD(Blink[v46].Flink) || HIDWORD(Blink[v46].Flink) )
            {
              if ( ++v46 >= v45 )
                goto LABEL_70;
            }
            if ( Blink[v46].Blink && !CCommonRegistryData::m_fDisableDrawListCaching )
              goto LABEL_53;
          }
        }
LABEL_70:
        v48 = CDirtyRegion::Add(a3);
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x5Fu);
          break;
        }
        v49 = (__int128 *)CDirtyRegion::GetRectBounds(a3, v79);
        v50 = *((_DWORD *)a4 + 10);
        v76 = *v49;
        if ( (unsigned int)j >= v50 )
          goto LABEL_108;
        v51 = *((_QWORD *)a4 + 2);
        v52 = j;
        if ( (unsigned int)j >= v50 - 1 )
          goto LABEL_73;
        do
        {
          v65 = v52++;
          v66 = *(_QWORD *)(v51 + 24LL * v52 + 16);
          v67 = 3 * v65;
          *(_OWORD *)(v51 + 8 * v67) = *(_OWORD *)(v51 + 24LL * v52);
          *(_QWORD *)(v51 + 8 * v67 + 16) = v66;
          v68 = *((_DWORD *)a4 + 10);
        }
        while ( v52 < v68 - 1 );
        v29 = 1;
        *((_DWORD *)a4 + 10) = v68 - 1;
      }
LABEL_53:
      v43 = j + 1;
      j = 0LL;
      if ( !v29 )
        j = v43;
    }
  }
  *((_BYTE *)this + 89) = 0;
  *((_DWORD *)this + 122) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 464, 16LL);
}
