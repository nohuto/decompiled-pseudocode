/*
 * XREFs of xxxMoveSize @ 0x1C01DF270
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006BF8 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C000BEC4 (SlowAppThreadInShellFrame.c)
 *     bSetDevDragWidth @ 0x1C0045E2C (bSetDevDragWidth.c)
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     GetProcessDpiServerInfo @ 0x1C0108FBC (GetProcessDpiServerInfo.c)
 *     zzzShowCursor @ 0x1C011E824 (zzzShowCursor.c)
 *     xxxCallMsgFilter @ 0x1C0144054 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ChangeComposableCursor @ 0x1C01A0F94 (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01C1328 (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7968 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01DB8B0 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01DB908 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DC988 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(ULONG_PTR a1, unsigned int a2, unsigned int a3)
{
  int v6; // r15d
  __int64 result; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  ULONG_PTR v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // edx
  __int64 v24; // rax
  struct tagTHREADINFO *v25; // rax
  int v26; // eax
  volatile signed __int32 *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int128 v40; // [rsp+38h] [rbp-39h]
  __int128 v41; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v42[3]; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v43[14]; // [rsp+70h] [rbp-1h] BYREF
  int v44; // [rsp+E0h] [rbp+6Fh] BYREF

  memset(v43, 0, 0x30uLL);
  v6 = 0;
  result = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(result + 408) == v8 && !*(_QWORD *)(gptiCurrent + 648LL) )
  {
    v9 = *(_QWORD *)(v8 + 112);
    if ( v9 )
    {
      if ( (*(_WORD *)(v9 + 82) & 0x3FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 104);
        if ( !v9 || (*(_WORD *)(v9 + 82) & 0x3FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        v42[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v42;
        v42[1] = v9;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        xxxSendMessage(v9);
        ThreadUnlock1(v11, v10);
      }
    }
    result = Win32AllocPoolWithQuotaZInit(344LL, 1936552789LL);
    v12 = result;
    if ( result )
    {
      v13 = gActiveMoveSizeDataList;
      if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = &gActiveMoveSizeDataList;
      *(_QWORD *)v12 = v13;
      *(_QWORD *)(v13 + 8) = v12;
      gActiveMoveSizeDataList = v12;
      *(_QWORD *)&v40 = v12 + 16;
      *((_QWORD *)&v40 + 1) = a1;
      v41 = v40;
      *(_QWORD *)(gptiCurrent + 648LL) = v12;
      HMAssignmentLock(&v41);
      *(_DWORD *)(v12 + 196) = *(_DWORD *)(v12 + 196) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v12 + 308) = *(_QWORD *)(gptiCurrent + 740LL);
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v12);
      xxxInitializeMoveSizeData(a1, v12, a2, a3, 0);
      if ( (*(_DWORD *)(v12 + 196) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(a1 + 70) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v12);
      if ( gpqForeground )
      {
        v14 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v14 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
          {
            v15 = 33;
            if ( *(_QWORD *)(v14 + 16) == gptiCurrent )
              v14 = a1;
            else
              v15 = 49;
            xxxWindowEvent(0x80000004, (volatile signed __int32 *)v14, 0LL, 2LL, v15);
          }
        }
      }
      xxxWindowEvent(0xAu, (volatile signed __int32 *)a1, 0LL, 0LL, 0);
      xxxWindowEvent(0x19u, (volatile signed __int32 *)a1, 0LL, a2, 0);
      xxxDrawDragRectEx((struct _MOVESIZEDATA *)v12, 0LL, 0LL, (LONG *)(v12 + 24));
      *(_DWORD *)(gptiCurrent + 464LL) |= 0x10u;
      *(_QWORD *)&v43[6] = (*(unsigned __int16 *)(v12 + 304) << 16) | *(unsigned __int16 *)(v12 + 300);
      xxxSendMessage(a1);
      xxxCapture(gptiCurrent, a1, 6);
      zzzShowCursor(1LL, v16, v17, v18);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        if ( gProtocolType || gbRemoteFxSession )
        {
          v19 = 0;
        }
        else
        {
          ChangeComposableCursor(1);
          v19 = 0x8000000;
        }
        *(_DWORD *)(v12 + 196) = v19 | *(_DWORD *)(v12 + 196) & 0xF7FFFFFF;
      }
      while ( (*(_DWORD *)(v12 + 196) & 8) == 0 )
      {
        while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) == a1 )
        {
          if ( (unsigned int)xxxInternalGetMessage((int)v43, 0, 0, 0, 1, 0) )
          {
            if ( v43[2] - 256 <= 9 || v43[2] == 35 || v43[2] - 512 <= 0xE )
            {
              *(_QWORD *)(v12 + 308) = *(_QWORD *)(gptiCurrent + 740LL);
              if ( !v6 )
              {
                v6 = ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) & 0x1800000) != 0) + 1;
                if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) & 0x1800000) != 0 )
                  *(_DWORD *)(v12 + 196) ^= (*(_DWORD *)(v12 + 196) ^ (*(_DWORD *)(v12 + 196) + 0x8000)) & 0x38000;
              }
              break;
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v43, (unsigned int)(a2 != 9) + 3) )
            {
              xxxTranslateMessage((__int64)v43, 0);
              *(_DWORD *)(gptiCurrent + 464LL) |= 0x8000u;
              xxxDispatchMessage((__int64)v43, v20, v21, v22);
              *(_DWORD *)(gptiCurrent + 464LL) &= ~0x8000u;
            }
          }
          else
          {
            if ( (*(_DWORD *)(v12 + 196) & 8) != 0 )
              break;
            if ( gfShellFrameHangResilient
              && (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0
              && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v23 = 200;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 384LL) <= 1u )
                v23 = 5000;
              if ( !(unsigned int)xxxWaitMessageEx(0x3C07u, v23, (enum SLEEP_STATUS *)&v44) && !v44 )
                break;
              if ( v44 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 384LL) > 1u )
                {
                  v24 = *(_QWORD *)(gptiCurrent + 440LL);
                  if ( !*(_QWORD *)(v24 + 40) && !*(_QWORD *)(v24 + 48) )
                  {
                    v25 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v25 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v25, v44 == 2, 1);
                  }
                }
              }
            }
            else if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
            {
              break;
            }
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) != a1 )
        {
          xxxMS_TrackMove(a1, 256, 0x1BuLL, 1LL, (struct _MOVESIZEDATA *)v12);
          break;
        }
        v26 = *(_DWORD *)(v12 + 196);
        if ( (v26 & 8) != 0 )
        {
          *(_DWORD *)(v12 + 196) = v26 & 0xFFFFFFF7;
          break;
        }
        if ( v43[2] == 35 )
          xxxCallHook(2, 0, 0LL, 5u);
        if ( (*(_DWORD *)(v12 + 196) & 1) != 0
          && !(unsigned int)xxxTrackInitSize(
                              (struct tagWND *)a1,
                              v43[2],
                              *(unsigned __int64 *)&v43[4],
                              v43[6],
                              (struct _MOVESIZEDATA *)v12) )
        {
          break;
        }
        if ( (*(_DWORD *)(v12 + 196) & 1) == 0 )
          xxxMS_TrackMove(
            a1,
            v43[2],
            *(unsigned __int64 *)&v43[4],
            (unsigned __int16)(LOWORD(v43[9]) + *(_WORD *)(v12 + 168)) | ((unsigned __int16)(LOWORD(v43[10])
                                                                                           + *(_WORD *)(v12 + 172)) << 16),
            (struct _MOVESIZEDATA *)v12);
      }
      if ( gpqForeground )
      {
        v27 = *(volatile signed __int32 **)(gpqForeground + 112LL);
        if ( v27 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
            xxxWindowEvent(0x80000005, v27, 0LL, 2LL, 33);
        }
      }
      xxxWindowEvent(0xBu, (volatile signed __int32 *)a1, 0LL, 0LL, 0);
      xxxSendMessage(a1);
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v12, v28, v29, v30);
      if ( (*(_DWORD *)(v12 + 196) & 0x8000000) != 0 )
        ChangeComposableCursor(0);
      *(_DWORD *)(v12 + 196) &= 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v12);
      if ( (*(_BYTE *)(a1 + 70) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v31);
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
      }
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 464LL) &= ~0x10u;
      if ( (*(_DWORD *)(v12 + 196) & 0x20) != 0 && ghrgnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gnUpdateSave = 0;
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 648LL) = 0LL;
      HMAssignmentUnlock(v12 + 16);
      v35 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || (v36 = *(_QWORD **)(v12 + 8), *v36 != v12) )
        __fastfail(3u);
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
      Win32FreePool(v12, v33, v34);
      return zzzShowCursor(0LL, v37, v38, v39);
    }
  }
  return result;
}
