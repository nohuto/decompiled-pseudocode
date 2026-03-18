/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B034
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C0057490 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0025338 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003C7C0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C005B1B4 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C005B2CC (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(
        __int64 a1,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        __int64 a3,
        __int64 a4)
{
  void *FenceValue; // r14
  int v5; // ebx
  int v7; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v9; // rdi
  struct tagTHREADINFO **v10; // rax
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 *v20; // rdi
  PVOID v22; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  void *v24; // [rsp+60h] [rbp+18h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v5 = 0;
  v24 = 0LL;
  v7 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v22 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v22 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v22, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit(v13, v12, v14, v15);
  v19 = 0xFFFFLL;
  if ( !v7
    || gProtocolType == -1
    || !g_pTokenManager
    || !*(_QWORD *)g_pTokenManager
    || !(unsigned int)UserIsCurrentThreadDesktopComposed() )
  {
    v5 = -1071775730;
  }
  UserSessionSwitchLeaveCrit(v19, v16, v17, v18);
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v5 = CompositionObject::ResolveHandle(FenceValue, 2u, 1, 4, &Object);
    if ( v5 >= 0 )
    {
      v20 = (unsigned __int64 *)Object;
      v5 = CompositionTokenObject::MarkPending((CompositionTokenObject *)Object);
      if ( v5 >= 0 )
      {
        v5 = CompositionObject::OpenDwmHandle((CompositionObject *)v20, &v24);
        if ( v5 >= 0 )
        {
          DirectComposition::CSynchronizationManager::NotifyPresent(v20[14], 0);
          a2->Token.Flip.FenceValue = (UINT64)v24;
        }
      }
      ObfDereferenceObject(v20);
    }
  }
  return (unsigned int)v5;
}
