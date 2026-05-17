/*
 * XREFs of sub_1800605B4 @ 0x1800605B4
 * Callers:
 *     sub_18005FB9C @ 0x18005FB9C (sub_18005FB9C.c)
 *     sub_18006073C @ 0x18006073C (sub_18006073C.c)
 * Callees:
 *     sub_1800606E0 @ 0x1800606E0 (sub_1800606E0.c)
 *     sub_1800606EC @ 0x1800606EC (sub_1800606EC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedFlushSList_0 @ 0x18009E5D0 (RtlInterlockedFlushSList_0.c)
 */

PSLIST_ENTRY __fastcall sub_1800605B4(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rbp
  PSLIST_ENTRY result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r15d
  _QWORD *p_Next; // rdi
  _QWORD *v14; // rsi
  __int64 (__fastcall *v15)(__int64, _QWORD *, _QWORD, _QWORD); // rax
  __int64 v16; // rcx

  v3 = 0;
  v5 = 0LL;
  do
  {
    result = RtlInterlockedFlushSList_0((PSLIST_HEADER)(a1 + 16 * v5));
    v12 = 1 << (v3 + 12);
    p_Next = &result->Next;
    while ( 1 )
    {
      v14 = p_Next;
      if ( !p_Next )
        break;
      p_Next = (_QWORD *)*p_Next;
      if ( *((_BYTE *)v14 + 45) > 1u )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(a2 + 72) + 24LL),
          -(__int64)((unsigned __int64)((unsigned int)sub_1800606EC(v14, v9, v10, v11) << *((_BYTE *)v14 + 44)) >> 12));
      v15 = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))(a2 ^ qword_18015A440 ^ *(_QWORD *)(a2 + 16));
      v16 = *(_QWORD *)a2;
      if ( (char *)v15 == (char *)sub_1800606E0 )
        result = (PSLIST_ENTRY)sub_1800606E0(v16, v14, v12, a3);
      else
        result = (PSLIST_ENTRY)v15(v16, v14, v12, a3);
    }
    ++v3;
    ++v5;
  }
  while ( v3 < 7 );
  return result;
}
