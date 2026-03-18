/*
 * XREFs of MiComputeAgingAmount @ 0x140022754
 * Callers:
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeAgingAmount(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( (a3 & 2) != 0 )
  {
    v5 = *(unsigned int *)(v4 + 24);
    v6 = v5 + a2;
    *(_DWORD *)(v4 + 24) = (v5 + a2) % a4;
  }
  else
  {
    v5 = *(unsigned int *)(v4 + 28);
    v6 = v5 + a2;
    *(_DWORD *)(v4 + 28) = (v5 + a2) % a4;
  }
  v7 = 0LL;
  if ( v6 >= a2 )
    v7 = v5;
  v8 = a4 * (a2 + v7) / 0x3E8;
  if ( v8 > a2 )
    return a2 * a4 / 0x3E8;
  return v8;
}
