/*
 * XREFs of ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180075FE4
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18007616C (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18007632C (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x180036D60 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180073B6C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x18007CC30 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x1800B5ED0 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C53C0 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x180175218 (-GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitm.c)
 *     ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B4A64 (-Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B5FC0 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALI.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B6734 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B6824 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
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
  CSurfaceManager *v11; // rcx
  struct _LUID v12; // rbx
  __int64 (*v13)(void); // rax
  struct CComposition *CompositionNoRef; // rax
  int v15; // ebx
  unsigned int *v16; // r8
  CSurfaceManager *v17; // rcx
  struct CComposition *(__fastcall *v18)(CSurfaceManager *__hidden); // rax
  struct CComposition *v19; // rax
  int SubResourceRealization; // eax
  void (__fastcall *v21)(CBitmapRealization *); // rax
  CBitmapRealization *v22; // rcx
  int v24; // r9d
  CDxHandleYUVBitmapRealization *PrimaryYUVBitmapRealizationNoRef; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-69h]
  HGDIOBJ ho; // [rsp+30h] [rbp-59h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-51h] BYREF
  int *v34; // [rsp+50h] [rbp-39h] BYREF
  int v35; // [rsp+58h] [rbp-31h] BYREF

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
      v28 = NtOpenCompositionSurfaceSectionInfo(*((_QWORD *)*this + 4), this + 1, (char *)a3 + 8, hObject);
      if ( v28 < 0 )
      {
        v15 = v28 | 0x10000000;
        v31 = 1504;
        goto LABEL_24;
      }
      v29 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
      v30 = CSectionBitmapRealization::Create(
              (const struct _GUID *)(v29 + 324),
              a2,
              a3,
              (const struct CSM_SYSMEM_SECTION_INFO *)hObject,
              a4);
      v15 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801F3658, 2u, v30, 0x5E7u);
        CloseHandle(hObject[0]);
        goto LABEL_16;
      }
      break;
    case 2:
      v11 = (CSurfaceManager *)*((_QWORD *)*this + 3);
      v12 = (struct _LUID)*((_QWORD *)*this + 5);
      v13 = *(__int64 (**)(void))(*(_QWORD *)v11 + 8LL);
      if ( (char *)v13 == (char *)CSurfaceManager::GetCompositionNoRef )
        CompositionNoRef = CSurfaceManager::GetCompositionNoRef(v11);
      else
        CompositionNoRef = (struct CComposition *)v13();
      v15 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
              (const struct _GUID *)((char *)CompositionNoRef + 324),
              a2,
              a3,
              v12,
              a4);
      if ( v15 >= 0 )
        break;
      v17 = (CSurfaceManager *)*((_QWORD *)*this + 3);
      v18 = *(struct CComposition *(__fastcall **)(CSurfaceManager *__hidden))(*(_QWORD *)v17 + 8LL);
      v19 = v18 == CSurfaceManager::GetCompositionNoRef
          ? CSurfaceManager::GetCompositionNoRef(v17)
          : (struct CComposition *)((__int64 (*)(void))v18)();
      SubResourceRealization = CDxHandleBitmapRealization::Create(
                                 (const struct _GUID *)((char *)v19 + 324),
                                 a2,
                                 a3,
                                 this[19],
                                 a4);
      v15 = SubResourceRealization;
      if ( SubResourceRealization >= 0 )
        break;
      v31 = 1535;
      goto LABEL_25;
    case 3:
      v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
      SubResourceRealization = CDxHandleStereoBitmapRealization::Create((const struct _GUID *)(v27 + 324), a2, a3, a4);
      v15 = SubResourceRealization;
      if ( SubResourceRealization < 0 )
      {
        v31 = 1545;
        goto LABEL_25;
      }
      break;
    case 4:
      PrimaryYUVBitmapRealizationNoRef = CCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVBitmapRealizationNoRef((CCompositionSurfaceInfo::CBindInfo *)this);
      if ( *((_DWORD *)a3 + 6) )
      {
        if ( !PrimaryYUVBitmapRealizationNoRef )
        {
          v15 = -2003292412;
          v31 = 1580;
          goto LABEL_24;
        }
        SubResourceRealization = CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
                                   PrimaryYUVBitmapRealizationNoRef,
                                   a2,
                                   a3,
                                   this[19],
                                   a4);
        v15 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v31 = 1576;
          goto LABEL_25;
        }
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
        SubResourceRealization = CDxHandleYUVBitmapRealization::Create(
                                   (const struct _GUID *)(v26 + 324),
                                   a2,
                                   a3,
                                   this[19],
                                   a4);
        v15 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v31 = 1562;
LABEL_25:
          v24 = SubResourceRealization;
          goto LABEL_26;
        }
      }
      break;
    default:
      v15 = -2147024809;
      v31 = 1587;
LABEL_24:
      v24 = v15;
LABEL_26:
      MilInstrumentationCheckHR(0x14u, &dword_1801F3658, 2u, v24, v31);
      goto LABEL_16;
  }
  if ( !ho )
    return (unsigned int)v15;
  if ( *a4 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      v21 = *(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)*a4 + 64LL);
      v22 = *a4;
      if ( v21 == CBitmapRealization::MarkFullDirty )
        CBitmapRealization::MarkFullDirty(v22);
      else
        v21(v22);
    }
    else
    {
      v35 = 0;
      v34 = &v35;
      CRegion::SetHRGN((CRegion *)&v34, (HRGN)ho, v16);
      (*(void (__fastcall **)(_QWORD, int **))(*(_QWORD *)*a4 + 56LL))(*a4, &v34);
      FastRegion::CRegion::FreeMemory((void **)&v34);
    }
  }
LABEL_16:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v15;
}
