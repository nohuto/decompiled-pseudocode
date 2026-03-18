/*
 * XREFs of PsGetParentSilo @ 0x1407788F0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     VRegEnabledInJob @ 0x1407080AC (VRegEnabledInJob.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1407F6710 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x1400CF63C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
