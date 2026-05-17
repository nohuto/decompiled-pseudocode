/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1800F14C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

char __fastcall RtlInitStrongEnumerationHashTable(_DWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180073CE8(a1, (__int64)v5, 0);
  memset(a2, 0, 0x28uLL);
  v3 = v5[0];
  a2[3] = v5[0];
  *a2 = v3;
  return 1;
}
