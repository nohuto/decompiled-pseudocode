/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C011D86C
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1C00B9F90 (NtUserStopAndEndInertia.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ApiSetEditionPostInertiaMessage @ 0x1C013F820 (ApiSetEditionPostInertiaMessage.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(CTouchProcessor *this, int a2, void *a3)
{
  __int64 *v3; // rsi
  __int64 i; // rcx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // r11
  __int64 v10; // r8
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  unsigned int v13; // ebx
  __int64 v15; // rbx
  CInpLockGuard *v16; // [rsp+30h] [rbp-D8h] BYREF
  int v17; // [rsp+38h] [rbp-D0h]
  _BYTE v18[176]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = (__int64 *)gpTouchProcessor;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v16,
    (CTouchProcessor *)((char *)gpTouchProcessor + 72));
  for ( i = v3[16]; ; i = *(_QWORD *)(i + 8) )
  {
    if ( (__int64 *)i == v3 + 15 )
    {
      WPP_RECORDER_SF_(v3[1], 2u, 0xBu, 0x132u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      UserSetLastError(1168);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 307;
        goto LABEL_10;
      }
      goto LABEL_11;
    }
    v7 = *(_DWORD *)(i + 40);
    v8 = 0;
    if ( v7 )
      break;
LABEL_6:
    ;
  }
  v9 = *(_QWORD *)(i + 88);
  while ( 1 )
  {
    v10 = 576LL * v8;
    if ( *(unsigned __int16 *)(v10 + v9 + 236) == a2 )
      break;
    if ( ++v8 >= v7 )
      goto LABEL_6;
  }
  v15 = v10 + v9;
  if ( !CSpatialProcessor::ResolveInputSinkToINPUTDEST(
          (CSpatialProcessor *)v3,
          a3,
          *(_DWORD *)(v10 + v9 + 232),
          (struct tagINPUTDEST *)v18) )
  {
    WPP_RECORDER_SF_(v3[1], 2u, 0xBu, 0x134u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    UserSetLastError(1168);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 309;
LABEL_10:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
LABEL_11:
    v13 = 0;
    goto LABEL_12;
  }
  v13 = ApiSetEditionPostInertiaMessage(v18, v15 + 232);
LABEL_12:
  if ( !v17 )
    CInpLockGuard::UnLock((PERESOURCE *)v16);
  return v13;
}
