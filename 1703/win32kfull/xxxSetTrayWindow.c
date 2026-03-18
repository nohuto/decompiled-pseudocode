/*
 * XREFs of xxxSetTrayWindow @ 0x1C0018E48
 * Callers:
 *     xxxAddFullScreen @ 0x1C0015A0C (xxxAddFullScreen.c)
 *     xxxUpdateTray @ 0x1C0019CC0 (xxxUpdateTray.c)
 *     xxxRemoveFullScreen @ 0x1C005D114 (xxxRemoveFullScreen.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 */

__int64 __fastcall xxxSetTrayWindow(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 *v6; // rdi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( a2 == (__int64 *)1 )
  {
    v6 = *(__int64 **)(a1 + 96);
    if ( v6 )
      v4 = *v6;
    else
      v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
    if ( a2 )
      v4 = *a2;
    v7[1] = a2;
    v7[0] = a1 + 96;
    HMAssignmentLock(v7);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) )
    PostShellHookMessagesEx(*(_WORD *)(gpDispInfo + 176LL) != 0 ? 32772 : 4, v4, 0LL);
  result = *(_QWORD *)(gptiCurrent + 416LL);
  if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)result + 16LL)) & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_WORD *)(gpDispInfo + 176LL) != 0;
    return xxxCallHook(4LL, v4, v2);
  }
  return result;
}
