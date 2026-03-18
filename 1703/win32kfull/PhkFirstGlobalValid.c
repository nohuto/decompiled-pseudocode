/*
 * XREFs of PhkFirstGlobalValid @ 0x1C00CC1D8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00CBF64 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D9098 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00D9254 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01C13AC (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = a2 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v3 + 32);
  if ( v4 && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4, v3, a3);
  return v4;
}
