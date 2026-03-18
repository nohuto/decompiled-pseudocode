/*
 * XREFs of InitKeyboard @ 0x1C0119A9C
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C0119B1C (-GetBiosNumLockStatus@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitKeyboard()
{
  __int64 result; // rax

  result = gProtocolType;
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    result = gfsSASModifiersDown;
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
    WPP_MAIN_CB.AlignmentRequirement = 0;
    gfsSASModifiersDown = 0;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
  return result;
}
