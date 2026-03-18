/*
 * XREFs of VerifierCrashEvent @ 0x1402A9C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierCrashEvent(__int64 a1)
{
  unsigned int v1; // edx
  int v3; // r8d

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( VfClearanceFlag )
  {
    v3 = VerifyLevelRecord;
    if ( (VerifyLevelRecord & 0x400000) != 0 )
    {
      v1 = 1;
      *(_DWORD *)a1 = VfBugcheckTmpData;
      *(_QWORD *)(a1 + 8) = BugCheckParameter1;
      *(_QWORD *)(a1 + 16) = qword_140842028;
      *(_QWORD *)(a1 + 24) = qword_140842030;
      *(_QWORD *)(a1 + 32) = qword_140842038;
      *(_DWORD *)(a1 + 40) = v3;
      *(_DWORD *)(a1 + 44) = VfOptionFlags;
      *(_DWORD *)(a1 + 48) = VfFlightOptions;
    }
  }
  return v1;
}
