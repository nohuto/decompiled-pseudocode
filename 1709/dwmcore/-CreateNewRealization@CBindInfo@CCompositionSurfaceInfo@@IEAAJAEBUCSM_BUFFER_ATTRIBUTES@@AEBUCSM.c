/*
 * XREFs of ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800763B4 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180076594 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x18002AFD0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180076800 (-Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800768E0 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REAL.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180088C68 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x18017C21C (-GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitm.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D0D58 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D2CE0 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D3498 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D3574 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  struct CDecodeBitmap *v5; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  int SubResourceRealization; // eax
  struct CBitmapRealization *v13; // rax
  CBitmapRealization *v14; // rcx
  void (*v15)(void); // rax
  int v17; // r9d
  CDxHandleYUVBitmapRealization *PrimaryYUVBitmapRealizationNoRef; // rax
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-69h]
  HGDIOBJ ho; // [rsp+30h] [rbp-59h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-51h] BYREF
  int *v24; // [rsp+50h] [rbp-39h] BYREF
  int v25; // [rsp+58h] [rbp-31h] BYREF

  ho = 0LL;
  *a4 = 0LL;
  v5 = *this;
  memset(hObject, 0, sizeof(hObject));
  v9 = NtOpenCompositionSurfaceDirtyRegion(*((_QWORD *)v5 + 4), this + 1, a3, &ho);
  v10 = (__int64)ho;
  if ( v9 < 0 )
    v10 = 1LL;
  ho = (HGDIOBJ)v10;
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      v19 = NtOpenCompositionSurfaceSectionInfo(*((_QWORD *)*this + 4), this + 1, (char *)a3 + 8, hObject);
      if ( v19 < 0 )
      {
        v11 = v19 | 0x10000000;
        v21 = 1511;
        goto LABEL_20;
      }
      v20 = CSectionBitmapRealization::Create(a2, a3, (const struct CSM_SYSMEM_SECTION_INFO *)hObject, a4);
      v11 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202500, 2u, v20, 0x5EDu);
        CloseHandle(hObject[0]);
        goto LABEL_12;
      }
      break;
    case 2:
      v11 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(a2, a3, *(struct _LUID *)((char *)*this + 40), a4);
      if ( v11 >= 0 )
        break;
      SubResourceRealization = CDxHandleBitmapRealization::Create(a2, a3, this[19], a4);
      v11 = SubResourceRealization;
      if ( SubResourceRealization >= 0 )
        break;
      v21 = 1539;
      goto LABEL_21;
    case 3:
      SubResourceRealization = CDxHandleStereoBitmapRealization::Create(a2, a3, a4);
      v11 = SubResourceRealization;
      if ( SubResourceRealization < 0 )
      {
        v21 = 1548;
        goto LABEL_21;
      }
      break;
    case 4:
      PrimaryYUVBitmapRealizationNoRef = CCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVBitmapRealizationNoRef((CCompositionSurfaceInfo::CBindInfo *)this);
      if ( *((_DWORD *)a3 + 6) )
      {
        if ( !PrimaryYUVBitmapRealizationNoRef )
        {
          v11 = -2003292412;
          v21 = 1582;
          goto LABEL_20;
        }
        SubResourceRealization = CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
                                   PrimaryYUVBitmapRealizationNoRef,
                                   a2,
                                   a3,
                                   this[19],
                                   a4);
        v11 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v21 = 1578;
          goto LABEL_21;
        }
      }
      else
      {
        SubResourceRealization = CDxHandleYUVBitmapRealization::Create(a2, a3, this[19], a4);
        v11 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v21 = 1564;
LABEL_21:
          v17 = SubResourceRealization;
          goto LABEL_22;
        }
      }
      break;
    default:
      v11 = -2147024809;
      v21 = 1589;
LABEL_20:
      v17 = v11;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202500, 2u, v17, v21);
      goto LABEL_12;
  }
  if ( !ho )
    return (unsigned int)v11;
  v13 = *a4;
  if ( *a4 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      v14 = (struct CBitmapRealization *)((char *)v13 + 144);
      v15 = *(void (**)(void))(*((_QWORD *)v13 + 18) + 128LL);
      if ( (char *)v15 == (char *)CBitmapRealization::MarkFullDirty )
        CBitmapRealization::MarkFullDirty(v14);
      else
        v15();
    }
    else
    {
      v25 = 0;
      v24 = &v25;
      CRegion::SetHRGN((CRegion *)&v24, (HRGN)ho);
      (*(void (__fastcall **)(char *, int **))(*((_QWORD *)*a4 + 18) + 120LL))((char *)*a4 + 144, &v24);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v24);
    }
  }
LABEL_12:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v11;
}
