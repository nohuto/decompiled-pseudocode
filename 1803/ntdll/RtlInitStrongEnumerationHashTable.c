/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1800EE150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180074558 @ 0x180074558 (sub_180074558.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

char __fastcall RtlInitStrongEnumerationHashTable(_DWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180074558(a1, (__int64)v5, 0);
  memset(a2, 0, 0x28uLL);
  v3 = v5[0];
  a2[3] = v5[0];
  *a2 = v3;
  return 1;
}
