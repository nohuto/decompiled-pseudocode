/*
 * XREFs of xxxGetControlColor @ 0x1C007F8A4
 * Callers:
 *     xxxGetControlBrush @ 0x1C007D16C (xxxGetControlBrush.c)
 *     xxxPaintRect @ 0x1C007F5FC (xxxPaintRect.c)
 *     NtUserGetControlColor @ 0x1C01E5030 (NtUserGetControlColor.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 */

__int64 __fastcall xxxGetControlColor(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi

  if ( PsGetCurrentProcessWin32Process(a1) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) )
    return xxxDefWindowProc((struct tagWND *)a1);
  v9 = 0LL;
  if ( a2 )
    v9 = *a2;
  v10 = xxxSendMessage(a1, a4, a3, v9);
  v11 = v10;
  if ( !v10 || !(unsigned int)GreValidateServerHandle(v10, 16LL) )
    return xxxDefWindowProc((struct tagWND *)a1);
  return v11;
}
