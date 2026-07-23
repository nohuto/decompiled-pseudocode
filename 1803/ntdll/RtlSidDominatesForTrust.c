/*
 * XREFs of RtlSidDominatesForTrust @ 0x18002E5E0
 * Callers:
 *     sub_180002C80 @ 0x180002C80 (sub_180002C80.c)
 *     sub_18002E46C @ 0x18002E46C (sub_18002E46C.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x18006C4D0 (RtlIsValidProcessTrustLabelSid.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  BOOLEAN v3; // bl

  v3 = 0;
  *DominatesTrust = 0;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !Sid2 )
    goto LABEL_3;
  if ( RtlIsValidProcessTrustLabelSid(Sid2) )
  {
    if ( !Sid1 )
    {
      v3 = *((_DWORD *)Sid2 + 2) == 0;
      goto LABEL_4;
    }
    if ( *((_DWORD *)Sid1 + 2) < *((_DWORD *)Sid2 + 2) || *((_DWORD *)Sid1 + 3) < *((_DWORD *)Sid2 + 3) )
      goto LABEL_4;
LABEL_3:
    v3 = 1;
LABEL_4:
    *DominatesTrust = v3;
    return 0;
  }
  return -1073741811;
}
