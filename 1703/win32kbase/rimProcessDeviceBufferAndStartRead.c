/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C009990C
 * Callers:
 *     rimInputApc @ 0x1C008E100 (rimInputApc.c)
 *     rimCompleteReads @ 0x1C0093A64 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0093D18 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMInjectInput @ 0x1C0102260 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C010A680 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C010ADCC (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C010B128 (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C010C72C (RIMIDE_InjectGenericHidInput.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00954F4 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimSignalReadComplete @ 0x1C00999CC (rimSignalReadComplete.c)
 *     rimProcessMouseInput @ 0x1C0099B70 (rimProcessMouseInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0099C1C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00DA380 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00DA3B0 (EtwTracePointerDeviceReadStop.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 *     rimProcessHidInput @ 0x1C010CD40 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C010CD80 (rimProcessKeyboardInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0110E4C (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidKeyboardInput @ 0x1C0114B20 (rimProcessHidKeyboardInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // cl
  int v6; // eax
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 **v9; // rax

  v4 = *(_BYTE *)(a2 + 48);
  if ( v4 < 2u )
    goto LABEL_36;
  if ( v4 != 2 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 184) & 0x4000) != 0 || (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
  {
LABEL_36:
    if ( (unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
    {
LABEL_20:
      RIMStartDeviceSpecificRead(a1, a2);
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 712) && ((*(_DWORD *)(a2 + 184) & 0x100) != 0 || *(_QWORD *)(a1 + 720) == a1 + 720) )
    {
      *(_BYTE *)(a1 + 712) = 0;
      *(_DWORD *)(a2 + 184) &= ~0x100u;
      if ( *(_BYTE *)(a2 + 48) )
      {
        if ( *(_BYTE *)(a2 + 48) == 1 )
        {
          rimProcessKeyboardInput(a1, a2);
        }
        else if ( *(_BYTE *)(a2 + 48) == 2 )
        {
          if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
            rimProcessHidKeyboardInput(a1, a2);
          else
            rimProcessHidInput(a1, a2);
        }
        else
        {
          *(_BYTE *)(a1 + 712) = 1;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x12u,
            0x18u,
            (__int64)&WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids,
            *(unsigned __int8 *)(a2 + 48));
        }
      }
      else
      {
        rimProcessMouseInput(a1, a2);
      }
      rimSignalReadComplete(a1, a2);
      if ( *(_BYTE *)(a1 + 712) && (*(_DWORD *)(a2 + 184) & 0x1000) == 0 )
      {
        WPP_RECORDER_SF_qq(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x19u,
          (__int64)&WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids,
          a1,
          a2);
        DbgPrintRIMAlways("FailSafeRead pRimObj(%p) pRimDev(%p)\n");
        goto LABEL_20;
      }
    }
    else
    {
      v6 = *(_DWORD *)(a2 + 184);
      if ( (v6 & 0x100) == 0 )
      {
        v7 = a1 + 720;
        *(_DWORD *)(a2 + 184) = v6 | 0x100;
        v8 = (__int64 *)(a2 + 120);
        v9 = *(__int64 ***)(v7 + 8);
        if ( *v9 != (__int64 *)v7 )
          __fastfail(3u);
        *v8 = v7;
        v8[1] = (__int64)v9;
        *v9 = v8;
        *(_QWORD *)(v7 + 8) = v8;
      }
    }
  }
  else
  {
    if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
      && (*(_DWORD *)(a2 + 200) & 0x80u) != 0
      && (!gbTestModeOn
       || (*(_DWORD *)(a2 + 184) & 0x1000) != 0
       || (*(_DWORD *)(*(_QWORD *)(a2 + 472) + 260LL) & 0x20000) != 0) )
    {
      EtwTracePointerDeviceReadStart();
      rimFreeAutoRepeatCompleteFrame(a2);
      RIMProcessAnyPointerDeviceInput(a1, a2);
      EtwTracePointerDeviceReadStop();
    }
    if ( (*(_DWORD *)(a2 + 184) & 0x1000) == 0 )
      goto LABEL_20;
  }
  return 0LL;
}
