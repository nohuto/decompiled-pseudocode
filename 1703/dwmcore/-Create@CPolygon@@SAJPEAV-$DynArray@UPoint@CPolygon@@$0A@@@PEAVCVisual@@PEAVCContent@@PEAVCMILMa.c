/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180177484
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180160844 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801773BC (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180176B00 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 */

__int64 __fastcall CPolygon::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        __m128i *a11,
        __int64 *a12)
{
  unsigned int v16; // edi
  int v17; // r9d
  char *v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  int v21; // xmm0_4
  int v22; // eax
  __m128i v23; // xmm0
  __int64 *v24; // rax
  unsigned int v26; // [rsp+20h] [rbp-38h]
  struct D2D_VECTOR_4F v27; // [rsp+30h] [rbp-28h] BYREF
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  v28 = 0LL;
  if ( *(_DWORD *)(a1 + 24) < 3u )
  {
    v16 = -2147024809;
    v26 = 28;
LABEL_3:
    v17 = v16;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v26);
    goto LABEL_18;
  }
  v18 = (char *)WPF::ProcessHeapImpl::AllocClear(0x108uLL);
  v19 = (__int64)v18;
  if ( v18 )
  {
    *(_QWORD *)v18 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v18 = &CPolygon::`vftable';
    *((_DWORD *)v18 + 2) = 0;
    *((_DWORD *)v18 + 10) = 0;
    *((_QWORD *)v18 + 2) = v18 + 48;
    *((_QWORD *)v18 + 3) = v18 + 48;
    *((_DWORD *)v18 + 8) = 4;
    *((_DWORD *)v18 + 9) = 4;
    *((_DWORD *)v18 + 52) = 0;
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 19, 1u);
    _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
  }
  else
  {
    v19 = 0LL;
  }
  v28 = v19;
  if ( !v19 )
  {
    v16 = -2147024882;
    v26 = 31;
    goto LABEL_3;
  }
  *(_DWORD *)(v19 + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize(v19 + 16, 0x14u);
  v20 = DynArrayImpl<0>::AddMultipleAndSet(v19 + 16, 0x14u, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
  v16 = v20;
  if ( v20 < 0 )
  {
    v26 = 34;
    v17 = v20;
    goto LABEL_17;
  }
  *(_QWORD *)(v19 + 216) = a2;
  *(_OWORD *)(v19 + 144) = *(_OWORD *)a4;
  *(_OWORD *)(v19 + 160) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v19 + 176) = *(_OWORD *)(a4 + 32);
  v21 = a5;
  *(_OWORD *)(v19 + 192) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(v19 + 208) = *(_DWORD *)(a4 + 64);
  v22 = a6;
  *(_DWORD *)(v19 + 224) = v21;
  *(_DWORD *)(v19 + 236) = v22;
  *(_DWORD *)(v19 + 228) = a7;
  *(_DWORD *)(v19 + 232) = a8;
  *(_BYTE *)(v19 + 240) = a9;
  *(_BYTE *)(v19 + 241) = a10;
  *(_QWORD *)(v19 + 248) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a11 )
    v23 = *a11;
  else
    v23 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                             &v27,
                                             *(__m128 **)(v19 + 16),
                                             (__m128 *)(*(_QWORD *)(v19 + 16) + 20LL),
                                             (__m128 *)(*(_QWORD *)(v19 + 16) + 40LL)));
  v24 = a12;
  v28 = 0LL;
  *(__m128i *)(v19 + 128) = v23;
  *v24 = v19;
LABEL_18:
  ReleaseInterface<ClipPlaneInfoRef>(&v28);
  return v16;
}
