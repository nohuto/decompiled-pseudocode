/*
 * XREFs of _QuerySendMessage @ 0x1C01E6C98
 * Callers:
 *     NtUserQuerySendMessage @ 0x1C01DE5A0 (NtUserQuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C0049424 (IsPointerInputMessageWithState.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01BB7C4 (TranslateSentPointerMessageForClient.c)
 */

_BOOL8 __fastcall QuerySendMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rax
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned __int64 *v9; // r10

  v2 = *(_QWORD *)(a1 + 464);
  if ( !v2 )
    return 0LL;
  v4 = *(_QWORD **)(v2 + 112);
  if ( v4 )
    v4 = (_QWORD *)*v4;
  *(_QWORD *)a2 = v4;
  v5 = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(a2 + 8) = v5;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 88);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(v2 + 96);
  v6 = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 32) = v6;
  if ( !IsPointerInputMessageWithState(v5) && (v8 != 528 || *(_WORD *)v9 != 582) )
    return 1LL;
  return TranslateSentPointerMessageForClient(v8, v9, (unsigned __int64 *)(v7 + 24));
}
