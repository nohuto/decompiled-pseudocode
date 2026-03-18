/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180177244
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801CF6C8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x180176B80 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18017E634 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
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
  unsigned int v12; // ebx
  signed int v15; // eax
  unsigned int v16; // r8d
  signed int v17; // eax
  unsigned int v18; // r8d
  signed int v19; // eax
  unsigned int v20; // r8d
  signed int v21; // eax
  unsigned int v22; // r8d
  signed int v23; // eax
  signed int v24; // eax
  __int128 v26; // [rsp+68h] [rbp-A0h]
  __int128 v27; // [rsp+68h] [rbp-A0h]
  __int128 v28; // [rsp+68h] [rbp-A0h]
  __int128 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v31; // [rsp+90h] [rbp-78h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-68h] BYREF
  int v33; // [rsp+B0h] [rbp-58h]
  void *v34[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+CCh] [rbp-3Ch]
  int v37; // [rsp+D0h] [rbp-38h]
  _BYTE v38[80]; // [rsp+D8h] [rbp-30h] BYREF

  v11 = 0LL;
  v12 = 0;
  v30[0] = 0LL;
  if ( *(_QWORD *)(a1 + 240) || a9 )
  {
    v37 = 0;
    v34[0] = v38;
    v34[1] = v38;
    v35 = 4;
    v36 = 4;
    v33 = 1;
    *(_OWORD *)&v30[1] = _xmm;
    if ( a9 )
    {
      v31 = *(_OWORD *)(a1 + 164);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a1 + 192LL))(a1, 0LL, &v31);
      v12 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x14D2u);
LABEL_19:
        DynArrayImpl<1>::~DynArrayImpl<1>(v34);
        goto LABEL_20;
      }
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 280LL))(a1, &v31, &v31);
    *((_QWORD *)&v26 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v26 = v31;
    v32 = v26;
    v17 = DynArray<InputBoundsPair,0>::AddMultipleAndSet((__int64)v34, (__int64)&v32, v16);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x14DDu);
      goto LABEL_19;
    }
    *((_QWORD *)&v27 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v27 = __PAIR64__(DWORD1(v31), DWORD2(v31));
    v32 = v27;
    v19 = DynArray<InputBoundsPair,0>::AddMultipleAndSet((__int64)v34, (__int64)&v32, v18);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x14DFu);
      goto LABEL_19;
    }
    *((_QWORD *)&v28 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v28 = *((_QWORD *)&v31 + 1);
    v32 = v28;
    v21 = DynArray<InputBoundsPair,0>::AddMultipleAndSet((__int64)v34, (__int64)&v32, v20);
    v12 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x14E1u);
      goto LABEL_19;
    }
    *((_QWORD *)&v29 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v29 = __PAIR64__(HIDWORD(v31), v31);
    v32 = v29;
    v23 = DynArray<InputBoundsPair,0>::AddMultipleAndSet((__int64)v34, (__int64)&v32, v22);
    v12 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x14E3u);
      goto LABEL_19;
    }
    v24 = CPolygon::Create(
            (unsigned int)v34,
            a1,
            *(_QWORD *)(a1 + 240),
            a2,
            LODWORD(a3),
            a4,
            a5,
            a6,
            a7,
            a8,
            (__int64)&v30[1],
            (__int64)v30);
    v12 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x14F1u);
      goto LABEL_19;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v34);
    v11 = v30[0];
  }
  v30[0] = 0LL;
  *a10 = v11;
LABEL_20:
  ReleaseInterface<CRemoteApplicationWindow>(v30);
  return v12;
}
