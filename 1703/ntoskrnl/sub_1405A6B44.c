/*
 * XREFs of sub_1405A6B44 @ 0x1405A6B44
 * Callers:
 *     ExInitLicenseData @ 0x140808950 (ExInitLicenseData.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405B70B0 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_1405A6B44()
{
  int v0; // r8d
  unsigned int v1; // edx

  memset(&qword_140384F50, 0, 0x40uLL);
  v0 = -1;
  v1 = 0;
  if ( (_DWORD)xmmword_1403F8890 )
  {
    while ( (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))(KeServiceDescriptorTable
                                                                                   + (*(int *)(KeServiceDescriptorTable
                                                                                             + 4LL * v1) >> 4)) != NtQuerySystemInformation )
    {
      if ( ++v1 >= (unsigned int)xmmword_1403F8890 )
        goto LABEL_6;
    }
    v0 = v1;
  }
LABEL_6:
  dword_140384F80 = v0;
  if ( v0 == -1 )
    return -1073741198;
  qword_140384F50 = 8LL;
  qword_140384F70 = (__int64)sub_14053BF50;
  dword_140384F58 = 0;
  qword_140384F60 = 0LL;
  dword_140384F68 = 10;
  qword_140384F78 = 0LL;
  return BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
}
