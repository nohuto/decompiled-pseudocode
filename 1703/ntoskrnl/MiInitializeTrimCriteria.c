/*
 * XREFs of MiInitializeTrimCriteria @ 0x140083AE4
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiInitializeTrimCriteria(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdx

  *(_QWORD *)(a1 + 80) = a3;
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  v4 = a3 + *(_QWORD *)(a2 + 5760);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 72) = v4;
  *(_BYTE *)(a1 + 2) = a4;
  return memset((void *)(a1 + 8), 0, 0x40uLL);
}
