/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012AD40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     IsMouseInterceptEnabled @ 0x1C008E280 (IsMouseInterceptEnabled.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124264 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012A824 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_NIPEBUPTPEnginePointerNode@@@Z @ 0x1C012A87C (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_NIPEBUPTPEnginePointerNode@@.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012A90C (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012B71C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C012BC3C (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C012BD54 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ApiSetCachePTPInertiaInfo @ 0x1C0139074 (ApiSetCachePTPInertiaInfo.c)
 *     ApiSetInternalSetCursorPos @ 0x1C013C5C8 (ApiSetInternalSetCursorPos.c)
 *     ApiSetSend3FingerTapHotkey @ 0x1C013CC28 (ApiSetSend3FingerTapHotkey.c)
 *     ApiSetSend4FingerTapHotkey @ 0x1C013CCAC (ApiSetSend4FingerTapHotkey.c)
 *     ApiSetSendPTPAsMouse @ 0x1C013CD30 (ApiSetSendPTPAsMouse.c)
 *     ApiSetSendPTPCancelInertia @ 0x1C013CF74 (ApiSetSendPTPCancelInertia.c)
 *     ApiSetSendPTPEndInertia @ 0x1C013D018 (ApiSetSendPTPEndInertia.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(
        CPTPProcessor *this,
        const struct PTPEngineOutput *a2,
        __int64 a3,
        __int64 a4)
{
  const struct PTPEngineOutput *v4; // rbx
  int v6; // ecx
  CHidInput *v7; // rcx
  void *v8; // r9
  bool v9; // dl
  unsigned int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  CPTPProcessor *v14; // rcx
  int v15; // ecx
  CPTPProcessor *v16; // rcx
  void *v17; // rdx
  CTouchProcessor *v18; // rcx
  void *v19; // rdx
  CTouchProcessor *v20; // rcx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rdx

  v4 = a2;
  LOBYTE(a2) = 19;
  if ( !HMValidateHandleNoSecure(*((_QWORD *)this + 51), (__int64)a2, a3, a4) )
    return;
  switch ( *(_DWORD *)v4 )
  {
    case 0:
      v21 = *((_DWORD *)v4 + 1);
      if ( !v21 )
      {
        ApiSetCachePTPInertiaInfo((char *)this + 8, *((_QWORD *)this + 51));
        return;
      }
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( v23 == 1 && (*((_DWORD *)this + 42) & 1) != 0 )
            ApiSetSendPTPEndInertia((char *)this + 8);
          return;
        }
        v24 = 1LL;
      }
      else
      {
        v24 = 0LL;
      }
      ApiSetSendPTPCancelInertia((char *)this + 8, v24);
      return;
    case 1:
      if ( *((_DWORD *)v4 + 1) == 5 )
        ApiSetInternalSetCursorPos(*((unsigned int *)v4 + 2), *((unsigned int *)v4 + 3));
      else
        ApiSetSendPTPAsMouse(
          *((_QWORD *)v4 + 1),
          (unsigned int)(1 << *((_DWORD *)v4 + 1)),
          ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *((unsigned int *)v4 + 4),
          *((_QWORD *)this + 51));
      break;
    case 2:
      if ( (!*((_DWORD *)v4 + 2)
         || CPTPProcessor::ShellEndpointExists((CPTPProcessor *)(unsigned int)(*(_DWORD *)v4 - 2)))
        && !IsMouseInterceptEnabled() )
      {
        v13 = *((_DWORD *)v4 + 1);
        if ( !v13 )
        {
          CPTPProcessor::CreateGestureCache(
            (CPTPProcessor *)((char *)this - 376),
            *((_DWORD *)v4 + 5),
            (const struct PTPEngineOutput *)((char *)v4 + 24),
            *((_DWORD *)v4 + 2) != 0);
          return;
        }
        v14 = (CPTPProcessor *)(unsigned int)(v13 - 1);
        if ( !(_DWORD)v14 )
        {
          CPTPProcessor::CopyPointersIntoFrame(
            v14,
            *((struct CPointerInputFrame **)this + 50),
            v11,
            v12,
            (const struct PTPEngineOutput *)((char *)v4 + 24));
          return;
        }
        v15 = (_DWORD)v14 - 1;
        if ( !v15 )
        {
          CPTPProcessor::SetHitTestResult(
            (CPTPProcessor *)((char *)this - 376),
            *((struct CPointerInputFrame **)this + 50),
            *((_DWORD *)v4 + 2) != 0);
          CTouchProcessor::ProcessInputWithoutHitTest(
            v20,
            v19,
            *((struct CPointerInputFrame **)this + 50),
            *((_DWORD *)this + 106),
            *((_DWORD *)this + 107));
          *((_QWORD *)this + 50) = 0LL;
          return;
        }
        v16 = (CPTPProcessor *)(unsigned int)(v15 - 1);
        if ( !(_DWORD)v16 )
        {
          CPTPProcessor::CopyPointersIntoFrame(
            v16,
            *((struct CPointerInputFrame **)this + 52),
            v11,
            v12,
            (const struct PTPEngineOutput *)((char *)v4 + 24));
          CPTPProcessor::SetHitTestResult(
            (CPTPProcessor *)((char *)this - 376),
            *((struct CPointerInputFrame **)this + 52),
            *((_DWORD *)v4 + 2) != 0);
          CTouchProcessor::ProcessInputWithoutHitTest(
            v18,
            v17,
            *((struct CPointerInputFrame **)this + 52),
            *((_DWORD *)this + 106),
            *((_DWORD *)this + 107));
          *((_QWORD *)this + 52) = 0LL;
          return;
        }
        if ( (_DWORD)v16 != 1 )
          return;
      }
      CPTPProcessor::CleanupGestureState((CPTPProcessor *)((char *)this - 376));
      return;
    case 3:
      v7 = (CHidInput *)*((unsigned int *)v4 + 1);
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 1 )
          return;
        v8 = 0LL;
        v9 = 1;
        v10 = 0;
      }
      else
      {
        v8 = (void *)*((_QWORD *)this + 51);
        v9 = 0;
        v10 = *((_DWORD *)v4 + 2);
      }
      CHidInput::HandlePTPTimer(v7, v9, v10, v8);
      break;
    default:
      if ( *(_DWORD *)v4 == 4 && !IsMouseInterceptEnabled() )
      {
        v6 = *((_DWORD *)v4 + 1);
        if ( v6 )
        {
          if ( v6 == 1 )
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
