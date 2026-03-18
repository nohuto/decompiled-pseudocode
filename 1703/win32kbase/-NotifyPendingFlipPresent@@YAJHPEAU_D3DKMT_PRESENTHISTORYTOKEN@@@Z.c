/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000544C
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C00279D0 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00058D8 (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z @ 0x1C0006A30 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N3@Z @ 0x1C0006AA4 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010890 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0027680 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C002790C (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_ppqxxx @ 0x1C00DC2E0 (Template_ppqxxx.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0150940 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char a3)
{
  int v5; // ebx
  CompositionObject *v6; // rsi
  CCompositionSurface *v7; // r14
  bool v8; // r15
  UINT64 CompositionBindingId; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v14; // rsi
  struct tagTHREADINFO **v15; // rax
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  int v21; // ecx
  LARGE_INTEGER v22; // rsi
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  UINT64 CompositionSyncKey; // rcx
  UINT v28; // eax
  PRKSEMAPHORE v29; // rcx
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  CCompositionSurface *v31; // [rsp+58h] [rbp-18h] BYREF
  HWND v32; // [rsp+60h] [rbp-10h] BYREF
  void *v33; // [rsp+68h] [rbp-8h] BYREF
  DWORD LowPart; // [rsp+B8h] [rbp+48h] BYREF
  LONG HighPart; // [rsp+BCh] [rbp+4Ch]
  bool v36; // [rsp+C0h] [rbp+50h] BYREF
  int v37; // [rsp+C8h] [rbp+58h] BYREF

  Object = 0LL;
  v5 = CompositionSurfaceObject::ResolveHandle(
         (void *)a2->Token.Flip.hLogicalSurface,
         2u,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v5 >= 0 )
  {
    v6 = (CompositionObject *)Object;
    v31 = 0LL;
    v32 = 0LL;
    v5 = CompositionSurfaceObject::LockForWrite(Object, &v31);
    if ( v5 >= 0 )
    {
      v7 = v31;
      v8 = a2->Token.Flip.PresentLimitSemaphoreId != 0;
      if ( !CCompositionSurface::CheckBinding(v31, a2->CompositionBindingId, (enum CompositionBufferType *)&v37, &v32)
        || v37 != 2 )
      {
        v5 = -1073741811;
      }
      if ( v5 >= 0 )
      {
        CompositionBindingId = a2->CompositionBindingId;
        LOBYTE(LowPart) = 0;
        v36 = 0;
        v5 = CCompositionSurface::NotifyPendingFlipPresent(
               v7,
               CompositionBindingId,
               &a2->Token.Flip,
               v8,
               (bool *)&LowPart,
               &v36);
        if ( v5 >= 0 )
        {
          if ( (_BYTE)LowPart )
          {
            v28 = a2->Token.Flip.Flags.Value | 0x200000;
            a2->Token.Flip.Flags.Value = v28;
            if ( v36 )
              a2->Token.Flip.Flags.Value = v28 | 0x400000;
          }
        }
      }
      CInputSink::UnlockAndRelease(v7);
      if ( v5 >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, v10, v12);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v14 = 0LL;
        while ( 1 )
        {
          v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v15 )
            v14 = *v15;
          CurrentProcess = (PVOID)PsGetCurrentProcess();
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest )
            break;
          if ( gbRITBlockedOnDIT )
          {
            if ( v14 == gptiRit )
              break;
            _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v29 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v14 == gptiRit )
              break;
            _InterlockedAdd(&gcDITHitTestWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v29 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v29, UserRequest, 0, 0, 0LL);
        }
        v20 = PsGetCurrentThreadWin32Thread(v18, v17, v19);
        if ( v20 )
        {
          v22 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v20 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v21) = byte_1C0186D98 - 1;
            Template_xqx(
              v21,
              (unsigned int)&AcquiredSharedUserCritEvent,
              v23,
              v22.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
          if ( v22.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            Template_xqx(
              (_DWORD)gullUserCritAcquireToken,
              (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
              v23,
              0,
              1000 * v22.QuadPart / gliQpcFreq.QuadPart,
              (char)gullUserCritAcquireToken);
          }
          *(_QWORD *)(v20 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        if ( v32 )
        {
          if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsWindowDesktopComposed() )
            v5 = -1071775733;
        }
        else if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed() )
        {
          v5 = -1071775730;
        }
        UserSessionSwitchLeaveCrit();
        if ( v5 < 0 )
        {
          v6 = (CompositionObject *)Object;
        }
        else
        {
          KeEnterCriticalRegion();
          v6 = (CompositionObject *)Object;
          v5 = CTokenManager::EnsureTokenQueueForPresent((struct CompositionSurfaceObject *)Object);
          KeLeaveCriticalRegion();
          if ( v5 >= 0 )
          {
            v33 = 0LL;
            v5 = CompositionObject::OpenDwmHandle(v6, &v33);
            if ( v5 >= 0 )
            {
              a2->Token.Flip.hCompSurf = (LONG64)v33;
              *((_QWORD *)&a2->Token.SurfaceComplete + 7) = *((_QWORD *)v6 + 2);
              CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
              if ( CompositionSyncKey && !a2->Token.Flip.RemainingTokens )
                DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 0);
              LowPart = a2->Token.Flip.compSurfLuid.LowPart;
              HighPart = a2->Token.Flip.compSurfLuid.HighPart;
              if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
                Template_ppqxxx(
                  a2->Token.Flip.PresentCount,
                  v24,
                  v25,
                  (_DWORD)a2,
                  (char)v6,
                  a2->Token.Flip.SwapChainIndex,
                  a2->Token.Flip.PresentCount,
                  LowPart,
                  a2->CompositionBindingId);
            }
          }
        }
      }
    }
    ObfDereferenceObject(v6);
  }
  if ( v5 == -1071775730 )
  {
    v5 = NotifySurfaceOfSkippedToken(a2);
    if ( v5 >= 0 )
      return (unsigned int)-1071775730;
  }
  return (unsigned int)v5;
}
