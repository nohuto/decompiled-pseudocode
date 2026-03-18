/*
 * XREFs of MiDecreaseUsedPtesCount @ 0x1401057E0
 * Callers:
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

unsigned __int16 __fastcall MiDecreaseUsedPtesCount(ULONG_PTR BugCheckParameter2, unsigned __int16 a2)
{
  ULONG_PTR v4; // r9
  unsigned __int16 result; // ax

  v4 = ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 16) >> 16) & 0x3FF;
  if ( v4 < a2 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v4, a2);
  MiLockPageAtDpcInline(BugCheckParameter2);
  result = (WORD1(*(_QWORD *)(BugCheckParameter2 + 16)) & 0x3FF) - a2;
  *(_QWORD *)(BugCheckParameter2 + 16) ^= ((unsigned int)*(_QWORD *)(BugCheckParameter2 + 16) ^ (result << 16)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
