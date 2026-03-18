/*
 * XREFs of MiIssuePageExtendRequestNoWait @ 0x14021A398
 * Callers:
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MmResourcesAvailable @ 0x14012A820 (MmResourcesAvailable.c)
 *     MiPageFileNoFreeSpace @ 0x14021A3F4 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiQueuePageFileExtension @ 0x14021A580 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequestNoWait(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 + 456;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 72), 1, 0);
  if ( !(_DWORD)result )
  {
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 24) = a1;
    *(_QWORD *)(v4 + 32) = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( a3 == 1 )
      *(_BYTE *)(v4 + 79) |= 1u;
    else
      *(_BYTE *)(v4 + 79) &= ~1u;
    *(_QWORD *)(v4 + 80) = 0LL;
    return MiQueuePageFileExtension(v4, 0LL);
  }
  return result;
}
