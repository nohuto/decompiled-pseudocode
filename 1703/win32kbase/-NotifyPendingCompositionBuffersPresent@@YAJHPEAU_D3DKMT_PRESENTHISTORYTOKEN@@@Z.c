/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00279FC
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C00279D0 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0010B0C (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0010C48 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0027680 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C002790C (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(
        __int64 a1,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        __int64 a3)
{
  void *FenceValue; // r15
  int v4; // ebx
  int v6; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v8; // rdi
  struct tagTHREADINFO **v9; // rax
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  int v15; // ecx
  LARGE_INTEGER v16; // rdi
  int v17; // r8d
  __int64 *v18; // rdi
  PRKSEMAPHORE v20; // rcx
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  void *v22; // [rsp+70h] [rbp+18h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v4 = 0;
  v22 = 0LL;
  v6 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v8 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v8 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v20, UserRequest, 0, 0, 0LL);
  }
  v14 = PsGetCurrentThreadWin32Thread(v12, v11, v13);
  if ( v14 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      Template_xqx(v15, (unsigned int)&AcquiredSharedUserCritEvent, v17, v16.LowPart, 0, (char)gullUserCritAcquireToken);
    }
    if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        1000 * v16.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v17,
        0,
        1000 * v16.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  if ( !v6 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed() )
    v4 = -1071775730;
  UserSessionSwitchLeaveCrit();
  if ( v4 >= 0 )
  {
    Object = 0LL;
    v4 = CompositionObject::ResolveHandle(FenceValue, 2u, 1, 4, &Object);
    if ( v4 >= 0 )
    {
      v18 = (__int64 *)Object;
      v4 = CompositionTokenObject::MarkPending((CompositionTokenObject *)Object);
      if ( v4 >= 0 )
      {
        v4 = CompositionObject::OpenDwmHandle((CompositionObject *)v18, &v22);
        if ( v4 >= 0 )
        {
          DirectComposition::CSynchronizationManager::NotifyPresent(v18[14], 0);
          a2->Token.Flip.FenceValue = (UINT64)v22;
        }
      }
      ObfDereferenceObject(v18);
    }
  }
  return (unsigned int)v4;
}
