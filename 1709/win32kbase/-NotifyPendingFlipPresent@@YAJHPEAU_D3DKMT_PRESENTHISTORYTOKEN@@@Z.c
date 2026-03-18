/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00574B8
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C0057490 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0021950 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x1C0038E28 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C0038EAC (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003C7C0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00584A0 (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C005B1B4 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     McTemplateK0ppqxxx @ 0x1C00E2DBC (McTemplateK0ppqxxx.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C01519F0 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  int v5; // ebx
  struct CompositionSurfaceObject *v6; // rsi
  UINT64 CompositionBindingId; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v13; // rsi
  struct tagTHREADINFO **v14; // rax
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  HWND v19; // rcx
  int v20; // r8d
  UINT64 CompositionSyncKey; // rcx
  UINT v23; // eax
  PVOID v24; // rcx
  int v25; // [rsp+50h] [rbp-30h] BYREF
  CInputSink *v26; // [rsp+58h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  HWND v28; // [rsp+68h] [rbp-18h] BYREF
  void *v29; // [rsp+70h] [rbp-10h] BYREF
  DWORD LowPart; // [rsp+C8h] [rbp+48h] BYREF
  LONG HighPart; // [rsp+CCh] [rbp+4Ch]
  bool v32; // [rsp+D0h] [rbp+50h] BYREF
  bool v33; // [rsp+D8h] [rbp+58h] BYREF

  Object = 0LL;
  v5 = CompositionSurfaceObject::ResolveHandle(
         (void *)a2->Token.Flip.hLogicalSurface,
         2LL,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v5 >= 0 )
  {
    v6 = (struct CompositionSurfaceObject *)Object;
    v26 = 0LL;
    v28 = 0LL;
    v5 = CompositionSurfaceObject::LockForWrite((char *)Object, &v26);
    if ( v5 >= 0 )
    {
      if ( !CCompositionSurface::CheckBinding(
              v26,
              a2->CompositionBindingId,
              (enum CompositionBufferType *)&v25,
              &v28,
              &v33)
        || v25 != 2 )
      {
        v5 = -1073741811;
      }
      if ( v5 >= 0 )
      {
        CompositionBindingId = a2->CompositionBindingId;
        LOBYTE(LowPart) = 0;
        v32 = 0;
        v5 = CCompositionSurface::NotifyPendingFlipPresent(
               v26,
               CompositionBindingId,
               &a2->Token.Flip,
               (bool *)&LowPart,
               &v32);
        if ( v5 >= 0 )
        {
          if ( (_BYTE)LowPart )
          {
            v23 = a2->Token.Flip.Flags.Value | 0x200000;
            a2->Token.Flip.Flags.Value = v23;
            if ( v32 )
              a2->Token.Flip.Flags.Value = v23 | 0x400000;
          }
        }
      }
      CInputSink::UnlockAndRelease(v26);
      if ( v5 >= 0 )
      {
        if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          v13 = 0LL;
          while ( 1 )
          {
            v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
            if ( v14 )
              v13 = *v14;
            CurrentProcess = (PVOID)PsGetCurrentProcess();
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest )
              break;
            if ( gbRITBlockedOnDIT )
            {
              if ( v13 == gptiRit )
                break;
              _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              v24 = gpsemRITBlockedOnDITWaiters;
            }
            else
            {
              if ( gbDITInHitTest != 1 || v13 == gptiRit )
                break;
              _InterlockedIncrement(&gcDITHitTestWaiters);
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              v24 = gpsemDITHitTestWaiters;
            }
            KeWaitForSingleObject(v24, UserRequest, 0, 0, 0LL);
          }
          EtwTraceAcquiredSharedUserCrit();
          v19 = v28;
          if ( v28 )
          {
            if ( !a1
              || gProtocolType == -1
              || !g_pTokenManager
              || !*(_QWORD *)g_pTokenManager
              || !(unsigned int)UserIsWindowDesktopComposed() )
            {
              v5 = -1071775733;
            }
          }
          else if ( !a1
                 || gProtocolType == -1
                 || !g_pTokenManager
                 || !*(_QWORD *)g_pTokenManager
                 || !(unsigned int)UserIsCurrentThreadDesktopComposed() )
          {
            v5 = -1071775730;
          }
          UserSessionSwitchLeaveCrit((__int64)v19, v16, v17, v18);
          v6 = (struct CompositionSurfaceObject *)Object;
        }
        if ( v5 >= 0 )
        {
          KeEnterCriticalRegion();
          v5 = CTokenManager::EnsureTokenQueueForPresent(v6);
          KeLeaveCriticalRegion();
          if ( v5 >= 0 )
          {
            v29 = 0LL;
            v5 = CompositionObject::OpenDwmHandle(v6, &v29);
            if ( v5 >= 0 )
            {
              a2->Token.Flip.hCompSurf = (LONG64)v29;
              *((_QWORD *)&a2->Token.SurfaceComplete + 7) = *((_QWORD *)v6 + 2);
              CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
              if ( CompositionSyncKey && !a2->Token.Flip.RemainingTokens )
                DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 0);
              LowPart = a2->Token.Flip.compSurfLuid.LowPart;
              HighPart = a2->Token.Flip.compSurfLuid.HighPart;
              if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
                McTemplateK0ppqxxx(
                  CompositionSyncKey,
                  a2->Token.Flip.PresentCount,
                  v20,
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
