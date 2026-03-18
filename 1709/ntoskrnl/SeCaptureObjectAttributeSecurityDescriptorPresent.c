/*
 * XREFs of SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1400894EC
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     NtDuplicateToken @ 0x1404C66A0 (NtDuplicateToken.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectAttributeSecurityDescriptorPresent(__int64 a1, char a2, _BYTE *a3)
{
  *a3 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)(a1 + 32) )
        *a3 = 1;
    }
  }
  else if ( a1 && *(_QWORD *)(a1 + 32) )
  {
    *a3 = 1;
  }
  return 0LL;
}
