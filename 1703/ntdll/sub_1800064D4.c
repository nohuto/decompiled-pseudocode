/*
 * XREFs of sub_1800064D4 @ 0x1800064D4
 * Callers:
 *     sub_18000638C @ 0x18000638C (sub_18000638C.c)
 *     sub_1800082DC @ 0x1800082DC (sub_1800082DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedFlushSList_0 @ 0x1800A8E00 (RtlInterlockedFlushSList_0.c)
 */

PSLIST_ENTRY __fastcall sub_1800064D4(PSLIST_HEADER ListHead, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdi
  _QWORD *v9; // rdx

  v6 = 7LL;
  do
  {
    result = RtlInterlockedFlushSList_0(ListHead);
    p_Next = &result->Next;
    while ( 1 )
    {
      v9 = p_Next;
      if ( !p_Next )
        break;
      p_Next = (_QWORD *)*p_Next;
      result = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD))(a2 ^ qword_18015BFA8 ^ *(_QWORD *)(a2 + 16)))(
                               *(_QWORD *)a2,
                               v9,
                               a3);
    }
    ++ListHead;
    --v6;
  }
  while ( v6 );
  return result;
}
