/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHI_KPEAX@Z @ 0x1C01274DC
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1C00EA690 (NtUserStopAndEndInertia.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ApiSetEditionPostInertiaMessage @ 0x1C013B054 (ApiSetEditionPostInertiaMessage.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(CTouchProcessor *this, int a2, CompositionObject *a3, void *a4)
{
  __int64 *v4; // rsi
  __int64 i; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // rbx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  unsigned int v14; // ebx
  PERESOURCE *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-F8h] BYREF
  int v18; // [rsp+38h] [rbp-F0h]
  _BYTE v19[192]; // [rsp+40h] [rbp-E8h] BYREF

  v4 = *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v17,
    (struct CInpLockGuard *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL));
  for ( i = v4[36]; ; i = *(_QWORD *)(i + 8) )
  {
    if ( (__int64 *)i == v4 + 35 )
    {
      WPP_RECORDER_SF_(v4[1], 2u, 0xBu, 0x11Fu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      UserSetLastError(1168);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 288;
        goto LABEL_9;
      }
      goto LABEL_10;
    }
    v9 = *(_DWORD *)(i + 40);
    v10 = 0;
    if ( v9 )
      break;
LABEL_5:
    ;
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(i + 88) + 608LL * v10;
    if ( *(unsigned __int16 *)(v11 + 252) == a2 )
      break;
    if ( ++v10 >= v9 )
      goto LABEL_5;
  }
  if ( !CSpatialProcessor::ResolveInputSinkToINPUTDEST(
          (CSpatialProcessor *)v4,
          a4,
          a3,
          *(_DWORD *)(v11 + 248),
          (struct tagINPUTDEST *)v19) )
  {
    WPP_RECORDER_SF_(v4[1], 2u, 0xBu, 0x121u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    UserSetLastError(1168);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 290;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  v14 = ApiSetEditionPostInertiaMessage(v19, v11 + 248);
LABEL_11:
  if ( !v18 )
  {
    v15 = (PERESOURCE *)v17;
    *(_QWORD *)(v17 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v15);
  }
  return v14;
}
