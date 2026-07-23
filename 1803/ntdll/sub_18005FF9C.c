/*
 * XREFs of sub_18005FF9C @ 0x18005FF9C
 * Callers:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 * Callees:
 *     sub_18006008C @ 0x18006008C (sub_18006008C.c)
 *     sub_1800606EC @ 0x1800606EC (sub_1800606EC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 */

__int64 __fastcall sub_18005FF9C(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r12
  char v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // eax
  _SLIST_ENTRY *v10; // rdi
  _SLIST_HEADER *v12; // rbp
  int v14; // eax

  v4 = *(_BYTE *)(a3 + 45);
  v5 = *(_BYTE *)(a3 + 44);
  v6 = 0;
  v7 = v4 << v5;
  v8 = a4;
  _BitScanForward(&v9, v7);
  v10 = (_SLIST_ENTRY *)a3;
  v12 = (_SLIST_HEADER *)(a1 + 16LL * (v9 - 12));
  if ( LOWORD(v12->Alignment) )
  {
    v14 = sub_1800606EC(a3, a2, a3, a4);
    if ( v14 && v4 > 1u )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a2 + 72) + 24LL),
        -(__int64)((unsigned __int64)(unsigned int)(v14 << v5) >> 12));
    ((void (__fastcall *)(_QWORD, _SLIST_ENTRY *, _QWORD, _QWORD))(a2 ^ qword_18015A440 ^ *(_QWORD *)(a2 + 16)))(
      *(_QWORD *)a2,
      v10,
      v7,
      v8);
    v10 = 0LL;
  }
  else
  {
    sub_18006008C(a2, a3, -2, 1, a4);
    RtlInterlockedPushEntrySList_0(v12, v10);
  }
  LOBYTE(v6) = v10 != 0LL;
  return v6;
}
