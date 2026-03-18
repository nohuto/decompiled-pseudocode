/*
 * XREFs of ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1800827C4
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800828FC (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801AC394 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800494C0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18007D794 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180082D0C (-Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x180082DEC (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REAL.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x1801AC5F4 (-GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitm.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1802130A8 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180214BB0 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1802153E8 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1802154C4 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
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
  unsigned int *v12; // r8
  int SubResourceRealization; // eax
  struct CBitmapRealization *v14; // rax
  CBitmapRealization *v15; // rcx
  void (*v16)(void); // rax
  int v18; // r9d
  CDxHandleYUVBitmapRealization *PrimaryYUVBitmapRealizationNoRef; // rax
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-69h]
  HGDIOBJ ho; // [rsp+30h] [rbp-59h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-51h] BYREF
  int *v25; // [rsp+50h] [rbp-39h] BYREF
  int v26; // [rsp+58h] [rbp-31h] BYREF

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
      v20 = NtOpenCompositionSurfaceSectionInfo(*((_QWORD *)*this + 4), this + 1, (char *)a3 + 8, hObject);
      if ( v20 < 0 )
      {
        v11 = v20 | 0x10000000;
        v22 = 1529;
        goto LABEL_20;
      }
      v21 = CSectionBitmapRealization::Create(a2, a3, (const struct CSM_SYSMEM_SECTION_INFO *)hObject, a4);
      v11 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277330, 2u, v21, 0x5FFu);
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
      v22 = 1557;
      goto LABEL_21;
    case 3:
      SubResourceRealization = CDxHandleStereoBitmapRealization::Create(a2, a3, a4);
      v11 = SubResourceRealization;
      if ( SubResourceRealization < 0 )
      {
        v22 = 1566;
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
          v22 = 1600;
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
          v22 = 1596;
          goto LABEL_21;
        }
      }
      else
      {
        SubResourceRealization = CDxHandleYUVBitmapRealization::Create(a2, a3, this[19], a4);
        v11 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v22 = 1582;
LABEL_21:
          v18 = SubResourceRealization;
          goto LABEL_22;
        }
      }
      break;
    default:
      v11 = -2147024809;
      v22 = 1607;
LABEL_20:
      v18 = v11;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277330, 2u, v18, v22);
      goto LABEL_12;
  }
  if ( !ho )
    return (unsigned int)v11;
  v14 = *a4;
  if ( *a4 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      v15 = (struct CBitmapRealization *)((char *)v14 + 144);
      v16 = *(void (**)(void))(*((_QWORD *)v14 + 18) + 128LL);
      if ( (char *)v16 == (char *)CBitmapRealization::MarkFullDirty )
        CBitmapRealization::MarkFullDirty(v15);
      else
        v16();
    }
    else
    {
      v26 = 0;
      v25 = &v26;
      CRegion::SetHRGN((CRegion *)&v25, (HRGN)ho, v12);
      (*(void (__fastcall **)(char *, int **))(*((_QWORD *)*a4 + 18) + 120LL))((char *)*a4 + 144, &v25);
      FastRegion::CRegion::FreeMemory((void **)&v25);
    }
  }
LABEL_12:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v11;
}
