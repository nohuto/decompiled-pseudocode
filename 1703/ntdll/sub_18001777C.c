/*
 * XREFs of sub_18001777C @ 0x18001777C
 * Callers:
 *     sub_180014918 @ 0x180014918 (sub_180014918.c)
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     sub_18007F3E0 @ 0x18007F3E0 (sub_18007F3E0.c)
 *     sub_1800811F0 @ 0x1800811F0 (sub_1800811F0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18001777C(__int64 a1, int a2)
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
