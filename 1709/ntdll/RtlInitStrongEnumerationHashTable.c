/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1800F1D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x180072A38 (RtlpPopulateContext.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

char __fastcall RtlInitStrongEnumerationHashTable(_DWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(a1, (__int64)v5, 0);
  memset(a2, 0, 0x28uLL);
  v3 = v5[0];
  a2[3] = v5[0];
  *a2 = v3;
  return 1;
}
