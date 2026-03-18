/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionIsCompositionInputWindow @ 0x1C0049760 (ApiSetEditionIsCompositionInputWindow.c)
 *     INPUTDEST_FROM_PWND @ 0x1C004C08C (INPUTDEST_FROM_PWND.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00A11AC (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00D5190 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00D51A8 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01182FC (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0122DC8 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C013AC30 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C013C67C (ApiSetEditionSetForegroundCheckNoActivate.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(CTouchProcessor *this, const struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *v2; // rdi
  PDEVICE_OBJECT v4; // r10
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // rbx
  unsigned int i; // esi
  int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  void *v13; // rdx
  int v14; // edx
  struct tagWND *UserWindow; // rdi
  __int64 v16; // rax
  int v17; // edx
  __int64 CompositionInputWindowUIOwner; // rax
  __int64 v19; // rax
  PVOID DeviceExtension; // rcx
  int v21; // r9d
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  unsigned int v24; // [rsp+30h] [rbp-1D8h]
  _QWORD v25[3]; // [rsp+38h] [rbp-1D0h] BYREF
  _DWORD v26[48]; // [rsp+50h] [rbp-1B8h] BYREF
  _OWORD v27[12]; // [rsp+110h] [rbp-F8h] BYREF

  v2 = a2;
  v4 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      171,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = *((_DWORD *)v2 + 12);
  v6 = 0;
  v7 = *((_QWORD *)v2 + 12);
  for ( i = 1; v6 < v5; ++v6 )
  {
    if ( (*(_QWORD *)(v7 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v7))
      && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v7) )
    {
      break;
    }
    v7 += 608LL;
  }
  if ( v6 == v5 )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)this + 1),
      (_DWORD)a2,
      11,
      172,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v11 = 173;
LABEL_11:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v10->DeviceExtension, v9, 11, v11, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    return 0LL;
  }
  if ( (*(_DWORD *)v7 & 0x1000) != 0 )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)this + 1),
      (_DWORD)a2,
      11,
      174,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v11 = 175;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v7 + 500) )
  {
    v13 = *(void **)(v7 + 272);
    if ( !v13 )
    {
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2, 11, 176, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 177;
      goto LABEL_11;
    }
    if ( !CInputDest::IsEqualByWindowHandle(v7 + 408, v13, 1) )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v14, 11, 178, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 179;
      goto LABEL_11;
    }
    UserWindow = CInputDest::GetUserWindow((CInputDest *)(v7 + 408));
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v7) )
    {
      if ( UserWindow )
      {
        v16 = *((_QWORD *)UserWindow + 2);
        if ( *(_QWORD *)(v16 + 384) != gpqForeground || (struct tagTHREADINFO *)v16 != gptiForeground )
        {
          if ( (unsigned int)ApiSetEditionIsCompositionInputWindow((__int64)UserWindow) )
          {
            CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(UserWindow);
            if ( CompositionInputWindowUIOwner )
              UserWindow = (struct tagWND *)CompositionInputWindowUIOwner;
          }
          if ( gpqForeground )
          {
            if ( gpqForeground == *(_QWORD *)(*((_QWORD *)UserWindow + 2) + 384LL)
              && (*(_DWORD *)(gpqForeground + 340) & 0x2000000) != 0 )
            {
              v19 = *(_QWORD *)(gpqForeground + 80);
              if ( v19 )
              {
                if ( gptiForeground == *(struct tagTHREADINFO **)(v19 + 16) )
                {
                  LOBYTE(v17) = 4;
                  WPP_RECORDER_SF_(
                    *((_QWORD *)this + 1),
                    v17,
                    11,
                    180,
                    (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
                    v21 = 181;
LABEL_42:
                    LOBYTE(a2) = 5;
                    WPP_RECORDER_SF_(
                      (_DWORD)DeviceExtension,
                      (_DWORD)a2,
                      11,
                      v21,
                      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
                    return i;
                  }
                  return i;
                }
              }
            }
          }
          v25[0] = *((_QWORD *)gptiCurrent + 46);
          *((_QWORD *)gptiCurrent + 46) = v25;
          v25[1] = UserWindow;
          ++*((_DWORD *)UserWindow + 2);
          v22 = INPUTDEST_FROM_PWND(v26, (__int64)UserWindow);
          v27[0] = *v22;
          v27[1] = v22[1];
          v27[2] = v22[2];
          v27[3] = v22[3];
          v27[4] = v22[4];
          v27[5] = v22[5];
          v27[6] = v22[6];
          v23 = v22[7];
          v22 += 8;
          v27[7] = v23;
          v27[8] = *v22;
          v27[9] = v22[1];
          v27[10] = v22[2];
          v27[11] = v22[3];
          CInpLockGuard::UnLock((CTouchProcessor *)((char *)this + 200));
          i = ApiSetEditionSetForegroundCheckNoActivate(v27);
          CInpLockGuard::LockExclusive((PERESOURCE *)this + 25);
          ThreadUnlock1();
        }
      }
    }
    v4 = WPP_GLOBAL_Control;
  }
  else
  {
    i = v24;
  }
  if ( LOWORD(v4->DeviceType) )
  {
    DeviceExtension = v4->DeviceExtension;
    v21 = 182;
    goto LABEL_42;
  }
  return i;
}
