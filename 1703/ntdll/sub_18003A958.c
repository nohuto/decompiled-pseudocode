/*
 * XREFs of sub_18003A958 @ 0x18003A958
 * Callers:
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 */

bool __fastcall sub_18003A958(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, *(_QWORD *)(a1 + 48), 0LL, &v4);
  v2 = *(_DWORD *)(v4 + 40);
  return !v2 || !*(_QWORD *)(a1 + 56) || v2 >= *(_DWORD *)(v4 + 84);
}
