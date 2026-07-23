/*
 * XREFs of sub_18006155C @ 0x18006155C
 * Callers:
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 sub_18006155C()
{
  unsigned __int8 v0; // bl
  __int64 result; // rax
  _DWORD v2[12]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  v0 = v2[10] & 0xFC | 2;
  memset(&stru_180159600, 0, 0x50uLL);
  dword_18015963C = -1;
  stru_180159600.Ptr = 0LL;
  dword_180159630 = 0;
  dword_180159634 = 0x20000;
  qword_180159640 = 2072LL;
  qword_180159620 = (__int64)sub_1800080C0;
  qword_180159628 = (__int64)sub_1800076D0;
  dword_180159638 = 0x4000;
  dword_180159610 = 0;
  qword_180159618 = 0LL;
  result = (v0 ^ (v0 ^ (v0 ^ (unsigned __int8)dword_180159648) & 2 ^ (unsigned __int8)dword_180159648) & 1 ^ (v0 ^ (unsigned __int8)dword_180159648) & 2 ^ (unsigned __int8)dword_180159648) & 4;
  dword_180159648 ^= result ^ (v0 ^ (v0 ^ (unsigned __int8)dword_180159648) & 2 ^ (unsigned __int8)dword_180159648) & 1 ^ (v0 ^ (unsigned __int8)dword_180159648) & 2;
  return result;
}
