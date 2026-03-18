/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180015DAC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x1800161F0 (-IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x18001622C (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x1800193AC (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ?AffectsVisual@CCompositionLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18002A750 (-AffectsVisual@CCompositionLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x18002A7F0 (-IsBlackLight@CCompositionSpotLight@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180079770 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800A6200 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?GetLightInfo@CCompositionAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1800C3870 (-GetLightInfo@CCompositionAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  int v4; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edi
  struct CVisual *v10; // r12
  struct CVisualTree *v11; // rax
  unsigned int v12; // esi
  char v13; // al
  __int64 v14; // rbx
  char v15; // r10
  __int64 v16; // rdx
  unsigned int i; // ecx
  CCompositionAmbientLight *v18; // rbx
  bool (__fastcall *v19)(CCompositionAmbientLight *__hidden); // rax
  char IsBlackLight; // al
  bool (__fastcall *v21)(CCompositionLight *__hidden, const struct CVisualTree *, struct CVisual *); // rax
  bool v22; // al
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rcx
  struct CHwLightCollectionBuffer *v26; // rax
  unsigned int v28; // edx
  const struct LightInfo *v29; // rcx
  __int64 v30; // r14
  struct CMILMatrix *v31; // rdi
  CCompositionAmbientLight *v32; // rcx
  __int64 (__fastcall *v33)(CCompositionAmbientLight *__hidden, const struct CDrawingContext *, const struct CMILMatrix *, struct LightInfo *); // rax
  int v34; // eax
  int v35; // eax
  struct CMILMatrix *v36; // rax
  void *v37; // rcx
  int v38; // eax
  int v39; // r9d
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  bool v41; // [rsp+30h] [rbp-D0h]
  unsigned int v42; // [rsp+34h] [rbp-CCh]
  CCompositionAmbientLight *v43; // [rsp+38h] [rbp-C8h] BYREF
  struct CVisualTree *v44; // [rsp+40h] [rbp-C0h]
  struct CMILMatrix *v45; // [rsp+48h] [rbp-B8h]
  struct CHwLightCollectionBuffer **v46; // [rsp+50h] [rbp-B0h]
  void *Buf2; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v48; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+6Ch] [rbp-94h]
  _BYTE v51[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v52[168]; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+17Ch] [rbp+7Ch]
  struct LightInfo *v55[2]; // [rsp+180h] [rbp+80h] BYREF
  int v56; // [rsp+190h] [rbp+90h]
  unsigned int v57[2]; // [rsp+194h] [rbp+94h]
  _BYTE v58[720]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = 0;
  v46 = a4;
  *a4 = 0LL;
  v45 = a3;
  if ( *((_DWORD *)this + 24) )
    return (unsigned int)v4;
  v8 = *((_DWORD *)this + 6);
  if ( !v8 )
    return (unsigned int)v4;
  v9 = 0;
  Buf2 = v51;
  v10 = 0LL;
  v48 = v51;
  v49 = 3;
  v50 = 3LL;
  v11 = (struct CVisualTree *)*((_QWORD *)a2 + 816);
  v44 = v11;
  if ( *((_BYTE *)a2 + 6520) )
  {
    if ( *((_BYTE *)a2 + 6521) )
      v10 = (struct CVisual *)*((_QWORD *)a2 + 395);
    else
      v10 = (struct CVisual *)*((_QWORD *)v11 + 3);
  }
  v12 = 0;
  v13 = 1;
  v41 = 1;
  do
  {
    v14 = *(_QWORD *)this;
    v15 = 1;
    if ( *(_DWORD *)(*(_QWORD *)this + 16LL * v12 + 8) == 1 )
      goto LABEL_26;
    v16 = 0LL;
    if ( v9 )
    {
      while ( *((_QWORD *)Buf2 + v16) != *(_QWORD *)(v14 + 16LL * v12) )
      {
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v9 )
          goto LABEL_9;
      }
      v15 = 0;
    }
LABEL_9:
    for ( i = v12 + 1; i < *((_DWORD *)this + 6); ++i )
    {
      if ( *(_DWORD *)(v14 + 16LL * i + 8) == 1 && *(_QWORD *)(v14 + 16LL * v12) == *(_QWORD *)(v14 + 16LL * i) )
      {
        v15 = 0;
        break;
      }
    }
    if ( !v15 )
      goto LABEL_24;
    v18 = *(CCompositionAmbientLight **)(v14 + 16LL * v12);
    v43 = v18;
    v19 = *(bool (__fastcall **)(CCompositionAmbientLight *__hidden))(*(_QWORD *)v18 + 200LL);
    if ( v19 == CCompositionAmbientLight::IsBlackLight )
    {
      IsBlackLight = CCompositionAmbientLight::IsBlackLight(v18);
    }
    else if ( v19 == CCompositionSpotLight::IsBlackLight )
    {
      IsBlackLight = CCompositionSpotLight::IsBlackLight(v18);
    }
    else
    {
      IsBlackLight = ((__int64 (__fastcall *)(CCompositionAmbientLight *, __int64))v19)(v18, v16);
      v9 = HIDWORD(v50);
      v18 = v43;
    }
    if ( IsBlackLight
      || ((v21 = *(bool (__fastcall **)(CCompositionLight *__hidden, const struct CVisualTree *, struct CVisual *))(*(_QWORD *)v18 + 192LL),
           v21 != CCompositionLight::AffectsVisual)
        ? (v22 = v21(v18, v44, v10), v9 = HIDWORD(v50))
        : (v22 = CCompositionLight::AffectsVisual(v18, v44, v10)),
          !v22) )
    {
      v13 = 0;
      v41 = 0;
      goto LABEL_25;
    }
    v23 = v42;
    v24 = v9 + 1;
    if ( v9 + 1 >= v9 )
      v23 = v9 + 1;
    v4 = v24 < v9 ? 0x80070216 : 0;
    v42 = v23;
    if ( v24 < v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else
    {
      if ( v23 <= (unsigned int)v50 )
      {
        v25 = v9;
        v9 = v23;
        *((_QWORD *)Buf2 + v25) = v43;
        HIDWORD(v50) = v23;
        goto LABEL_23;
      }
      v38 = DynArrayImpl<0>::AddMultipleAndSet(&Buf2, 8LL, 1LL, &v43);
      v4 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC0u);
    }
    v9 = HIDWORD(v50);
LABEL_23:
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x11Au);
      v9 = HIDWORD(v50);
      goto LABEL_30;
    }
LABEL_24:
    v13 = v41;
LABEL_25:
    v8 = *((_DWORD *)this + 6);
LABEL_26:
    ++v12;
  }
  while ( v12 < v8 );
  if ( v9 )
    v13 = 1;
  v41 = v13;
  v4 = 0;
LABEL_30:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x8Bu);
LABEL_79:
    DynArrayImpl<0>::~DynArrayImpl<0>(&Buf2);
    return (unsigned int)v4;
  }
  if ( !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 112, a3)
    || *((_DWORD *)this + 52) != v9
    || memcmp_0(*((const void **)this + 23), Buf2, 8LL * v9) )
  {
    ReleaseInterface<CDisplay>((char *)this + 104);
    v9 = HIDWORD(v50);
  }
  v26 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
  if ( !v26 )
  {
    v28 = 0;
    v55[1] = (struct LightInfo *)v58;
    v29 = (const struct LightInfo *)v58;
    v55[0] = (struct LightInfo *)v58;
    v30 = 0LL;
    v56 = 3;
    *(_QWORD *)v57 = 3LL;
    if ( v9 )
    {
      v31 = v45;
      while ( 1 )
      {
        v53 = 0;
        v54 = 0;
        v32 = (CCompositionAmbientLight *)*((_QWORD *)Buf2 + v30);
        v33 = *(__int64 (__fastcall **)(CCompositionAmbientLight *__hidden, const struct CDrawingContext *, const struct CMILMatrix *, struct LightInfo *))(*(_QWORD *)v32 + 176LL);
        v34 = v33 == CCompositionAmbientLight::GetLightInfo
            ? CCompositionAmbientLight::GetLightInfo(v32, a2, v31, (struct LightInfo *)v52)
            : v33(v32, a2, v31, (struct LightInfo *)v52);
        v4 = v34;
        if ( v34 < 0 )
          break;
        v35 = DynArray<LightInfo,0>::AddMultipleAndSet(v55, v52);
        v4 = v35;
        if ( v35 < 0 )
        {
          v40 = 162;
          goto LABEL_74;
        }
        v30 = (unsigned int)(v30 + 1);
        if ( (unsigned int)v30 >= HIDWORD(v50) )
        {
          v28 = v57[1];
          v29 = v55[0];
          goto LABEL_55;
        }
      }
      v40 = 160;
      v39 = v34;
    }
    else
    {
LABEL_55:
      v35 = CHwLightCollectionBuffer::Create(v29, v28, v41, (struct CHwLightCollectionBuffer **)this + 13);
      v4 = v35;
      if ( v35 < 0 )
      {
        v40 = 170;
      }
      else
      {
        v36 = v45;
        *((_OWORD *)this + 7) = *(_OWORD *)v45;
        *((_OWORD *)this + 8) = *((_OWORD *)v36 + 1);
        *((_OWORD *)this + 9) = *((_OWORD *)v36 + 2);
        *((_OWORD *)this + 10) = *((_OWORD *)v36 + 3);
        *((_DWORD *)this + 44) = *((_DWORD *)v36 + 16);
        v37 = (void *)*((_QWORD *)this + 23);
        if ( v37 != *((void **)this + 24) )
        {
          operator delete(v37);
          *((_QWORD *)this + 23) = 0LL;
        }
        *(_QWORD *)((char *)this + 204) = v50;
        v35 = DynArrayImpl<0>::DetachData(&Buf2, 8LL, (char *)this + 184);
        v4 = v35;
        if ( v35 >= 0 )
        {
          DynArrayImpl<0>::~DynArrayImpl<0>(v55);
          v26 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
          goto LABEL_35;
        }
        *(_QWORD *)((char *)this + 204) = 0LL;
        v40 = 173;
      }
LABEL_74:
      v39 = v35;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, v40);
    DynArrayImpl<0>::~DynArrayImpl<0>(v55);
    goto LABEL_79;
  }
LABEL_35:
  *v46 = v26;
  if ( Buf2 != v48 )
    operator delete(Buf2);
  return (unsigned int)v4;
}
