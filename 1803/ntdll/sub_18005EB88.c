/*
 * XREFs of sub_18005EB88 @ 0x18005EB88
 * Callers:
 *     sub_18005EAA4 @ 0x18005EAA4 (sub_18005EAA4.c)
 * Callees:
 *     sub_18005EE34 @ 0x18005EE34 (sub_18005EE34.c)
 *     sub_18005EE4C @ 0x18005EE4C (sub_18005EE4C.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

void *__fastcall sub_18005EB88(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v5; // rdx
  void *v6; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 72);
  v5 = a2 << v3;
  v6 = (void *)(v5 + *(_QWORD *)(a1 + 16));
  if ( (int)sub_18005EE4C(a1, 8 * v5 / 0x8000, v8, &v9) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  sub_18005EE34(v8);
  return v6;
}
