/*
 * XREFs of ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0021794
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C002171C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PostIAMPosChangedNotification(struct tagCVR *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 8) & 0x10000) != 0 && (*((_BYTE *)a2 + 306) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 31LL, *(_QWORD *)a1);
}
