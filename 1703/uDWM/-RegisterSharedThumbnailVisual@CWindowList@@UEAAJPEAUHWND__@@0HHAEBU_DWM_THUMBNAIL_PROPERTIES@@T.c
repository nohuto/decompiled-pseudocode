/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180032820
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180015A00 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x1800167F8 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x180033980 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180034FE0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18003C3C0 (-GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003C3E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003C4CC (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_q @ 0x180085D80 (EtwppTemplate_q.c)
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
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 (__fastcall *v36)(CDCompThumbnailData *__hidden); // rax
  int v37; // eax
  int updated; // eax
  struct CVisual *(__fastcall *v39)(CDCompThumbnailData *__hidden); // rax
  struct CVisual *ThumbnailVisual; // rax
  CVisual *v41; // rcx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // r9d
  struct CVisual *v47; // rax
  unsigned int v48; // [rsp+20h] [rbp-40h]
  unsigned int v49; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v50; // [rsp+38h] [rbp-28h] BYREF
  struct CVisual *v51; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v52; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+50h] [rbp-10h] BYREF

  v53 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v49 = 0;
  v51 = 0LL;
  v13 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v52);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v48 = 2981;
LABEL_63:
    v46 = SyncedWindowDataByHwnd;
LABEL_67:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, v48);
    goto LABEL_48;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v50);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v48 = 2982;
    goto LABEL_63;
  }
  v16 = v52;
  if ( !v52 )
    goto LABEL_70;
  v17 = a4 == 0;
  v18 = v50;
  if ( v17 )
  {
    if ( v50 )
      goto LABEL_6;
LABEL_70:
    v15 = -2147024809;
    goto LABEL_48;
  }
  if ( v50 )
    goto LABEL_70;
LABEL_6:
  *((_QWORD *)this + 49) = v52;
  if ( v18 )
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v18);
  else
    IsBaseThumbnailDestinationReachable = 0;
  *((_QWORD *)this + 49) = 0LL;
  if ( IsBaseThumbnailDestinationReachable )
    goto LABEL_70;
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
    v48 = 3012;
    v46 = -2147024882;
    goto LABEL_67;
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
                             37LL,
                             &v49);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v48 = 3025;
    goto LABEL_63;
  }
  if ( dword_1800C0044
    && (unsigned __int8)(byte_1800C0048 - 1) > 2u
    && (qword_1800C0030 & 0x8000000000000001uLL) != 0
    && (qword_1800C0038 & 0x8000000000000001uLL) == qword_1800C0038 )
  {
    EtwppTemplate_q(v24, "-#", a2);
  }
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v48 = 3030;
    goto LABEL_63;
  }
  v25 = CVisual::WrapExistingResource(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v49,
          &v51);
  v15 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xBDAu);
    v13 = v51;
    goto LABEL_48;
  }
  v13 = v51;
  v26 = (_QWORD *)((char *)this + 352);
  v22[12] = v51;
  v27 = *((unsigned int *)this + 94);
  v28 = v49;
  v52 = (struct CWindowData *)v22;
  v29 = v27 + 1;
  if ( (int)v27 + 1 >= (unsigned int)v27 )
    v28 = v27 + 1;
  v15 = v29 < (unsigned int)v27 ? 0x80070216 : 0;
  if ( v29 < (unsigned int)v27 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v28 > *((_DWORD *)this + 93) )
  {
    v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v26, 8u, 1, &v52);
    v15 = v43;
    if ( v43 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*v26 + 8 * v27) = v52;
    *((_DWORD *)this + 94) = v28;
  }
  if ( v15 < 0 )
  {
    v48 = 3038;
LABEL_66:
    v46 = v15;
    goto LABEL_67;
  }
  v30 = v49;
  v13 = 0LL;
  v52 = (struct CWindowData *)v22;
  v31 = *((unsigned int *)v16 + 126);
  v32 = v31 + 1;
  if ( (int)v31 + 1 >= (unsigned int)v31 )
    v30 = v31 + 1;
  v15 = v32 < (unsigned int)v31 ? 0x80070216 : 0;
  if ( v32 < (unsigned int)v31 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v30 > *((_DWORD *)v16 + 125) )
  {
    v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16 + 480, 8u, 1, &v52);
    v15 = v44;
    if ( v44 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v16 + 60) + 8 * v31) = v52;
    *((_DWORD *)v16 + 126) = v30;
  }
  if ( v15 < 0 )
  {
    v48 = 3046;
    goto LABEL_66;
  }
  if ( v18 )
  {
    v33 = v49;
    v52 = (struct CWindowData *)v22;
    v34 = *((unsigned int *)v18 + 134);
    v35 = v34 + 1;
    if ( (int)v34 + 1 >= (unsigned int)v34 )
      v33 = v34 + 1;
    v15 = v35 < (unsigned int)v34 ? 0x80070216 : 0;
    if ( v35 < (unsigned int)v34 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB5u);
    }
    else if ( v33 > *((_DWORD *)v18 + 133) )
    {
      v45 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18 + 512, 8u, 1, &v52);
      v15 = v45;
      if ( v45 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v18 + 64) + 8 * v34) = v52;
      *((_DWORD *)v18 + 134) = v33;
    }
    if ( v15 < 0 )
    {
      v48 = 3049;
      goto LABEL_66;
    }
  }
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
    v15 = updated;
    if ( updated < 0 )
    {
      v48 = 3061;
      goto LABEL_87;
    }
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22);
    v15 = updated;
    if ( updated < 0 )
    {
      v48 = 3062;
      goto LABEL_87;
    }
    v47 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    updated = VisualCollection::InsertRelative((VisualCollection *)(v22[12] + 32LL), v47, 0LL, 0, 1);
    v15 = updated;
    if ( updated < 0 )
    {
      v48 = 3063;
      goto LABEL_87;
    }
    goto LABEL_46;
  }
  v36 = *(__int64 (__fastcall **)(CDCompThumbnailData *__hidden))(*v22 + 8LL);
  if ( v36 == CDCompThumbnailData::EnsureThumbnailVisual )
    v37 = CDCompThumbnailData::EnsureThumbnailVisual((CDCompThumbnailData *)v22);
  else
    v37 = v36((CDCompThumbnailData *)v22);
  v15 = v37;
  if ( v37 < 0 )
  {
    v48 = 3067;
    goto LABEL_66;
  }
  updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
  v15 = updated;
  if ( updated < 0 )
  {
    v48 = 3068;
    goto LABEL_87;
  }
  v39 = *(struct CVisual *(__fastcall **)(CDCompThumbnailData *__hidden))(*v22 + 16LL);
  if ( v39 == CDCompThumbnailData::GetThumbnailVisual )
    ThumbnailVisual = CDCompThumbnailData::GetThumbnailVisual((CDCompThumbnailData *)v22);
  else
    ThumbnailVisual = v39((CDCompThumbnailData *)v22);
  updated = VisualCollection::InsertRelative((VisualCollection *)(v22[12] + 32LL), ThumbnailVisual, 0LL, 0, 1);
  v15 = updated;
  if ( updated < 0 )
  {
    v48 = 3069;
    goto LABEL_87;
  }
  if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v16 + 15)) )
  {
    updated = CVisual::RenderRecursive((CVisual *)v22[12]);
    v15 = updated;
    if ( updated < 0 )
    {
      v48 = 3075;
LABEL_87:
      v46 = updated;
      goto LABEL_67;
    }
  }
LABEL_46:
  v41 = (CVisual *)*((_QWORD *)v16 + 50);
  if ( v41 )
    CVisual::SetDirtyFlags(v41, 0x8000000);
LABEL_48:
  if ( v49 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v13 )
    CBaseObject::Release(v13);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v53);
  return (unsigned int)v15;
}
