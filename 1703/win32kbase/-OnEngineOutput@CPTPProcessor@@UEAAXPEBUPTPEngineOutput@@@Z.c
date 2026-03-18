/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124C0C (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012B178 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_NIPEBUPTPEnginePointerNode@@@Z @ 0x1C012B1D0 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_NIPEBUPTPEnginePointerNode@@.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012B260 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012C0A0 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C012C518 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C012C62C (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ApiSetCachePTPInertiaInfo @ 0x1C0139D74 (ApiSetCachePTPInertiaInfo.c)
 *     ApiSetInternalSetCursorPos @ 0x1C013D0F4 (ApiSetInternalSetCursorPos.c)
 *     ApiSetSend3FingerTapHotkey @ 0x1C013D758 (ApiSetSend3FingerTapHotkey.c)
 *     ApiSetSend4FingerTapHotkey @ 0x1C013D7DC (ApiSetSend4FingerTapHotkey.c)
 *     ApiSetSendPTPAsMouse @ 0x1C013D860 (ApiSetSendPTPAsMouse.c)
 *     ApiSetSendPTPCancelInertia @ 0x1C013DB28 (ApiSetSendPTPCancelInertia.c)
 *     ApiSetSendPTPEndInertia @ 0x1C013DBCC (ApiSetSendPTPEndInertia.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  CHidInput *v7; // rcx
  void *v8; // r9
  bool v9; // dl
  unsigned int v10; // r8d
  int v11; // ecx
  CPTPProcessor *v12; // rcx
  CPTPProcessor *v13; // rcx
  CPTPProcessor *v14; // rcx
  void *v15; // rdx
  CTouchProcessor *v16; // rcx
  bool v17; // zf
  void *v18; // rdx
  CTouchProcessor *v19; // rcx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rdx

  if ( !HMValidateHandleNoSecure(*((_QWORD *)this + 51), 19) )
    return;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v21 = *((_DWORD *)a2 + 1);
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
      v20 = *((_DWORD *)a2 + 1);
      if ( v20 == 5 )
        ApiSetInternalSetCursorPos(*((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3));
      else
        ApiSetSendPTPAsMouse(
          *((_QWORD *)a2 + 1),
          (unsigned int)(1 << v20),
          *((unsigned int *)a2 + 4),
          *((_QWORD *)this + 51));
      return;
    case 2:
      v11 = *((_DWORD *)a2 + 1);
      if ( !v11 )
      {
        CPTPProcessor::CreateGestureCache(
          (CPTPProcessor *)((char *)this - 352),
          *((_DWORD *)a2 + 5),
          (const struct PTPEngineOutput *)((char *)a2 + 24),
          *((_DWORD *)a2 + 2) != 0);
        return;
      }
      v12 = (CPTPProcessor *)(unsigned int)(v11 - 1);
      if ( !(_DWORD)v12 )
      {
        CPTPProcessor::CopyPointersIntoFrame(
          v12,
          *((struct CPointerInputFrame **)this + 50),
          v4,
          v5,
          (const struct PTPEngineOutput *)((char *)a2 + 24));
        return;
      }
      v13 = (CPTPProcessor *)(unsigned int)((_DWORD)v12 - 1);
      if ( (_DWORD)v13 )
      {
        v14 = (CPTPProcessor *)(unsigned int)((_DWORD)v13 - 1);
        if ( !(_DWORD)v14 )
        {
          if ( !*((_DWORD *)a2 + 2) || CPTPProcessor::ShellEndpointExists(v14) )
          {
            CPTPProcessor::CopyPointersIntoFrame(
              v14,
              *((struct CPointerInputFrame **)this + 52),
              v4,
              v5,
              (const struct PTPEngineOutput *)((char *)a2 + 24));
            CPTPProcessor::SetHitTestResult(
              (CPTPProcessor *)((char *)this - 352),
              *((struct CPointerInputFrame **)this + 52),
              *((_DWORD *)a2 + 2) != 0);
            CTouchProcessor::ProcessInputWithoutHitTest(
              v16,
              v15,
              *((struct CPointerInputFrame **)this + 52),
              *((_DWORD *)this + 106),
              *((_DWORD *)this + 107));
            *((_QWORD *)this + 52) = 0LL;
          }
          return;
        }
        if ( (_DWORD)v14 != 1 )
          return;
LABEL_27:
        CPTPProcessor::CleanupGestureState((CPTPProcessor *)((char *)this - 352));
        return;
      }
      v17 = *((_DWORD *)a2 + 2) == 0;
      if ( *((_DWORD *)a2 + 2) )
      {
        if ( !CPTPProcessor::ShellEndpointExists(v13) )
          goto LABEL_27;
        v17 = *((_DWORD *)a2 + 2) == 0;
      }
      CPTPProcessor::SetHitTestResult(
        (CPTPProcessor *)((char *)this - 352),
        *((struct CPointerInputFrame **)this + 50),
        !v17);
      CTouchProcessor::ProcessInputWithoutHitTest(
        v19,
        v18,
        *((struct CPointerInputFrame **)this + 50),
        *((_DWORD *)this + 106),
        *((_DWORD *)this + 107));
      *((_QWORD *)this + 50) = 0LL;
      return;
    case 3:
      v7 = (CHidInput *)*((unsigned int *)a2 + 1);
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
        v10 = *((_DWORD *)a2 + 2);
      }
      CHidInput::HandlePTPTimer(v7, v9, v10, v8);
      break;
    case 4:
      v6 = *((_DWORD *)a2 + 1);
      if ( v6 )
      {
        if ( v6 == 1 )
          ApiSetSend4FingerTapHotkey();
      }
      else
      {
        ApiSetSend3FingerTapHotkey();
      }
      break;
  }
}
