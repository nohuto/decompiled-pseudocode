/*
 * XREFs of sub_18010BD78 @ 0x18010BD78
 * Callers:
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18010B820 @ 0x18010B820 (sub_18010B820.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010C758 @ 0x18010C758 (sub_18010C758.c)
 *     sub_18010D69C @ 0x18010D69C (sub_18010D69C.c)
 */

__int64 __fastcall sub_18010BD78(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  wchar_t Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (int)sub_18010B820(Buffer, 0x104uLL, L"%s%s", a1, L".init") < 0 )
    return 0LL;
  v3 = sub_18010C758(v2, v1, Buffer);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  if ( NtCurrentTeb()->LastErrorValue == 183 && (sub_18010D69C(v3) & 0xFFFFFF7F) != 0 )
  {
    sub_18010C390(v4);
    return 0LL;
  }
  return v4;
}
