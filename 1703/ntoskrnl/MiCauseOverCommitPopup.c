/*
 * XREFs of MiCauseOverCommitPopup @ 0x140218018
 * Callers:
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x14021A3F4 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 6248) != *(_QWORD *)(a1 + 4936) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 4948));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 4948));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 4944));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4944));
  return v1;
}
