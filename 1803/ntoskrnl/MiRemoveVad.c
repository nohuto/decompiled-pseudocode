/*
 * XREFs of MiRemoveVad @ 0x140268864
 * Callers:
 *     MiRemovePlaceholderVad @ 0x140268600 (MiRemovePlaceholderVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 */

__int64 __fastcall MiRemoveVad(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 1576);
  RtlAvlRemoveNode((unsigned __int64 *)(a2 + 1576), a1);
  if ( *(_QWORD *)(a2 + 1584) == a1 )
    *(_QWORD *)(a2 + 1584) = *v2;
  --*(_QWORD *)(a2 + 1592);
  result = *(_DWORD *)(a1 + 48) & 7;
  *(_QWORD *)(a1 + 16) = -2LL;
  if ( (_BYTE)result == 5 || (result = MiVadMapsLargeImage(a1), (_DWORD)result) )
    --*(_DWORD *)(a2 + 1708);
  return result;
}
