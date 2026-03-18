/*
 * XREFs of MiCauseOverCommitPopup @ 0x1402222C8
 * Callers:
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x140226984 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x1401F9810 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 6440) != *(_QWORD *)(a1 + 5064) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 5076));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 5076));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 5072));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 5072));
  return v1;
}
