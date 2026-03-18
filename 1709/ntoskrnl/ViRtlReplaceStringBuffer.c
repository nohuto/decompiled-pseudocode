/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x1407C371C
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x1407C3150 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x1407C31C0 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x1407C3240 (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x1407C3290 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x1407C3370 (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x1407C33C0 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x1407C3460 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x1407C34B0 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x1407C3500 (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x1407C35A0 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x1407C35F0 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x1407C3640 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x1407C3690 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 */

void __fastcall ViRtlReplaceStringBuffer(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // ebp
  PVOID PoolWithTagPriority; // rax
  PVOID v8; // rdi

  if ( (MmVerifierData & 9) != 0 )
  {
    v5 = *(_WORD *)(a1 + 2);
    if ( v5 )
    {
      v6 = v5;
      PoolWithTagPriority = VeAllocatePoolWithTagPriority((POOL_TYPE)129, v5, 0x72745356u, HighPoolPriority, a3);
      v8 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
        memmove(PoolWithTagPriority, *(const void **)(a1 + 8), v6);
      else
        *a2 = -1073741801;
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
      *(_QWORD *)(a1 + 8) = v8;
    }
  }
}
