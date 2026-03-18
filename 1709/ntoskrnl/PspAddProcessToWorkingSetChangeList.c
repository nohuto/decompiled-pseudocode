/*
 * XREFs of PspAddProcessToWorkingSetChangeList @ 0x1407173F8
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsProcessCallback @ 0x140717FB0 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     MmEnforceWorkingSetLimit @ 0x1400D46B0 (MmEnforceWorkingSetLimit.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char __fastcall PspAddProcessToWorkingSetChangeList(_KPROCESS *Object)
{
  __int64 PoolWithTag; // rax
  unsigned __int64 v3; // rdi
  __int64 *v4; // rcx

  LODWORD(PoolWithTag) = Object[1].DirectoryTableBase;
  if ( (PoolWithTag & 1) == 0 )
  {
    v3 = Object[1].Affinity.Bitmap[16];
    if ( (*(_DWORD *)(v3 + 848) & 1) != 0 )
    {
      LOBYTE(PoolWithTag) = ObReferenceObjectSafeWithTag((__int64)Object);
      if ( (_BYTE)PoolWithTag )
      {
        PoolWithTag = (__int64)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x72437350u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(PoolWithTag + 16) = Object;
          *(_QWORD *)(PoolWithTag + 32) = *(_QWORD *)(v3 + 800);
          *(_QWORD *)(PoolWithTag + 24) = *(_QWORD *)(v3 + 792);
          v4 = (__int64 *)qword_140359F28;
          if ( *(__int64 **)qword_140359F28 != &PspWorkingSetChangeHead )
            __fastfail(3u);
          *(_QWORD *)PoolWithTag = &PspWorkingSetChangeHead;
          *(_QWORD *)(PoolWithTag + 8) = v4;
          *v4 = PoolWithTag;
          qword_140359F28 = PoolWithTag;
        }
        else
        {
          LOBYTE(PoolWithTag) = ObfDereferenceObjectWithTag(Object, 0x624A7350u);
        }
      }
    }
    else
    {
      LOBYTE(PoolWithTag) = MmEnforceWorkingSetLimit(Object, 2);
    }
  }
  return PoolWithTag;
}
