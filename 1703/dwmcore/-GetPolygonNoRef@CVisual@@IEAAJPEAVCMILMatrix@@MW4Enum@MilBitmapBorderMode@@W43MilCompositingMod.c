/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180160844
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801B31A8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendingStateChangeInfo@CInteractionTracker@@I@Z @ 0x18016C018 (-AddMultipleAndSet@-$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendi.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180177484 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
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
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+60h] [rbp-A0h]
  __int128 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+B0h] [rbp-50h]
  void *v31[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  _BYTE v35[80]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 0LL;
  v12 = 0;
  v26 = 0LL;
  if ( *(_QWORD *)(a1 + 240) || a9 )
  {
    v34 = 0;
    v31[0] = v35;
    v31[1] = v35;
    v32 = 4;
    v33 = 4;
    v30 = 1;
    v27 = _xmm;
    if ( a9 )
    {
      v28 = *(_OWORD *)(a1 + 160);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a1 + 152LL))(a1, 0LL, &v28);
      v12 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1435u);
LABEL_19:
        DynArrayImpl<1>::~DynArrayImpl<1>(v31);
        goto LABEL_20;
      }
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 240LL))(a1, &v28, &v28);
    LODWORD(v22) = v28;
    *(_QWORD *)((char *)&v22 + 4) = DWORD1(v28);
    HIDWORD(v22) = 1065353216;
    v29 = v22;
    v16 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(v31, &v29);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1440u);
      goto LABEL_19;
    }
    LODWORD(v23) = DWORD2(v28);
    *(_QWORD *)((char *)&v23 + 4) = DWORD1(v28);
    HIDWORD(v23) = 1065353216;
    v29 = v23;
    v17 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(v31, &v29);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1442u);
      goto LABEL_19;
    }
    LODWORD(v24) = DWORD2(v28);
    *(_QWORD *)((char *)&v24 + 4) = HIDWORD(v28);
    HIDWORD(v24) = 1065353216;
    v29 = v24;
    v18 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(v31, &v29);
    v12 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1444u);
      goto LABEL_19;
    }
    LODWORD(v25) = v28;
    *(_QWORD *)((char *)&v25 + 4) = HIDWORD(v28);
    HIDWORD(v25) = 1065353216;
    v29 = v25;
    v19 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(v31, &v29);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1446u);
      goto LABEL_19;
    }
    v20 = CPolygon::Create(
            (unsigned int)v31,
            a1,
            *(_QWORD *)(a1 + 240),
            a2,
            LODWORD(a3),
            a4,
            a5,
            a6,
            a7,
            a8,
            (__int64)&v27,
            (__int64)&v26);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1454u);
      goto LABEL_19;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v31);
    v11 = v26;
  }
  v26 = 0LL;
  *a10 = v11;
LABEL_20:
  ReleaseInterface<ClipPlaneInfoRef>(&v26);
  return v12;
}
