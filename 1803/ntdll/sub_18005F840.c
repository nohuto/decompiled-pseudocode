/*
 * XREFs of sub_18005F840 @ 0x18005F840
 * Callers:
 *     sub_18005F770 @ 0x18005F770 (sub_18005F770.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 *     sub_1800FC6F0 @ 0x1800FC6F0 (sub_1800FC6F0.c)
 *     sub_1800FC940 @ 0x1800FC940 (sub_1800FC940.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FCB7C @ 0x1800FCB7C (sub_1800FCB7C.c)
 *     sub_1800FCFB0 @ 0x1800FCFB0 (sub_1800FCFB0.c)
 *     sub_1800FD290 @ 0x1800FD290 (sub_1800FD290.c)
 *     sub_180105468 @ 0x180105468 (sub_180105468.c)
 * Callees:
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 */

__int64 __fastcall sub_18005F840(__int64 a1, __int128 *a2)
{
  char *v2; // rax
  unsigned __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = sub_18005DFE4(&v5);
  return sub_180016A80(*(_DWORD **)v2, v3, 0x1000000, 0LL, 0LL);
}
