/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801AF4F4
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801A7A0C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801AF480 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x1801AE470 (--4-$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801AE514 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
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
        _QWORD *a12)
{
  unsigned int v16; // ebx
  int v17; // r9d
  char *v18; // rax
  void (__fastcall ***v19)(_QWORD); // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // xmm0_4
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-20h]
  struct D2D_VECTOR_4F v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 v30; // [rsp+60h] [rbp+20h] BYREF

  v30 = 0LL;
  if ( *(_DWORD *)(a1 + 24) < 3u )
  {
    v16 = -2147024809;
    v28 = 28;
LABEL_3:
    v17 = v16;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v28);
    goto LABEL_18;
  }
  v18 = (char *)WPF::ProcessHeapImpl::AllocClear(0x108uLL);
  v19 = (void (__fastcall ***)(_QWORD))v18;
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
    *((_QWORD *)v18 + 32) = 0LL;
    ++dword_1802D635C;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !*Microsoft::WRL::ComPtr<CPolygon>::operator=(&v30, v19) )
  {
    v16 = -2147024882;
    v28 = 31;
    goto LABEL_3;
  }
  v20 = v30;
  *(_DWORD *)(v30 + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize(v20 + 16, 0x14u);
  v21 = DynArrayImpl<0>::AddMultipleAndSet(v30 + 16, 0x14u, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
  v16 = v21;
  if ( v21 < 0 )
  {
    v28 = 34;
    v17 = v21;
    goto LABEL_17;
  }
  *(_QWORD *)(v30 + 216) = a2;
  v22 = v30;
  *(_OWORD *)(v30 + 144) = *(_OWORD *)a4;
  *(_OWORD *)(v22 + 160) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v22 + 176) = *(_OWORD *)(a4 + 32);
  v23 = a5;
  *(_OWORD *)(v22 + 192) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(v22 + 208) = *(_DWORD *)(a4 + 64);
  LODWORD(v22) = a6;
  *(_DWORD *)(v30 + 224) = v23;
  *(_DWORD *)(v30 + 236) = v22;
  *(_DWORD *)(v30 + 228) = a7;
  *(_DWORD *)(v30 + 232) = a8;
  *(_BYTE *)(v30 + 240) = a9;
  *(_BYTE *)(v30 + 241) = a10;
  *(_QWORD *)(v30 + 248) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a11 )
    v24 = *a11;
  else
    v24 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                             &v29,
                                             *(__m128 **)(v30 + 16),
                                             (__m128 *)(*(_QWORD *)(v30 + 16) + 20LL),
                                             (__m128 *)(*(_QWORD *)(v30 + 16) + 40LL)));
  *(__m128i *)(v30 + 128) = v24;
  v25 = v30;
  v30 = 0LL;
  *a12 = v25;
LABEL_18:
  v26 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  }
  return v16;
}
