/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0125780
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0119F38 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012525C (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@@Z @ 0x1C01252B4 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@@Z.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0125340 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01261EC (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01267B0 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C0126E88 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     IsMouseInterceptEnabled @ 0x1C012E760 (IsMouseInterceptEnabled.c)
 *     ApiSetCachePTPInertiaInfo @ 0x1C013D3A4 (ApiSetCachePTPInertiaInfo.c)
 *     ApiSetInternalSetCursorPos @ 0x1C0140DD8 (ApiSetInternalSetCursorPos.c)
 *     ApiSetSend3FingerTapHotkey @ 0x1C014143C (ApiSetSend3FingerTapHotkey.c)
 *     ApiSetSend4FingerTapHotkey @ 0x1C01414C0 (ApiSetSend4FingerTapHotkey.c)
 *     ApiSetSendPTPAsMouse @ 0x1C0141544 (ApiSetSendPTPAsMouse.c)
 *     ApiSetSendPTPCancelInertia @ 0x1C014181C (ApiSetSendPTPCancelInertia.c)
 *     ApiSetSendPTPEndInertia @ 0x1C01418C0 (ApiSetSendPTPEndInertia.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  int v4; // ecx
  CHidInput *v5; // rcx
  void *v6; // r9
  bool v7; // dl
  unsigned int v8; // r8d
  __int64 v9; // r8
  int v10; // ecx
  CPTPProcessor *v11; // rcx
  int v12; // ecx
  CPTPProcessor *v13; // rcx
  CTouchProcessor *v14; // rcx
  CTouchProcessor *v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rdx

  if ( !HMValidateHandleNoSecure(*((_QWORD *)this + 49), 19) )
    return;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v16 = *((_DWORD *)a2 + 1);
      if ( !v16 )
      {
        ApiSetCachePTPInertiaInfo((char *)this + 8, *((_QWORD *)this + 49));
        return;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 && (*((_DWORD *)this + 42) & 1) != 0 )
            ApiSetSendPTPEndInertia((char *)this + 8);
          return;
        }
        v19 = 1LL;
      }
      else
      {
        v19 = 0LL;
      }
      ApiSetSendPTPCancelInertia((char *)this + 8, v19);
      return;
    case 1:
      if ( *((_DWORD *)a2 + 1) == 5 )
        ApiSetInternalSetCursorPos(*((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3), 2LL);
      else
        ApiSetSendPTPAsMouse(
          *((_QWORD *)a2 + 1),
          (unsigned int)(1 << *((_DWORD *)a2 + 1)),
          ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *((unsigned int *)a2 + 4),
          *((_QWORD *)this + 49));
      break;
    case 2:
      if ( (!*((_DWORD *)a2 + 2)
         || CPTPProcessor::ShellEndpointExists((CPTPProcessor *)(unsigned int)(*(_DWORD *)a2 - 2)))
        && !(unsigned __int8)IsMouseInterceptEnabled() )
      {
        v10 = *((_DWORD *)a2 + 1);
        if ( !v10 )
        {
          CPTPProcessor::CreateGestureCache(
            (CPTPProcessor *)((char *)this - 216),
            *((_DWORD *)a2 + 5),
            (const struct PTPEngineOutput *)((char *)a2 + 24),
            *((_DWORD *)a2 + 2) != 0);
          return;
        }
        v11 = (CPTPProcessor *)(unsigned int)(v10 - 1);
        if ( !(_DWORD)v11 )
        {
          CPTPProcessor::CopyPointersIntoFrame(
            v11,
            *((struct CPointerInputFrame **)this + 48),
            v9,
            (const struct PTPEngineOutput *)((char *)a2 + 24));
          return;
        }
        v12 = (_DWORD)v11 - 1;
        if ( !v12 )
        {
          CPTPProcessor::SetHitTestResult(
            (CPTPProcessor *)((char *)this - 216),
            *((struct CPointerInputFrame **)this + 48),
            *((_DWORD *)a2 + 2) != 0);
          CTouchProcessor::ProcessInputWithoutHitTest(
            v15,
            *((struct CPointerInputFrame **)this + 48),
            *((_DWORD *)this + 102),
            *((_DWORD *)this + 103));
          *((_QWORD *)this + 48) = 0LL;
          return;
        }
        v13 = (CPTPProcessor *)(unsigned int)(v12 - 1);
        if ( !(_DWORD)v13 )
        {
          CPTPProcessor::CopyPointersIntoFrame(
            v13,
            *((struct CPointerInputFrame **)this + 50),
            v9,
            (const struct PTPEngineOutput *)((char *)a2 + 24));
          CPTPProcessor::SetHitTestResult(
            (CPTPProcessor *)((char *)this - 216),
            *((struct CPointerInputFrame **)this + 50),
            *((_DWORD *)a2 + 2) != 0);
          CTouchProcessor::ProcessInputWithoutHitTest(
            v14,
            *((struct CPointerInputFrame **)this + 50),
            *((_DWORD *)this + 102),
            *((_DWORD *)this + 103));
          *((_QWORD *)this + 50) = 0LL;
          return;
        }
        if ( (_DWORD)v13 != 1 )
          return;
      }
      CPTPProcessor::CleanupGestureState((CPTPProcessor *)((char *)this - 216));
      return;
    case 3:
      v5 = (CHidInput *)*((unsigned int *)a2 + 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 1 )
          return;
        v6 = 0LL;
        v7 = 1;
        v8 = 0;
      }
      else
      {
        v6 = (void *)*((_QWORD *)this + 49);
        v7 = 0;
        v8 = *((_DWORD *)a2 + 2);
      }
      CHidInput::HandlePTPTimer(v5, v7, v8, v6);
      break;
    default:
      if ( *(_DWORD *)a2 == 4 && !(unsigned __int8)IsMouseInterceptEnabled() )
      {
        v4 = *((_DWORD *)a2 + 1);
        if ( v4 )
        {
          if ( v4 == 1 )
            ApiSetSend4FingerTapHotkey();
        }
        else
        {
          ApiSetSend3FingerTapHotkey();
        }
      }
      break;
  }
}
