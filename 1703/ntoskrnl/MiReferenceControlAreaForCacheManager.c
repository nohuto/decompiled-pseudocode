/*
 * XREFs of MiReferenceControlAreaForCacheManager @ 0x1400231B4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiValidateControlAreaPartition @ 0x140096C54 (MiValidateControlAreaPartition.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140096DC4 (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiReferenceControlAreaForCacheManager(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiLockSectionControlArea(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL), (*(_BYTE *)(a1 + 19) & 1) == 0, &v8);
  v3 = v2;
  if ( !v2 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v2 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v8);
    return 3221225473LL;
  }
  v4 = MiValidateControlAreaPartition(a1, v2);
  if ( v4 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v8);
    ++dword_14036C908;
    return (unsigned int)v4;
  }
  else
  {
    v5 = MiBuildWakeList(v3, 4LL);
    ++*(_QWORD *)(v3 + 24);
    v6 = v5;
    MiRemoveUnusedSegment(v3);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_DWORD *)(v3 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v3 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v8);
    MiReleaseControlAreaWaiters(v6);
    return 0LL;
  }
}
