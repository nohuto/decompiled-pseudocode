/*
 * XREFs of SetNewForegroundQueue @ 0x1C00B6AD0
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0117400 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1)
{
  __int64 result; // rax

  result = gpqForeground;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  gForegroundQRawMouseRequested = 0;
  return result;
}
