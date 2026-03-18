/*
 * XREFs of CmpKeyEnumStackEntryNotifyPromotion @ 0x14069AF24
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404826B0 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryNotifyPromotion(_QWORD *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  _WORD *v5; // rax
  unsigned int SubKeyByNumber; // eax
  unsigned int v7; // ebx
  __int64 result; // rax

  *((_DWORD *)a1 + 28) = -1;
  v2 = a2;
  a1[15] = 0LL;
  if ( a1[a2 + 10] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, &a1[a2 + 12]);
    a1[v2 + 10] = 0LL;
    *((_DWORD *)a1 + v2 + 18) = -1;
  }
  if ( a1[v2 + 5] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, &a1[v2 + 7]);
    a1[v2 + 5] = 0LL;
  }
  v4 = a1[1];
  *((_DWORD *)a1 + v2 + 8) = *(_DWORD *)(v4 + 4 * v2 + 20);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*a1 + 8LL))(
                  *a1,
                  *(unsigned int *)(v4 + 4 * v2 + 28),
                  &a1[v2 + 7]);
  a1[v2 + 5] = v5;
  SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, v5, *((_DWORD *)a1 + v2 + 6));
  *((_DWORD *)a1 + v2 + 18) = SubKeyByNumber;
  v7 = SubKeyByNumber;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*a1 + 8LL))(*a1, SubKeyByNumber, &a1[v2 + 12]);
  a1[v2 + 10] = result;
  *((_DWORD *)a1 + 28) = v7;
  a1[15] = result;
  return result;
}
