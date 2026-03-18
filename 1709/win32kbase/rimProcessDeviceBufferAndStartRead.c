/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC
 * Callers:
 *     rimCompleteReads @ 0x1C0009CF4 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0009FA8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00954A0 (rimInputApc.c)
 *     RIMInjectInput @ 0x1C0102A40 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0109710 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C0109E60 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C010A1F8 (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C010B6E0 (RIMIDE_InjectGenericHidInput.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C000C120 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C009C094 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimSignalReadComplete @ 0x1C00A46B8 (rimSignalReadComplete.c)
 *     rimProcessMouseInput @ 0x1C00A4860 (rimProcessMouseInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00A490C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00E0F10 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00E0F40 (EtwTracePointerDeviceReadStop.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 *     rimProcessHidInput @ 0x1C010BC90 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C010BD30 (rimProcessKeyboardInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C010F8F4 (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidKeyboardInput @ 0x1C01135F4 (rimProcessHidKeyboardInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  const GUID *v5; // r8
  int v7; // eax
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rax

  v2 = *(_BYTE *)(a2 + 48);
  if ( v2 < 2u )
    goto LABEL_36;
  if ( v2 != 2 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 184) & 0x4000) != 0 || (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
  {
LABEL_36:
    if ( (unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
    {
LABEL_20:
      RIMStartDeviceSpecificRead((struct _MCGEN_TRACE_CONTEXT *)a1, a2, v5);
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
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x12u,
            0x18u,
            (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
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
          (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
          a1,
          a2);
        DbgPrintRIMAlways("FailSafeRead pRimObj(%p) pRimDev(%p)\n");
        goto LABEL_20;
      }
    }
    else
    {
      v7 = *(_DWORD *)(a2 + 184);
      if ( (v7 & 0x100) == 0 )
      {
        v8 = a1 + 720;
        *(_DWORD *)(a2 + 184) = v7 | 0x100;
        v9 = (_QWORD *)(a2 + 120);
        v10 = *(_QWORD **)(v8 + 8);
        if ( *v10 != v8 )
          __fastfail(3u);
        *v9 = v8;
        v9[1] = v10;
        *v10 = v9;
        *(_QWORD *)(v8 + 8) = v9;
      }
    }
  }
  else
  {
    if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
      && (*(_DWORD *)(a2 + 200) & 0x80u) != 0
      && (!gbTestModeOn
       || (*(_DWORD *)(a2 + 184) & 0x1000) != 0
       || (*(_DWORD *)(*(_QWORD *)(a2 + 472) + 276LL) & 0x10000) != 0) )
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
