/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180040250
 * Callers:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18003FFC8 @ 0x18003FFC8 (sub_18003FFC8.c)
 *     sub_1800400E0 @ 0x1800400E0 (sub_1800400E0.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_18004F58C @ 0x18004F58C (sub_18004F58C.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_180080B70 @ 0x180080B70 (sub_180080B70.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D48E4 @ 0x1800D48E4 (sub_1800D48E4.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_1800ECD38 @ 0x1800ECD38 (sub_1800ECD38.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // si
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *a2;
  if ( !*a2 )
    return 0LL;
  v4 = *a1;
  if ( (unsigned int)v4 + v2 <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, *((const void **)a2 + 1), v2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
