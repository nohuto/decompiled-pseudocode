/*
 * XREFs of sub_18002601C @ 0x18002601C
 * Callers:
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     TpPostWork @ 0x180025FD0 (TpPostWork.c)
 *     sub_18005649C @ 0x18005649C (sub_18005649C.c)
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     sub_180058A10 @ 0x180058A10 (sub_180058A10.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18002601C(__int64 a1, int a2)
{
  int v2; // eax
  bool result; // al
  PVOID ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0;
  if ( (v2 & 0x20000) == 0 )
    return 1;
  result = 0;
  if ( a2 )
  {
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
      return *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
  }
  return result;
}
