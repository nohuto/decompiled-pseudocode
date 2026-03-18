/*
 * XREFs of ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D3574
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801D32A4 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ??2CDxHandleYUVBitmapRealization@@KAPEAX_K@Z @ 0x1801D33B4 (--2CDxHandleYUVBitmapRealization@@KAPEAX_K@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801D3DF4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4,
        struct CBitmapRealization **a5)
{
  CDxHandleYUVBitmapRealization *v5; // rbx
  CDxHandleYUVBitmapRealization *v10; // rax
  int v11; // edi
  signed int v12; // eax

  v5 = 0LL;
  *a5 = 0LL;
  if ( *((_DWORD *)this + 74) || !*((_DWORD *)a3 + 6) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x143u);
  }
  else
  {
    v10 = (CDxHandleYUVBitmapRealization *)CDxHandleYUVBitmapRealization::operator new();
    if ( v10 )
      v5 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v10, a2, a3, a4);
    if ( !v5 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x135u);
      goto LABEL_14;
    }
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v5 + 8LL))(v5);
    v12 = CDxHandleYUVBitmapRealization::Initialize(v5, this);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x13Cu);
    }
    else
    {
      *a5 = v5;
      v5 = 0LL;
    }
  }
  if ( v11 < 0 && v5 )
    *((_QWORD *)v5 + 35) = 0LL;
LABEL_14:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v5);
  return (unsigned int)v11;
}
