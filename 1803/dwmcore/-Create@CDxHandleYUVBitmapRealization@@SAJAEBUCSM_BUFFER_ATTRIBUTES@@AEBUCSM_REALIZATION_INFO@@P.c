/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1802153E8
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1800827C4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802151D4 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ??2CDxHandleYUVBitmapRealization@@KAPEAX_K@Z @ 0x1802152E4 (--2CDxHandleYUVBitmapRealization@@KAPEAX_K@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180215D44 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        struct CDecodeBitmap *a3,
        struct CBitmapRealization **a4)
{
  CDxHandleYUVBitmapRealization *v8; // rax
  CDxHandleYUVBitmapRealization *v9; // rbx
  int v10; // edi
  int v11; // eax

  *a4 = 0LL;
  v8 = (CDxHandleYUVBitmapRealization *)CDxHandleYUVBitmapRealization::operator new();
  if ( v8 )
    v9 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = CDxHandleYUVBitmapRealization::Initialize(v9, 0LL);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x22u);
    }
    else
    {
      *a4 = v9;
      v9 = 0LL;
    }
    if ( v10 < 0 && v9 )
      *((_QWORD *)v9 + 35) = 0LL;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v9);
  return (unsigned int)v10;
}
