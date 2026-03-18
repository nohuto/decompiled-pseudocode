/*
 * XREFs of SepCaptureAuditPolicy @ 0x1407905D8
 * Callers:
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureAuditPolicy(
        unsigned __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *PoolWithTag; // rax

  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 30 > 0x7FFFFFFF0000LL || a1 + 30 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1EuLL, 0x61506553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
  PoolWithTag[2] = *(_QWORD *)(a1 + 16);
  *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)(a1 + 24);
  *((_WORD *)PoolWithTag + 14) = *(_WORD *)(a1 + 28);
  return 0LL;
}
