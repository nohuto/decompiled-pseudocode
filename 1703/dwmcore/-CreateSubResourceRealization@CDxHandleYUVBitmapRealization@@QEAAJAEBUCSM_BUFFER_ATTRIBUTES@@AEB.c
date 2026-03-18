/*
 * XREFs of ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B6824
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

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
        struct _GUID *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4,
        struct CBitmapRealization **a5)
{
  CDxHandleYUVBitmapRealization *v5; // rbx
  CDxHandleYUVBitmapRealization *v10; // rax
  int v11; // edi
  int v12; // eax

  v5 = 0LL;
  *a5 = 0LL;
  if ( *(_DWORD *)this[16].Data4 || !*((_DWORD *)a3 + 6) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x159u);
  }
  else
  {
    v10 = (CDxHandleYUVBitmapRealization *)CDxHandleYUVBitmapRealization::operator new();
    if ( v10 )
      v5 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v10, this + 2, a2, a3, a4);
    if ( !v5 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x149u);
      goto LABEL_14;
    }
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v5 + 8LL))(v5);
    v12 = CDxHandleYUVBitmapRealization::Initialize(v5, (struct CDxHandleYUVBitmapRealization *)this);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x152u);
    }
    else
    {
      *a5 = v5;
      v5 = 0LL;
    }
  }
  if ( v11 < 0 && v5 )
    *((_QWORD *)v5 + 31) = 0LL;
LABEL_14:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v5);
  return (unsigned int)v11;
}
