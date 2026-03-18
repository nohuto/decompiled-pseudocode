/*
 * XREFs of xxxDWP_ProcessVirtKey @ 0x1C000D158
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 */

__int64 __fastcall xxxDWP_ProcessVirtKey(int a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]

  result = gptiCurrent;
  v2 = *(_QWORD *)(gptiCurrent + 408LL);
  v3 = *(_QWORD *)(v2 + 120);
  if ( !v3 )
    return result;
  switch ( a1 )
  {
    case 9:
      result = *(_QWORD *)(v3 + 16);
      if ( (*(_DWORD *)(result + 852) & 1) != 0 )
        return result;
LABEL_12:
      v11 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v11;
      v12 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      GetKeyState(16LL);
      v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v8, 0, 0, 0LL, 1, 0);
      return ThreadUnlock1(v10, v9);
    case 27:
      goto LABEL_12;
    case 115:
      result = *(_QWORD *)(v3 + 168);
      if ( (*(_BYTE *)(result + 101) & 2) == 0 )
      {
        v4 = *(_QWORD *)(v2 + 112);
        if ( !v4 || (NonChildAncestor = GetNonChildAncestor(v4), NonChildAncestor != v3) )
        {
          v11 = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = &v11;
          v12 = v3;
          _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
          xxxSetFocus(*(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL));
          ThreadUnlock1(v7, v6);
        }
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL), 274LL, 61536LL, 0LL);
      }
      break;
  }
  return result;
}
