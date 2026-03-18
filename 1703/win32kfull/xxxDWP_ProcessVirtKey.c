/*
 * XREFs of xxxDWP_ProcessVirtKey @ 0x1C0008174
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 */

__int64 __fastcall xxxDWP_ProcessVirtKey(int a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // di
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // sf
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]

  result = gptiCurrent;
  v2 = a1;
  v3 = *(_QWORD *)(gptiCurrent + 384LL);
  v4 = *(_QWORD *)(v3 + 88);
  if ( !v4 )
    return result;
  if ( a1 == 9 )
  {
    result = *(_QWORD *)(v4 + 16);
    if ( (*(_DWORD *)(result + 764) & 1) != 0 )
      return result;
  }
  else if ( a1 != 27 )
  {
    if ( a1 == 115 )
    {
      result = *(_QWORD *)(v4 + 168);
      if ( (*(_BYTE *)(result + 93) & 2) == 0 )
      {
        v5 = *(_QWORD *)(v3 + 80);
        if ( !v5 || (NonChildAncestor = GetNonChildAncestor(v5), NonChildAncestor != v4) )
        {
          v14 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v14;
          v15 = v4;
          ++*(_DWORD *)(v4 + 8);
          xxxSetFocus(*(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL));
          ThreadUnlock1(v8, v7);
        }
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), 274LL, 61536LL, 0LL);
      }
    }
    return result;
  }
  v14 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v14;
  v15 = v4;
  ++*(_DWORD *)(v4 + 8);
  v9 = (GetKeyState(16LL) & 0x8000u) != 0LL;
  v10 = 61520;
  if ( v9 )
    v10 = 61504;
  v11 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  _InterlockedIncrement(&glSendMessage);
  xxxSendTransformableMessageTimeout(v11, 274, v10, v2, 0, 0, 0LL, 1, 0);
  return ThreadUnlock1(v13, v12);
}
