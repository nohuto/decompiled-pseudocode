/*
 * XREFs of xxxCallMsgFilter @ 0x1C0144054
 * Callers:
 *     NtUserCallMsgFilter @ 0x1C01019B0 (NtUserCallMsgFilter.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C021009C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxSendMenuSelect @ 0x1C021B16C (xxxSendMenuSelect.c)
 * Callees:
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, int a2)
{
  int v3; // r8d

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == 576 || ((v3 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(a2, 0, a1, 6u) )
  {
    return 1LL;
  }
  if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 1) != 0 )
    return xxxCallHook(a2, 0, a1, 0xFFFFFFFF);
  else
    return 0LL;
}
