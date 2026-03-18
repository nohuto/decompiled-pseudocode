/*
 * XREFs of xxxHandleWindowPosChanged @ 0x1C0113B28
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendSizeMessage @ 0x1C0049940 (xxxSendSizeMessage.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxHandleWindowPosChanged(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 DesktopWindow; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r10
  __int64 result; // rax
  int v9; // [rsp+68h] [rbp+10h]
  int v10; // [rsp+6Ch] [rbp+14h]

  if ( (*(_DWORD *)(a2 + 32) & 0x1000) == 0 )
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 144);
    v10 = *(_DWORD *)(BugCheckParameter2 + 148);
    DesktopWindow = GetDesktopWindow(BugCheckParameter2);
    if ( v7 != DesktopWindow )
    {
      v10 = v6 - *(_DWORD *)(v7 + 148);
      v9 = v5 - *(_DWORD *)(v7 + 144);
    }
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(
      (__int64 *)BugCheckParameter2,
      3LL,
      0LL,
      (struct _LARGE_STRING *)((unsigned __int16)v9 | ((unsigned __int16)v10 << 16)),
      0,
      0,
      0LL,
      1u,
      0);
  }
  result = *(_DWORD *)(a2 + 32) & 0x8800;
  if ( (_DWORD)result != 2048 )
    return xxxSendSizeMessage(BugCheckParameter2);
  return result;
}
