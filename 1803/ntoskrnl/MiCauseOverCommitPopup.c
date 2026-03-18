/*
 * XREFs of MiCauseOverCommitPopup @ 0x140265884
 * Callers:
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x14025FBA0 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x140236B00 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 7528) != *(_QWORD *)(a1 + 6152) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 6164));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 6164));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 6160));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 6160));
  return v1;
}
