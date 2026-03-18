/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0124780
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0016F4C (INPUTDEST_FROM_PWND.c)
 *     ApiSetEditionIsCompositionInputWindow @ 0x1C0017B70 (ApiSetEditionIsCompositionInputWindow.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01171A4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0122420 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C012745C (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C0139E3C (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C013B934 (ApiSetEditionSetForegroundCheckNoActivate.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(CTouchProcessor *this, const struct CPointerInputFrame *a2)
{
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // rdi
  unsigned int i; // esi
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // r9
  void *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 CompositionInputWindowUIOwner; // rax
  __int64 v15; // rax
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // r9
  __int64 ThreadWin32Thread; // rax
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // [rsp+30h] [rbp-1D8h]
  _QWORD v27[3]; // [rsp+38h] [rbp-1D0h] BYREF
  _DWORD v28[48]; // [rsp+50h] [rbp-1B8h] BYREF
  _OWORD v29[12]; // [rsp+110h] [rbp-F8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xABu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v4 = *((_DWORD *)a2 + 12);
  v5 = 0;
  v6 = *((_QWORD *)a2 + 12);
  for ( i = 1; v5 < v4; ++v5 )
  {
    if ( (*(_QWORD *)(v6 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v6))
      && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v6) )
    {
      break;
    }
    v6 += 608LL;
  }
  if ( v5 == v4 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xACu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v9 = 173;
LABEL_11:
    WPP_RECORDER_SF_(
      (__int64)v8->DeviceExtension,
      5u,
      0xBu,
      v9,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    return 0LL;
  }
  if ( (*(_DWORD *)v6 & 0x1000) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xAEu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v9 = 175;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v6 + 500) )
  {
    v11 = *(void **)(v6 + 272);
    if ( !v11 )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xB0u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v8 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v9 = 177;
      goto LABEL_11;
    }
    if ( !CInputDest::IsEqualByWindowHandle(v6 + 408, v11, 1) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xB2u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v8 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v9 = 179;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(v6 + 500) == 2 )
      v12 = *(_QWORD *)(v6 + 488);
    else
      v12 = 0LL;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v6) )
    {
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 16);
        if ( *(_QWORD *)(v13 + 408) != gpqForeground || (struct tagTHREADINFO *)v13 != gptiForeground )
        {
          if ( (unsigned int)ApiSetEditionIsCompositionInputWindow(v12) )
          {
            CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(v12);
            if ( CompositionInputWindowUIOwner )
              v12 = CompositionInputWindowUIOwner;
          }
          if ( gpqForeground )
          {
            if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)
              && (*(_DWORD *)(gpqForeground + 380) & 0x2000000) != 0 )
            {
              v15 = *(_QWORD *)(gpqForeground + 112);
              if ( v15 )
              {
                if ( gptiForeground == *(struct tagTHREADINFO **)(v15 + 16) )
                {
                  WPP_RECORDER_SF_(
                    *((_QWORD *)this + 1),
                    4u,
                    0xBu,
                    0xB4u,
                    (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
                  v16 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v17 = 181;
LABEL_44:
                    WPP_RECORDER_SF_(
                      (__int64)v16->DeviceExtension,
                      5u,
                      0xBu,
                      v17,
                      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
                    return i;
                  }
                  return i;
                }
              }
            }
          }
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v27[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v27;
          v27[1] = v12;
          _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
          v19 = INPUTDEST_FROM_PWND(v28, v12);
          v29[0] = *v19;
          v29[1] = v19[1];
          v29[2] = v19[2];
          v29[3] = v19[3];
          v29[4] = v19[4];
          v29[5] = v19[5];
          v29[6] = v19[6];
          v20 = v19[7];
          v19 += 8;
          v29[7] = v20;
          v29[8] = *v19;
          v29[9] = v19[1];
          v29[10] = v19[2];
          v21 = v19[3];
          *((_QWORD *)this + 32) = 0LL;
          v29[11] = v21;
          ExReleaseResourceAndLeaveCriticalRegion(*((PERESOURCE *)this + 28));
          i = ApiSetEditionSetForegroundCheckNoActivate(v29);
          CInpLockGuard::LockExclusive((PERESOURCE *)this + 28);
          ThreadUnlock1(v23, v22, v24, v25);
        }
      }
    }
  }
  else
  {
    i = v26;
  }
  v16 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v17 = 182;
    goto LABEL_44;
  }
  return i;
}
