/*
 * XREFs of sub_18005F2D0 @ 0x18005F2D0
 * Callers:
 *     sub_18005F208 @ 0x18005F208 (sub_18005F208.c)
 * Callees:
 *     sub_18005F34C @ 0x18005F34C (sub_18005F34C.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180104C98 @ 0x180104C98 (sub_180104C98.c)
 */

__int64 __fastcall sub_18005F2D0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v9; // rbp
  void *v10; // rbx
  void *v12; // rax

  v4 = a2;
  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = byte_1801190F0[(unsigned __int64)(unsigned int)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v9 + 224) & 1) != 0 && !(unsigned int)sub_18005F34C(a1, v6, 1LL) )
    return -1LL;
  v12 = (void *)sub_180104C98(a1, *(_QWORD *)(a1 + 8 * v9 + 224), (unsigned int)v4, a4);
  v10 = v12;
  if ( v12 && (a4 & 2) != 0 )
    memset(v12, 0, v4);
  return (__int64)v10;
}
