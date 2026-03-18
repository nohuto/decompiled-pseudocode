/*
 * XREFs of ?ConsumerPostMessage@CFlipManager@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C005015C
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x1C004EA80 (NtFlipObjectConsumerPostMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::ConsumerPostMessage(PRKEVENT *this, struct CFlipConsumerMessage *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx

  v2 = this + 19;
  if ( (_QWORD *)*v2 == v2 )
    KeSetEvent(this[26], 1, 0);
  v4 = (_QWORD *)v2[1];
  v5 = (_QWORD *)(((unsigned __int64)a2 + 48) & -(__int64)(a2 != 0LL));
  if ( (_QWORD *)*v4 != v2 )
    __fastfail(3u);
  *v5 = v2;
  *(_QWORD *)((((unsigned __int64)a2 + 48) & -(__int64)(a2 != 0LL)) + 8) = v4;
  *v4 = v5;
  v2[1] = v5;
  ++*((_DWORD *)a2 + 2);
  return 0LL;
}
