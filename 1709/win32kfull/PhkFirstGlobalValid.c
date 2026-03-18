/*
 * XREFs of PhkFirstGlobalValid @ 0x1C009EB9C
 * Callers:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0055D80 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0056178 (zzzUnhookWindowsHookEx.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C009E924 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01C4BB4 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 8LL * (a2 + 1) + 32);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid(v2);
  return v2;
}
