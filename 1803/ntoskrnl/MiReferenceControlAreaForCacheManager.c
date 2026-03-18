/*
 * XREFs of MiReferenceControlAreaForCacheManager @ 0x14005A3D8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiValidateControlAreaPartition @ 0x14005A5A0 (MiValidateControlAreaPartition.c)
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1400E40E4 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
