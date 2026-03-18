/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801A7A0C
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x180211688 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801AF4F4 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CVisual::GetPolygonNoRef(
        __int64 a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        char a7,
        char a8,
        char a9,
        __int64 *a10)
{
  __int64 v11; // rax
  int v12; // ebx
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // r9d
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  __int128 v35; // [rsp+68h] [rbp-A0h]
  __int128 v36; // [rsp+68h] [rbp-A0h]
  __int128 v37; // [rsp+68h] [rbp-A0h]
  __int128 v38; // [rsp+68h] [rbp-A0h]
  __int64 v39[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v40; // [rsp+90h] [rbp-78h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+B0h] [rbp-58h]
  _QWORD v43[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v44; // [rsp+C8h] [rbp-40h]
  unsigned int v45; // [rsp+CCh] [rbp-3Ch]
  unsigned int v46; // [rsp+D0h] [rbp-38h]
  _BYTE v47[80]; // [rsp+D8h] [rbp-30h] BYREF

  v11 = 0LL;
  v12 = 0;
  v39[0] = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && !a9 )
    goto LABEL_40;
  v46 = 0;
  v43[0] = v47;
  v43[1] = v47;
  v44 = 4;
  v45 = 4;
  v42 = 1;
  *(_OWORD *)&v39[1] = _xmm;
  if ( a9 )
  {
    v40 = *(_OWORD *)(a1 + 164);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a1 + 192LL))(a1, 0LL, &v40);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x16C1u);
LABEL_48:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v43);
      goto LABEL_49;
    }
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 288LL))(a1, &v40, &v40);
  *((_QWORD *)&v35 + 1) = 0x3F80000000000000LL;
  v16 = v46 + 1;
  *(_QWORD *)&v35 = v40;
  v12 = v46 + 1 < v46 ? 0x80070216 : 0;
  v41 = v35;
  if ( v46 + 1 < v46 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else
  {
    if ( v16 <= v45 )
    {
      v17 = v43[0];
      v18 = 5LL * v46;
      *(_OWORD *)(v43[0] + 4 * v18) = v35;
      *(_DWORD *)(v17 + 4 * v18 + 16) = v42;
      v46 = v16;
      goto LABEL_14;
    }
    v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 0x14u, 1, &v41);
    v12 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
  }
  v16 = v46;
LABEL_14:
  if ( v12 < 0 )
  {
    v34 = 5836;
    goto LABEL_46;
  }
  *((_QWORD *)&v36 + 1) = 0x3F80000000000000LL;
  v20 = v16 + 1;
  *(_QWORD *)&v36 = __PAIR64__(DWORD1(v40), DWORD2(v40));
  v12 = v16 + 1 < v16 ? 0x80070216 : 0;
  v41 = v36;
  if ( v16 + 1 < v16 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else
  {
    if ( v20 <= v45 )
    {
      v21 = v43[0];
      v22 = 5LL * v16;
      *(_OWORD *)(v43[0] + 4 * v22) = v36;
      *(_DWORD *)(v21 + 4 * v22 + 16) = v42;
      v46 = v16 + 1;
      goto LABEL_22;
    }
    v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 0x14u, 1, &v41);
    v12 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
  }
  v20 = v46;
LABEL_22:
  if ( v12 < 0 )
  {
    v34 = 5838;
    goto LABEL_46;
  }
  *((_QWORD *)&v37 + 1) = 0x3F80000000000000LL;
  v24 = v20 + 1;
  *(_QWORD *)&v37 = *((_QWORD *)&v40 + 1);
  v12 = v20 + 1 < v20 ? 0x80070216 : 0;
  v41 = v37;
  if ( v20 + 1 < v20 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else
  {
    if ( v24 <= v45 )
    {
      v25 = v43[0];
      v26 = 5LL * v20;
      *(_OWORD *)(v43[0] + 4 * v26) = v37;
      *(_DWORD *)(v25 + 4 * v26 + 16) = v42;
      v46 = v20 + 1;
      goto LABEL_30;
    }
    v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 0x14u, 1, &v41);
    v12 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xC0u);
  }
  v24 = v46;
LABEL_30:
  if ( v12 < 0 )
  {
    v34 = 5840;
    goto LABEL_46;
  }
  *((_QWORD *)&v38 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v38 = __PAIR64__(HIDWORD(v40), v40);
  v12 = v24 + 1 < v24 ? 0x80070216 : 0;
  v41 = v38;
  if ( v24 + 1 < v24 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else if ( v24 + 1 > v45 )
  {
    v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 0x14u, 1, &v41);
    v12 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xC0u);
  }
  else
  {
    v28 = v43[0];
    v29 = 5LL * v24;
    *(_OWORD *)(v43[0] + 4 * v29) = v38;
    *(_DWORD *)(v28 + 4 * v29 + 16) = v42;
    v46 = v24 + 1;
  }
  if ( v12 < 0 )
  {
    v34 = 5842;
LABEL_46:
    v32 = v12;
    goto LABEL_47;
  }
  v31 = CPolygon::Create(
          (unsigned int)v43,
          a1,
          *(_QWORD *)(a1 + 248),
          a2,
          LODWORD(a3),
          a4,
          a5,
          a6,
          a7,
          a8,
          (__int64)&v39[1],
          (__int64)v39);
  v12 = v31;
  if ( v31 < 0 )
  {
    v34 = 5856;
    v32 = v31;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v34);
    goto LABEL_48;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v43);
  v11 = v39[0];
LABEL_40:
  v39[0] = 0LL;
  *a10 = v11;
LABEL_49:
  ReleaseInterface<CD3DSurface>(v39);
  return (unsigned int)v12;
}
