/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B6734
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180075FE4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801B6554 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ??2CDxHandleYUVBitmapRealization@@KAPEAX_K@Z @ 0x1801B665C (--2CDxHandleYUVBitmapRealization@@KAPEAX_K@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801B70A4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4,
        struct CBitmapRealization **a5)
{
  CDxHandleYUVBitmapRealization *v9; // rax
  CDxHandleYUVBitmapRealization *v10; // rbx
  int v11; // edi
  int v12; // eax

  *a5 = 0LL;
  v9 = (CDxHandleYUVBitmapRealization *)CDxHandleYUVBitmapRealization::operator new();
  if ( v9 )
    v10 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v9, a1, a2, a3, a4);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = CDxHandleYUVBitmapRealization::Initialize(v10, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x24u);
    }
    else
    {
      *a5 = v10;
      v10 = 0LL;
    }
    if ( v11 < 0 && v10 )
      *((_QWORD *)v10 + 31) = 0LL;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v10);
  return (unsigned int)v11;
}
