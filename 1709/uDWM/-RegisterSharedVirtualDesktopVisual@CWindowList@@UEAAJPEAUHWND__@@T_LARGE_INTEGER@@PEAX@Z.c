/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x18007C380
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180035E44 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x180079B2C (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  struct CVisual *v8; // r14
  int SyncedWindowDataByHwnd; // eax
  int v10; // edi
  int v11; // r9d
  struct CWindowData *v12; // r15
  CDCompVirtualDesktopThumbnailData *v13; // rax
  CDCompVirtualDesktopThumbnailData *v14; // rsi
  CDesktopManager *v15; // rax
  int v16; // eax
  _QWORD *v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-30h]
  unsigned int v28; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v29; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v30; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+48h] [rbp-8h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v28 = 0;
  v8 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v30);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v27 = 3172;
LABEL_3:
    v11 = SyncedWindowDataByHwnd;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v27);
    goto LABEL_39;
  }
  v12 = v30;
  if ( !v30 )
  {
    v10 = -2147024809;
    goto LABEL_39;
  }
  v13 = (CDCompVirtualDesktopThumbnailData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                               WPF::g_pProcessHeap,
                                               192LL);
  if ( v13 )
    v14 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v13);
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v10 = -2147024882;
    v27 = 3183;
LABEL_37:
    v11 = v10;
    goto LABEL_38;
  }
  v15 = CDesktopManager::s_pDesktopManagerInstance;
  *((union _LARGE_INTEGER *)v14 + 1) = a3;
  *((_QWORD *)v14 + 2) = v12;
  *((_QWORD *)v14 + 3) = 0LL;
  *((_WORD *)v14 + 16) = 0;
  *((_BYTE *)v14 + 34) = 1;
  *((_DWORD *)v14 + 28) = 2;
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned int *))(**((_QWORD **)v15 + 4)
                                                                                              + 120LL))(
                             *((_QWORD *)v15 + 4),
                             a4,
                             38LL,
                             &v28);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v27 = 3195;
    goto LABEL_3;
  }
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v27 = 3198;
    goto LABEL_3;
  }
  v16 = CVisual::WrapExistingResource(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v28,
          (struct CResource ***)&v29);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC82u);
    v8 = v29;
    goto LABEL_39;
  }
  v8 = v29;
  v17 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v14 + 12) = v29;
  v18 = *((unsigned int *)this + 94);
  v19 = v28;
  v30 = v14;
  v20 = v18 + 1;
  if ( (int)v18 + 1 >= (unsigned int)v18 )
    v19 = v18 + 1;
  v10 = v20 < (unsigned int)v18 ? 0x80070216 : 0;
  if ( v20 >= (unsigned int)v18 )
  {
    if ( v19 > *((_DWORD *)this + 93) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17, 8u, 1, &v30);
      v10 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v17 + 8 * v18) = v30;
      *((_DWORD *)this + 94) = v19;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
  }
  if ( v10 < 0 )
  {
    v27 = 3206;
    goto LABEL_37;
  }
  v22 = v28;
  v30 = v14;
  v8 = 0LL;
  v23 = *((unsigned int *)v12 + 126);
  v24 = v23 + 1;
  if ( (int)v23 + 1 >= (unsigned int)v23 )
    v22 = v23 + 1;
  v10 = v24 < (unsigned int)v23 ? 0x80070216 : 0;
  if ( v24 >= (unsigned int)v23 )
  {
    if ( v22 > *((_DWORD *)v12 + 125) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12 + 480, 8u, 1, &v30);
      v10 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v12 + 60) + 8 * v23) = v30;
      *((_DWORD *)v12 + 126) = v22;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
  }
  if ( v10 < 0 )
  {
    v27 = 3212;
    goto LABEL_37;
  }
LABEL_39:
  CloseHandle(a4);
  if ( v28 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v8 )
    CBaseObject::Release(v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return (unsigned int)v10;
}
