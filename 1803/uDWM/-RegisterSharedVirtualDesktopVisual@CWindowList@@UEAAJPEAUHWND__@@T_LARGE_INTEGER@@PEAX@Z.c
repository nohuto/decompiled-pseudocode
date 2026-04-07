/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180085A00
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180037E84 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x180082CFC (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
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
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-30h]
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v27; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v28; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+48h] [rbp-8h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v26 = 0;
  v8 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v28);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3430;
LABEL_3:
    v11 = SyncedWindowDataByHwnd;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v25);
    goto LABEL_35;
  }
  v12 = v28;
  if ( !v28 )
  {
    v10 = -2147024809;
    goto LABEL_35;
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
    v25 = 3441;
LABEL_33:
    v11 = v10;
    goto LABEL_34;
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
                             &v26);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3453;
    goto LABEL_3;
  }
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3456;
    goto LABEL_3;
  }
  v16 = CVisual::WrapExistingResource(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v26,
          (struct CResource ***)&v27);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xD84u);
    v8 = v27;
    goto LABEL_35;
  }
  v8 = v27;
  v17 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v14 + 12) = v27;
  v18 = *((unsigned int *)this + 94);
  v28 = v14;
  v19 = v18 + 1;
  v10 = (int)v18 + 1 < (unsigned int)v18 ? 0x80070216 : 0;
  if ( (int)v18 + 1 >= (unsigned int)v18 )
  {
    if ( v19 > *((_DWORD *)this + 93) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17, 8, 1, &v28);
      v10 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v17 + 8 * v18) = v28;
      *((_DWORD *)this + 94) = v19;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xB5u);
  }
  if ( v10 < 0 )
  {
    v25 = 3464;
    goto LABEL_33;
  }
  v28 = v14;
  v21 = *((_DWORD *)v12 + 126);
  v8 = 0LL;
  v22 = v21 + 1;
  v10 = v21 + 1 < v21 ? 0x80070216 : 0;
  if ( v21 + 1 >= v21 )
  {
    if ( v22 > *((_DWORD *)v12 + 125) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12 + 480, 8, 1, &v28);
      v10 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v12 + 60) + 8LL * *((unsigned int *)v12 + 126)) = v28;
      *((_DWORD *)v12 + 126) = v22;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xB5u);
  }
  if ( v10 < 0 )
  {
    v25 = 3470;
    goto LABEL_33;
  }
LABEL_35:
  CloseHandle(a4);
  if ( v26 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v8 )
    CBaseObject::Release(v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)v10;
}
