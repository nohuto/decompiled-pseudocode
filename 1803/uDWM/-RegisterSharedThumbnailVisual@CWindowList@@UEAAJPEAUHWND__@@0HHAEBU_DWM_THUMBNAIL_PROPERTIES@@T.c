/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002C700 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002FC4C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x180036720 (-GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180036740 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003689C (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180037E84 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x18008273C (McTemplateU0p.c)
 */

__int64 __fastcall CWindowList::RegisterSharedThumbnailVisual(
        CWindowList *this,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        const struct _DWM_THUMBNAIL_PROPERTIES *a6,
        union _LARGE_INTEGER a7,
        unsigned int a8,
        unsigned int a9)
{
  struct CVisual *v13; // r13
  int SyncedWindowDataByHwnd; // eax
  int v15; // ebx
  struct CWindowData *v16; // r15
  bool v17; // zf
  struct CWindowData *v18; // r14
  bool IsBaseThumbnailDestinationReachable; // al
  LPVOID (__fastcall *v20)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  CDesktopManager *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 (__fastcall *v33)(CDCompThumbnailData *__hidden); // rax
  int v34; // eax
  int updated; // eax
  struct CVisual *(__fastcall *v36)(CDCompThumbnailData *__hidden); // rax
  struct CVisual **ThumbnailVisual; // rax
  CVisual *v38; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // r9d
  struct CVisual **v44; // rax
  unsigned int v45; // [rsp+20h] [rbp-40h]
  unsigned int v46; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v47; // [rsp+38h] [rbp-28h] BYREF
  struct CVisual *v48; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v49; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+50h] [rbp-10h] BYREF

  v50 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v46 = 0;
  v48 = 0LL;
  v13 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v49);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v45 = 3291;
LABEL_58:
    v43 = SyncedWindowDataByHwnd;
LABEL_62:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v45);
    goto LABEL_43;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v47);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v45 = 3292;
    goto LABEL_58;
  }
  v16 = v49;
  if ( !v49 )
    goto LABEL_65;
  v17 = a4 == 0;
  v18 = v47;
  if ( v17 )
  {
    if ( v47 )
      goto LABEL_6;
LABEL_65:
    v15 = -2147024809;
    goto LABEL_43;
  }
  if ( v47 )
    goto LABEL_65;
LABEL_6:
  *((_QWORD *)this + 49) = v49;
  if ( v18 )
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v18);
  else
    IsBaseThumbnailDestinationReachable = 0;
  *((_QWORD *)this + 49) = 0LL;
  if ( IsBaseThumbnailDestinationReachable )
    goto LABEL_65;
  v20 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v20 == WPF::ProcessHeapImpl::Alloc )
    v21 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x78uLL);
  else
    v21 = (_QWORD *)v20(WPF::g_pProcessHeap, 120LL);
  v22 = v21;
  if ( v21 )
  {
    v21[1] = 0LL;
    v21[2] = 0LL;
    v21[3] = 0LL;
    *((_DWORD *)v21 + 8) = 0;
    memset_0((char *)v21 + 36, 0, 0x2DuLL);
    v22[11] = 0LL;
    *v22 = &CDCompThumbnailData::`vftable';
    v22[12] = 0LL;
    v22[13] = 0LL;
    *((_DWORD *)v22 + 28) = 0;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v15 = -2147024882;
    v45 = 3322;
    v43 = -2147024882;
    goto LABEL_62;
  }
  v22[1] = a7.QuadPart;
  *((_BYTE *)v22 + 33) = a5 != 0;
  v22[2] = v16;
  *((_DWORD *)v22 + 28) = a4 != 0;
  v23 = CDesktopManager::s_pDesktopManagerInstance;
  v22[3] = v18;
  *((_BYTE *)v22 + 32) = 0;
  *((_BYTE *)v22 + 34) = 1;
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**((_QWORD **)v23 + 4) + 112LL))(
                             *((_QWORD *)v23 + 4),
                             a8,
                             a9,
                             38LL,
                             &v46);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v45 = 3335;
    goto LABEL_58;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p(v24, &CommitChannel_WindowList_Thumbnail, a2);
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v45 = 3340;
    goto LABEL_58;
  }
  v25 = CVisual::WrapExistingResource(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v46,
          &v48);
  v15 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xD10u);
    v13 = v48;
    goto LABEL_43;
  }
  v13 = v48;
  v26 = (_QWORD *)((char *)this + 352);
  v22[12] = v48;
  v27 = *((_DWORD *)this + 94);
  v49 = (struct CWindowData *)v22;
  v28 = v27 + 1;
  v15 = v27 + 1 < v27 ? 0x80070216 : 0;
  if ( v27 + 1 < v27 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v28 > *((_DWORD *)this + 93) )
  {
    v40 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v26, 8, 1, &v49);
    v15 = v40;
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*v26 + 8LL * v27) = v49;
    *((_DWORD *)this + 94) = v28;
  }
  if ( v15 < 0 )
  {
    v45 = 3348;
LABEL_61:
    v43 = v15;
    goto LABEL_62;
  }
  v13 = 0LL;
  v49 = (struct CWindowData *)v22;
  v29 = *((_DWORD *)v16 + 126);
  v30 = v29 + 1;
  v15 = v29 + 1 < v29 ? 0x80070216 : 0;
  if ( v29 + 1 < v29 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v30 > *((_DWORD *)v16 + 125) )
  {
    v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16 + 480, 8, 1, &v49);
    v15 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v16 + 60) + 8LL * v29) = v49;
    *((_DWORD *)v16 + 126) = v30;
  }
  if ( v15 < 0 )
  {
    v45 = 3356;
    goto LABEL_61;
  }
  if ( v18 )
  {
    v49 = (struct CWindowData *)v22;
    v31 = *((_DWORD *)v18 + 134);
    v32 = v31 + 1;
    v15 = v31 + 1 < v31 ? 0x80070216 : 0;
    if ( v31 + 1 < v31 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
    }
    else if ( v32 > *((_DWORD *)v18 + 133) )
    {
      v42 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18 + 512, 8, 1, &v49);
      v15 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v18 + 64) + 8LL * v31) = v49;
      *((_DWORD *)v18 + 134) = v32;
    }
    if ( v15 < 0 )
    {
      v45 = 3359;
      goto LABEL_61;
    }
  }
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
    v15 = updated;
    if ( updated < 0 )
    {
      v45 = 3371;
      goto LABEL_78;
    }
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22);
    v15 = updated;
    if ( updated < 0 )
    {
      v45 = 3372;
      goto LABEL_78;
    }
    v44 = (struct CVisual **)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    updated = VisualCollection::InsertRelative((VisualCollection *)(v22[12] + 32LL), v44, 0LL, 0, 1);
    v15 = updated;
    if ( updated < 0 )
    {
      v45 = 3373;
      goto LABEL_78;
    }
    goto LABEL_41;
  }
  v33 = *(__int64 (__fastcall **)(CDCompThumbnailData *__hidden))(*v22 + 8LL);
  if ( v33 == CDCompThumbnailData::EnsureThumbnailVisual )
    v34 = CDCompThumbnailData::EnsureThumbnailVisual((CDCompThumbnailData *)v22);
  else
    v34 = v33((CDCompThumbnailData *)v22);
  v15 = v34;
  if ( v34 < 0 )
  {
    v45 = 3377;
    goto LABEL_61;
  }
  updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
  v15 = updated;
  if ( updated < 0 )
  {
    v45 = 3378;
    goto LABEL_78;
  }
  v36 = *(struct CVisual *(__fastcall **)(CDCompThumbnailData *__hidden))(*v22 + 16LL);
  if ( v36 == CDCompThumbnailData::GetThumbnailVisual )
    ThumbnailVisual = (struct CVisual **)CDCompThumbnailData::GetThumbnailVisual((CDCompThumbnailData *)v22);
  else
    ThumbnailVisual = (struct CVisual **)v36((CDCompThumbnailData *)v22);
  updated = VisualCollection::InsertRelative((VisualCollection *)(v22[12] + 32LL), ThumbnailVisual, 0LL, 0, 1);
  v15 = updated;
  if ( updated < 0 )
  {
    v45 = 3379;
    goto LABEL_78;
  }
  if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v16 + 15)) )
  {
    updated = CVisual::RenderRecursive((CVisual *)v22[12]);
    v15 = updated;
    if ( updated < 0 )
    {
      v45 = 3385;
LABEL_78:
      v43 = updated;
      goto LABEL_62;
    }
  }
LABEL_41:
  v38 = (CVisual *)*((_QWORD *)v16 + 49);
  if ( v38 )
    CVisual::SetDirtyFlags(v38, 0x8000000);
LABEL_43:
  if ( v46 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v13 )
    CBaseObject::Release(v13);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
  return (unsigned int)v15;
}
