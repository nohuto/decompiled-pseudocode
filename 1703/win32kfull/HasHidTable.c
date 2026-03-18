/*
 * XREFs of HasHidTable @ 0x1C004A4F0
 * Callers:
 *     UpdateRawMouseMode @ 0x1C004A46C (UpdateRawMouseMode.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00B0F38 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00BC228 (UpdateCursorImageForMonitorDpi.c)
 *     EditionKeyEventLLHook @ 0x1C00CAF60 (EditionKeyEventLLHook.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00CB244 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C00CB37C (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00CB4B0 (EditionHandleAndPostKeyEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0117400 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     EditionRawInputRequestedForKeyboard @ 0x1C0196130 (EditionRawInputRequestedForKeyboard.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01B3754 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01B37FC (UnregisterModernAppThreadForRawKeyboard.c)
 *     ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01BC4F8 (-PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasHidTable(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 776) )
        return 1LL;
    }
  }
  return result;
}
