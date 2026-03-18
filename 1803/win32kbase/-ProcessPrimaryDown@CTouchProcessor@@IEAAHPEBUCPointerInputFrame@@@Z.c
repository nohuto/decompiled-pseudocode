/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C011A24C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionIsCompositionInputWindow @ 0x1C003A9C0 (ApiSetEditionIsCompositionInputWindow.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0061D64 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01099E4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01172B0 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0117858 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C011D7D8 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C013E474 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C0140050 (ApiSetEditionSetForegroundCheckNoActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(CTouchProcessor *this, const struct CPointerInputFrame *a2)
{
  PDEVICE_OBJECT v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // ebp
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // r9d
  PDEVICE_OBJECT v14; // rcx
  unsigned __int16 v15; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 CompositionInputWindowUIOwner; // rax
  __int64 v26; // rax
  __int64 ThreadWin32Thread; // rax
  _OWORD *v28; // rax
  __int64 v29; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-1C0h]
  __int64 v31; // [rsp+40h] [rbp-1B8h]
  _DWORD v32[46]; // [rsp+48h] [rbp-1B0h] BYREF
  _OWORD v33[11]; // [rsp+100h] [rbp-F8h] BYREF

  v4 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xBAu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v5 = 0;
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((struct _KTHREAD **)this, *((unsigned int *)a2 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( (*((_DWORD *)a2 + 20) & 0x10) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v8 = *((_DWORD *)a2 + 12);
  v9 = 0;
  v10 = *((_QWORD *)a2 + 12);
  if ( v8 )
  {
    v11 = v8;
    do
    {
      v12 = *((_QWORD *)a2 + 12) + 576 * v11;
      if ( v10 >= v12 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v6);
      if ( (*(_QWORD *)(v10 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v10))
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v10) )
      {
        break;
      }
      v10 += 576LL;
      v11 = v13;
      ++v9;
      v8 = v13;
    }
    while ( v9 < v13 );
  }
  if ( v9 == v8 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xBBu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v15 = 188;
LABEL_20:
    WPP_RECORDER_SF_(
      (__int64)v14->DeviceExtension,
      5u,
      0xBu,
      v15,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 0LL;
  }
  v17 = *((_QWORD *)a2 + 12) + 576LL * v8;
  if ( v10 >= v17 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v6);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  if ( !*(_QWORD *)(v10 + 16) && !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
  if ( (*(_DWORD *)v10 & 0x1000) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xBDu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v15 = 190;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v10 + 476) )
  {
    v22 = *(void **)(v10 + 256);
    if ( !v22 )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xBFu,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v14 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v15 = 192;
      goto LABEL_20;
    }
    if ( !CInputDest::IsEqualByWindowHandle(v10 + 392, v22, 1) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xC1u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v14 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v15 = 194;
      goto LABEL_20;
    }
    v23 = *(_DWORD *)(v10 + 476) == 2 ? *(_QWORD *)(v10 + 464) : 0LL;
    v5 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v10) )
    {
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 16);
        if ( *(_QWORD *)(v24 + 424) != gpqForeground || (struct tagTHREADINFO *)v24 != gptiForeground )
        {
          if ( (unsigned int)ApiSetEditionIsCompositionInputWindow(v23) )
          {
            CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(v23);
            if ( CompositionInputWindowUIOwner )
              v23 = CompositionInputWindowUIOwner;
          }
          if ( gpqForeground )
          {
            if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(v23 + 16) + 424LL)
              && (*(_DWORD *)(gpqForeground + 388) & 0x2000000) != 0 )
            {
              v26 = *(_QWORD *)(gpqForeground + 112);
              if ( v26 )
              {
                if ( gptiForeground == *(struct tagTHREADINFO **)(v26 + 16) )
                {
                  WPP_RECORDER_SF_(
                    *((_QWORD *)this + 1),
                    4u,
                    0xBu,
                    0xC3u,
                    (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      0xBu,
                      0xC4u,
                      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
                  return 1LL;
                }
              }
            }
          }
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v29 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v29;
          v30 = v23;
          _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
          v28 = INPUTDEST_FROM_PWND(v32, v23);
          v33[0] = *v28;
          v33[1] = v28[1];
          v33[2] = v28[2];
          v33[3] = v28[3];
          v33[4] = v28[4];
          v33[5] = v28[5];
          v33[6] = v28[6];
          v33[7] = v28[7];
          v33[8] = v28[8];
          v33[9] = v28[9];
          v33[10] = v28[10];
          CInpLockGuard::UnLock((PERESOURCE *)this + 9);
          v5 = ApiSetEditionSetForegroundCheckNoActivate(v33);
          CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
          ThreadUnlock1();
        }
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xC5u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return v5;
}
