/*
 * XREFs of sub_1800259B4 @ 0x1800259B4
 * Callers:
 *     sub_18002AE58 @ 0x18002AE58 (sub_18002AE58.c)
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     RtlInstallFunctionTableCallback @ 0x18006A010 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x18006A2B0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x18006A9D0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 *     sub_180071028 @ 0x180071028 (sub_180071028.c)
 *     sub_180074184 @ 0x180074184 (sub_180074184.c)
 *     sub_18007A78C @ 0x18007A78C (sub_18007A78C.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     RtlSetProtectedPolicy @ 0x18007F700 (RtlSetProtectedPolicy.c)
 *     sub_180080E08 @ 0x180080E08 (sub_180080E08.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     RtlInitializeNtUserPfn @ 0x18008AD90 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008AF70 (RtlResetNtUserPfn.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     sub_1800DAFC0 @ 0x1800DAFC0 (sub_1800DAFC0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028724 @ 0x180028724 (sub_180028724.c)
 */

void __fastcall sub_1800259B4(int a1)
{
  int v2; // edi

  RtlAcquireSRWLockExclusive(&stru_18015BF98);
  v2 = LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1];
  if ( a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]) )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    --LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]);
    if ( v2 == 1 )
      sub_180028724(2LL);
  }
  else
  {
    if ( !LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]) )
      sub_180028724(4LL);
    if ( v2 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    LODWORD(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[1]) = v2 + 1;
  }
  RtlReleaseSRWLockExclusive(&stru_18015BF98);
}
