/*
 * XREFs of InitKeyboard @ 0x1C012351C
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C012359C (-GetBiosNumLockStatus@@YAXXZ.c)
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
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
    gfsSASModifiersDown = 0;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
  return result;
}
