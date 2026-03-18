/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C005F5B0
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C005F5B0 (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxDW_SendDestroyMessages @ 0x1C005F5B0 (xxxDW_SendDestroyMessages.c)
 *     xxxCheckFocus @ 0x1C005F708 (xxxCheckFocus.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxDisownClipboard @ 0x1C00C4CC4 (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  ((void (*)(void))xxxCheckFocus)();
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 640);
  if ( v3 && a1 == *(_QWORD *)(v3 + 80) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( grpWinStaList && a1 == *(_QWORD *)(grpWinStaList + 80LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 80LL);
  }
  if ( (*(_BYTE *)(a1 + 306) & 4) != 0 )
  {
    xxxSendMessage(a1, 626LL, 0LL, 0LL);
    *(_BYTE *)(a1 + 306) &= ~4u;
  }
  xxxSendMessage(a1, 2LL, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 + 88);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v13;
      v13[1] = v6;
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v8 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v14[0] = *(_QWORD *)(v8 + 392);
      *(_QWORD *)(v8 + 392) = v14;
      v14[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      xxxDW_SendDestroyMessages(v4);
      ThreadUnlock1(v10, v9);
      v4 = v6;
    }
    while ( ThreadUnlock1(v12, v11) && v6 );
  }
  return xxxCheckFocus(a1);
}
