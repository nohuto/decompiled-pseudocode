/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002B780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18000CBA0 (-GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000CBC0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000CD1C (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020DE0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002614C (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800348B0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180035E44 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_q @ 0x18007D15C (EtwppTemplate_q.c)
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
  char IsBaseThumbnailDestinationReachable; // al
  LPVOID (__fastcall *v20)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  CDesktopManager *v23; // rax
  int v24; // eax
  _QWORD *v25; // r10
  __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 (__fastcall *v35)(CDCompThumbnailData *); // rax
  int v36; // eax
  int updated; // eax
  struct CVisual *(__fastcall *v38)(CDCompThumbnailData *); // rax
  struct CVisual **ThumbnailVisual; // rax
  CVisual *v40; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // r9d
  struct CVisual **v46; // rax
  unsigned int v47; // [rsp+20h] [rbp-40h]
  unsigned int v48; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v49; // [rsp+38h] [rbp-28h] BYREF
  struct CVisual *v50; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v51; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v52; // [rsp+50h] [rbp-10h] BYREF

  v52 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v48 = 0;
  v50 = 0LL;
  v13 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v51);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v47 = 3033;
LABEL_63:
    v45 = SyncedWindowDataByHwnd;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, v47);
    goto LABEL_48;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v49);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v47 = 3034;
    goto LABEL_63;
  }
  v16 = v51;
  if ( !v51 )
    goto LABEL_70;
  v17 = a4 == 0;
  v18 = v49;
  if ( v17 )
  {
    if ( v49 )
      goto LABEL_6;
LABEL_70:
    v15 = -2147024809;
    goto LABEL_48;
  }
  if ( v49 )
    goto LABEL_70;
LABEL_6:
  *((_QWORD *)this + 49) = v51;
  if ( v18 )
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                            (struct CWindowData **)this,
                                            v18);
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
    v47 = 3064;
    v45 = -2147024882;
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
                             38LL,
                             &v48);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v47 = 3077;
    goto LABEL_63;
  }
  if ( dword_1800BE044
    && (unsigned __int8)(byte_1800BE048 - 1) > 2u
    && (qword_1800BE030 & 0x8000000000000001uLL) != 0
    && (qword_1800BE038 & 0x8000000000000001uLL) == qword_1800BE038 )
  {
    EtwppTemplate_q(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &EtwTraceInfo_9005, a2);
  }
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v47 = 3082;
    goto LABEL_63;
  }
  v24 = CVisual::WrapExistingResource(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v48,
          &v50);
  v15 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0Eu);
    v13 = v50;
    goto LABEL_48;
  }
  v13 = v50;
  v25 = (_QWORD *)((char *)this + 352);
  v22[12] = v50;
  v26 = *((unsigned int *)this + 94);
  v27 = v48;
  v51 = (struct CWindowData *)v22;
  v28 = v26 + 1;
  if ( (int)v26 + 1 >= (unsigned int)v26 )
    v27 = v26 + 1;
  v15 = v28 < (unsigned int)v26 ? 0x80070216 : 0;
  if ( v28 < (unsigned int)v26 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v27 > *((_DWORD *)this + 93) )
  {
    v42 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v25, 8u, 1, &v51);
    v15 = v42;
    if ( v42 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*v25 + 8 * v26) = v51;
    *((_DWORD *)this + 94) = v27;
  }
  if ( v15 < 0 )
  {
    v47 = 3090;
LABEL_66:
    v45 = v15;
    goto LABEL_67;
  }
  v29 = v48;
  v13 = 0LL;
  v51 = (struct CWindowData *)v22;
  v30 = *((unsigned int *)v16 + 126);
  v31 = v30 + 1;
  if ( (int)v30 + 1 >= (unsigned int)v30 )
    v29 = v30 + 1;
  v15 = v31 < (unsigned int)v30 ? 0x80070216 : 0;
  if ( v31 < (unsigned int)v30 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v29 > *((_DWORD *)v16 + 125) )
  {
    v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16 + 480, 8u, 1, &v51);
    v15 = v43;
    if ( v43 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v16 + 60) + 8 * v30) = v51;
    *((_DWORD *)v16 + 126) = v29;
  }
  if ( v15 < 0 )
  {
    v47 = 3098;
    goto LABEL_66;
  }
  if ( v18 )
  {
    v32 = v48;
    v51 = (struct CWindowData *)v22;
    v33 = *((unsigned int *)v18 + 134);
    v34 = v33 + 1;
    if ( (int)v33 + 1 >= (unsigned int)v33 )
      v32 = v33 + 1;
    v15 = v34 < (unsigned int)v33 ? 0x80070216 : 0;
    if ( v34 < (unsigned int)v33 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
    }
    else if ( v32 > *((_DWORD *)v18 + 133) )
    {
      v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18 + 512, 8u, 1, &v51);
      v15 = v44;
      if ( v44 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v18 + 64) + 8 * v33) = v51;
      *((_DWORD *)v18 + 134) = v32;
    }
    if ( v15 < 0 )
    {
      v47 = 3101;
      goto LABEL_66;
    }
  }
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
    v15 = updated;
    if ( updated < 0 )
    {
      v47 = 3113;
      goto LABEL_87;
    }
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22);
    v15 = updated;
    if ( updated < 0 )
    {
      v47 = 3114;
      goto LABEL_87;
    }
    v46 = (struct CVisual **)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    updated = VisualCollection::InsertRelative((VisualCollection *)(v22[12] + 32LL), v46, 0LL, 0, 1);
    v15 = updated;
    if ( updated < 0 )
    {
      v47 = 3115;
      goto LABEL_87;
    }
    goto LABEL_46;
  }
  v35 = *(__int64 (__fastcall **)(CDCompThumbnailData *))(*v22 + 8LL);
  if ( v35 == CDCompThumbnailData::EnsureThumbnailVisual )
    v36 = CDCompThumbnailData::EnsureThumbnailVisual((CDCompThumbnailData *)v22);
  else
    v36 = v35((CDCompThumbnailData *)v22);
  v15 = v36;
  if ( v36 < 0 )
  {
    v47 = 3119;
    goto LABEL_66;
  }
  updated = CThumbnailData::UpdateProperties((CThumbnailData *)v22, a6);
  v15 = updated;
  if ( updated < 0 )
  {
    v47 = 3120;
    goto LABEL_87;
  }
  v38 = *(struct CVisual *(__fastcall **)(CDCompThumbnailData *))(*v22 + 16LL);
  if ( v38 == CDCompThumbnailData::GetThumbnailVisual )
    ThumbnailVisual = (struct CVisual **)CDCompThumbnailData::GetThumbnailVisual((CDCompThumbnailData *)v22);
  else
    ThumbnailVisual = (struct CVisual **)v38((CDCompThumbnailData *)v22);
  updated = VisualCollection::InsertRelative((VisualCollection *)(v22[12] + 32LL), ThumbnailVisual, 0LL, 0, 1);
  v15 = updated;
  if ( updated < 0 )
  {
    v47 = 3121;
    goto LABEL_87;
  }
  if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v16 + 15)) )
  {
    updated = CVisual::RenderRecursive((CVisual *)v22[12]);
    v15 = updated;
    if ( updated < 0 )
    {
      v47 = 3127;
LABEL_87:
      v45 = updated;
      goto LABEL_67;
    }
  }
LABEL_46:
  v40 = (CVisual *)*((_QWORD *)v16 + 50);
  if ( v40 )
    CVisual::SetDirtyFlags(v40, 0x8000000);
LABEL_48:
  if ( v48 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v13 )
    CBaseObject::Release(v13);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
  return (unsigned int)v15;
}
