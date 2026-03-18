/*
 * XREFs of MiInsertVmAccessedEntry @ 0x1402598E8
 * Callers:
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x14025A0C0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14025A740 (MiUpdateOldPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertVmAccessedEntry(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a1;
  if ( (_DWORD)v2 == a1[1] )
    return 1LL;
  *(_QWORD *)&a1[2 * v2 + 2] = a2 & 0xFFFFFFFFFFFFF000uLL;
  result = 0LL;
  ++*a1;
  return result;
}
