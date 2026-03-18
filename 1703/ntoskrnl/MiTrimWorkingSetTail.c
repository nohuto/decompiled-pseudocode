/*
 * XREFs of MiTrimWorkingSetTail @ 0x14002F620
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimWorkingSetBuildup @ 0x14002F650 (MiTrimWorkingSetBuildup.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  unsigned int *v2; // r9
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rdx

  MiTrimWorkingSetBuildup();
  v2 = *(unsigned int **)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 8);
  result = *v2;
  if ( (result & 0x80u) != 0LL )
  {
    v5 = *((_QWORD *)v2 + 2) - *((_QWORD *)v2 + 3);
    *(_QWORD *)(v3 + 8) += v5;
    *((_QWORD *)v2 + 3) = *((_QWORD *)v2 + 2);
    result = *v2 & 0xF;
    v6 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v3 + 172)) + 5544LL);
    *(_QWORD *)(v6 + 8 * result + 2584) += v5;
  }
  return result;
}
