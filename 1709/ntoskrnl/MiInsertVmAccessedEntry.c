/*
 * XREFs of MiInsertVmAccessedEntry @ 0x14021D7A0
 * Callers:
 *     MiTrimPte @ 0x140010D30 (MiTrimPte.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MiResetAccessBitPte @ 0x14021DF00 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x14021E290 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14021E890 (MiUpdateOldPte.c)
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
