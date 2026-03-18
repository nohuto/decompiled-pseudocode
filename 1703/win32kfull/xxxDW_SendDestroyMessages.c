/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C00200BC
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C00200BC (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxDW_SendDestroyMessages @ 0x1C00200BC (xxxDW_SendDestroyMessages.c)
 *     xxxCheckFocus @ 0x1C0020200 (xxxCheckFocus.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxDisownClipboard @ 0x1C00AE014 (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  ((void (*)(void))xxxCheckFocus)();
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3, v2) + 632);
  if ( v4 && a1 == *(_QWORD *)(v4 + 80) )
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
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 88);
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      v12[1] = v7;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = v5;
      ++*(_DWORD *)(v5 + 8);
      xxxDW_SendDestroyMessages(v5);
      ThreadUnlock1(v9, v8);
      v5 = v7;
    }
    while ( ThreadUnlock1(v11, v10) && v7 );
  }
  return xxxCheckFocus(a1);
}
