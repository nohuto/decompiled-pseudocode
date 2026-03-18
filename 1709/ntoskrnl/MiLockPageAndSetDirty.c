/*
 * XREFs of MiLockPageAndSetDirty @ 0x140032380
 * Callers:
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiMakeCombineCandidateClean @ 0x1400EB5A4 (MiMakeCombineCandidateClean.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140229C98 (MiMoveDirtyBitsToPfns.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v4; // di
  __int64 result; // rax

  v2 = 0LL;
  if ( a2 == 1 )
  {
    v4 = 17;
    MiLockPageAtDpcInline(a1);
  }
  else
  {
    v4 = MiLockPageInline(a1);
  }
  result = MiCaptureDirtyBitToPfn(a1);
  if ( result )
    v2 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    result = MiReleasePageFileInfo(v2, result, 1LL);
  if ( v4 != 17 )
  {
    result = v4;
    __writecr8(v4);
  }
  return result;
}
