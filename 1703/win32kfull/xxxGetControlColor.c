/*
 * XREFs of xxxGetControlColor @ 0x1C002931C
 * Callers:
 *     xxxPaintRect @ 0x1C0029078 (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C01007EC (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C01D86E0 (NtUserGetControlColor.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 */

__int64 __fastcall xxxGetControlColor(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi

  if ( PsGetCurrentProcessWin32Process(a1, a2) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
    return xxxDefWindowProc((struct tagWND *)a1);
  v8 = 0LL;
  if ( a2 )
    v8 = *a2;
  v9 = xxxSendMessage(a1, a4, a3, v8);
  v10 = v9;
  if ( !v9 || !(unsigned int)GreValidateServerHandle(v9, 16LL) )
    return xxxDefWindowProc((struct tagWND *)a1);
  return v10;
}
