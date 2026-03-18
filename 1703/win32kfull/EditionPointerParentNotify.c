/*
 * XREFs of EditionPointerParentNotify @ 0x1C01C9F50
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     xxxSendPointerMessageWorker @ 0x1C01BC354 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  result = GetDesktopWindow(v3);
  if ( v3 != result && (*(_BYTE *)(v3 + 64) & 4) == 0 )
  {
    v8 = gptiCurrent;
    v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v9;
    v9[1] = 0LL;
    do
    {
      if ( (*(_BYTE *)(v3 + 71) & 0xC0) != 0x40 )
        break;
      v3 = *(_QWORD *)(v3 + 104);
      ThreadLockExchange(v3, (__int64)v9);
      xxxSendPointerMessageWorker((_BYTE *)v3, 528LL, a3, 0LL, 0LL, 177);
    }
    while ( !CTouchProcessor::BreakEditionParentNotifyLoop(gpTouchProcessor, a2) );
    return ThreadUnlock1(v8, v7);
  }
  return result;
}
