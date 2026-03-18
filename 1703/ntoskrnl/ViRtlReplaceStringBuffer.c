/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x140781564
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x140780FA0 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x140781010 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x140781090 (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x1407810E0 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x1407811C0 (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x140781210 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x1407812B0 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x140781300 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x140781350 (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x1407813F0 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x140781440 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x140781490 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x1407814E0 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 */

void __fastcall ViRtlReplaceStringBuffer(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int16 v4; // cx
  unsigned int v6; // ebp
  PVOID PoolWithTagPriority; // rax
  PVOID v8; // rdi

  v4 = *(_WORD *)(a1 + 2);
  if ( (MmVerifierData & 9) != 0 && v4 )
  {
    v6 = v4;
    PoolWithTagPriority = VeAllocatePoolWithTagPriority((POOL_TYPE)129, v4, 0x72745356u, HighPoolPriority, a3);
    v8 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
      memmove(PoolWithTagPriority, *(const void **)(a1 + 8), v6);
    else
      *a2 = -1073741801;
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    *(_QWORD *)(a1 + 8) = v8;
  }
}
