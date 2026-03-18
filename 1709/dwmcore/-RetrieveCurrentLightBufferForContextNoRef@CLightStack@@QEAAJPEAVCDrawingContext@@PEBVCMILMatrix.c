/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180068504 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x1800A0810 (-IsBlackLight@CCompositionSpotLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x1800B11E0 (-IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ.c)
 *     ?GetLightInfo@CCompositionAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1800B1270 (-GetLightInfo@CCompositionAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1800B7744 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x1800BB248 (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  signed int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // edi
  bool v11; // r12
  unsigned int v12; // esi
  __int64 v13; // r8
  char v14; // r10
  __int64 v15; // rdx
  unsigned int i; // ecx
  CCompositionSpotLight *v17; // rbx
  bool (__fastcall *v18)(CCompositionSpotLight *__hidden); // rax
  bool IsBlackLight; // al
  unsigned int v21; // eax
  unsigned int v22; // edx
  const struct LightInfo *v23; // rcx
  __int64 v24; // rdi
  CCompositionAmbientLight *v25; // rcx
  __int64 (__fastcall *v26)(CCompositionAmbientLight *__hidden, const struct CDrawingContext *, const struct CMILMatrix *, struct LightInfo *); // rax
  int v27; // eax
  int v28; // eax
  struct CMILMatrix *v29; // rax
  void *v30; // rcx
  signed int v31; // eax
  DWORD v32; // r9d
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  CCompositionSpotLight *v35; // [rsp+38h] [rbp-C8h] BYREF
  struct CMILMatrix *v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  struct CHwLightCollectionBuffer **v38; // [rsp+50h] [rbp-B0h]
  void *Buf2; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-98h]
  unsigned int v42; // [rsp+6Ch] [rbp-94h]
  unsigned int v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v45[160]; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+130h] [rbp+30h]
  int v47; // [rsp+174h] [rbp+74h]
  struct LightInfo *v48[2]; // [rsp+180h] [rbp+80h] BYREF
  int v49; // [rsp+190h] [rbp+90h]
  unsigned int v50[2]; // [rsp+194h] [rbp+94h]
  _BYTE v51[704]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = 0;
  v38 = a4;
  *a4 = 0LL;
  v36 = a3;
  if ( *((_DWORD *)this + 24) || !*((_DWORD *)this + 6) )
    return (unsigned int)v4;
  v43 = 0;
  v34 = 0LL;
  Buf2 = v44;
  v40 = v44;
  v41 = 3;
  v42 = 3;
  v8 = *((_QWORD *)a2 + 816);
  v37 = v8;
  if ( *((_BYTE *)a2 + 6520) )
  {
    if ( *((_BYTE *)a2 + 6521) )
      v9 = *((_QWORD *)a2 + 395);
    else
      v9 = *(_QWORD *)(v8 + 24);
    v34 = v9;
  }
  v10 = 0;
  v11 = 1;
  v12 = v34;
  do
  {
    v13 = *(_QWORD *)this;
    v14 = 1;
    if ( *(_DWORD *)(*(_QWORD *)this + 16LL * v10 + 8) != 1 )
    {
      v15 = 0LL;
      if ( v43 )
      {
        while ( *((_QWORD *)Buf2 + v15) != *(_QWORD *)(v13 + 16LL * v10) )
        {
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v43 )
            goto LABEL_10;
        }
        v14 = 0;
      }
LABEL_10:
      for ( i = v10 + 1; i < *((_DWORD *)this + 6); ++i )
      {
        if ( *(_DWORD *)(v13 + 16LL * i + 8) == 1 && *(_QWORD *)(v13 + 16LL * v10) == *(_QWORD *)(v13 + 16LL * i) )
        {
          v14 = 0;
          break;
        }
      }
      if ( v14 )
      {
        v17 = *(CCompositionSpotLight **)(v13 + 16LL * v10);
        v35 = v17;
        v18 = *(bool (__fastcall **)(CCompositionSpotLight *__hidden))(*(_QWORD *)v17 + 200LL);
        if ( v18 == CCompositionSpotLight::IsBlackLight )
        {
          IsBlackLight = CCompositionSpotLight::IsBlackLight(v17);
        }
        else if ( v18 == CCompositionAmbientLight::IsBlackLight )
        {
          IsBlackLight = CCompositionAmbientLight::IsBlackLight(v17);
        }
        else
        {
          IsBlackLight = v18(v17);
          v17 = v35;
        }
        if ( IsBlackLight
          || !(*(unsigned __int8 (__fastcall **)(CCompositionSpotLight *, __int64, __int64))(*(_QWORD *)v17 + 192LL))(
                v17,
                v37,
                v34) )
        {
          v11 = 0;
        }
        else
        {
          v21 = v43 + 1;
          if ( v43 + 1 >= v43 )
            v12 = v43 + 1;
          v4 = v21 < v43 ? 0x80070216 : 0;
          if ( v21 < v43 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB5u);
          }
          else if ( v12 > v42 )
          {
            v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&Buf2, 8u, 1, &v35);
            v4 = v31;
            if ( v31 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0xC0u);
          }
          else
          {
            *((_QWORD *)Buf2 + v43) = v35;
            v43 = v12;
          }
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x11Bu);
            goto LABEL_21;
          }
        }
      }
    }
    ++v10;
  }
  while ( v10 < *((_DWORD *)this + 6) );
  if ( v43 )
    v11 = 1;
  v4 = 0;
LABEL_21:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x8Cu);
    goto LABEL_73;
  }
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 28, (float *)a3)
    || *((_DWORD *)this + 52) != v43
    || memcmp_0(*((const void **)this + 23), Buf2, 8LL * v43) )
  {
    ReleaseInterface<CDisplay>((char *)this + 104);
  }
  if ( *((_QWORD *)this + 13) )
    goto LABEL_26;
  v22 = 0;
  v48[1] = (struct LightInfo *)v51;
  v23 = (const struct LightInfo *)v51;
  v48[0] = (struct LightInfo *)v51;
  v24 = 0LL;
  v49 = 3;
  *(_QWORD *)v50 = 3LL;
  if ( v43 )
  {
    while ( 1 )
    {
      v46 = 0;
      v47 = 0;
      v25 = (CCompositionAmbientLight *)*((_QWORD *)Buf2 + v24);
      v26 = *(__int64 (__fastcall **)(CCompositionAmbientLight *__hidden, const struct CDrawingContext *, const struct CMILMatrix *, struct LightInfo *))(*(_QWORD *)v25 + 176LL);
      v27 = v26 == CCompositionAmbientLight::GetLightInfo
          ? CCompositionAmbientLight::GetLightInfo(v25, a2, v36, (struct LightInfo *)v45)
          : v26(v25, a2, v36, (struct LightInfo *)v45);
      v4 = v27;
      if ( v27 < 0 )
        break;
      v28 = DynArray<LightInfo,0>::AddMultipleAndSet(v48, v45);
      v4 = v28;
      if ( v28 < 0 )
      {
        v33 = 163;
        goto LABEL_68;
      }
      v24 = (unsigned int)(v24 + 1);
      if ( (unsigned int)v24 >= v43 )
      {
        v22 = v50[1];
        v23 = v48[0];
        goto LABEL_49;
      }
    }
    v33 = 161;
    v32 = v27;
    goto LABEL_70;
  }
LABEL_49:
  v28 = CHwLightCollectionBuffer::Create(v23, v22, v11, (struct CHwLightCollectionBuffer **)this + 13);
  v4 = v28;
  if ( v28 < 0 )
  {
    v33 = 171;
LABEL_68:
    v32 = v28;
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, v33);
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)v48);
LABEL_73:
    DynArrayImpl<1>::~DynArrayImpl<1>(&Buf2);
    return (unsigned int)v4;
  }
  v29 = v36;
  *((_OWORD *)this + 7) = *(_OWORD *)v36;
  *((_OWORD *)this + 8) = *((_OWORD *)v29 + 1);
  *((_OWORD *)this + 9) = *((_OWORD *)v29 + 2);
  *((_OWORD *)this + 10) = *((_OWORD *)v29 + 3);
  *((_DWORD *)this + 44) = *((_DWORD *)v29 + 16);
  v30 = (void *)*((_QWORD *)this + 23);
  if ( v30 != *((void **)this + 24) )
  {
    WPF::ProcessHeapImpl::Free(v30);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_DWORD *)this + 52) = v43;
  *((_DWORD *)this + 51) = v42;
  v28 = DynArrayImpl<0>::DetachData((__int64)&Buf2, 8u, (_QWORD *)this + 23);
  v4 = v28;
  if ( v28 < 0 )
  {
    *(_QWORD *)((char *)this + 204) = 0LL;
    v33 = 174;
    goto LABEL_68;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)v48);
LABEL_26:
  *v38 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
  if ( Buf2 != v40 )
    WPF::ProcessHeapImpl::Free(Buf2);
  return (unsigned int)v4;
}
