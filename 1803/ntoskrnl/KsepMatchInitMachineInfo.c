/*
 * XREFs of KsepMatchInitMachineInfo @ 0x1408A5680
 * Callers:
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 *     KsepStringAnsiToUnicode @ 0x140623958 (KsepStringAnsiToUnicode.c)
 *     KsepMatchInitBiosInfo @ 0x1408A5780 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x1408A5AC8 (KsepMatchInitAcpiOemInfo.c)
 */

__int64 KsepMatchInitMachineInfo()
{
  int matched; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v2; // r9
  char *VendorString; // r8
  NTSTATUS v4; // ebx
  int v5; // ebx
  __int64 result; // rax
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rcx

  matched = KsepMatchInitAcpiOemInfo();
  if ( matched < 0 )
  {
    v7 = KsepDebugFlag;
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = matched;
    KsepHistoryErrors[2 * v8] = 655516;
    if ( (v7 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
    KsepLogError(0, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
  }
  memset(&qword_1403E67C0, 0, 0x38uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = -1LL;
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v2;
  while ( VendorString[v2] );
  v4 = KsepStringAnsiToUnicode(word_1403E6530, 0x20Au, VendorString, v2);
  if ( v4 < 0 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = v4;
    KsepHistoryErrors[2 * v9] = 655522;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v4);
    KsepLogError(0, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v4);
  }
  else
  {
    dword_1403E67E4 = CurrentPrcb->CpuType;
    dword_1403E67E0 = CurrentPrcb->CpuModel;
    qword_1403E67C0 = (__int64)word_1403E6530;
  }
  v5 = KsepMatchInitBiosInfo();
  if ( v5 < 0 )
  {
    v10 = KsepDebugFlag;
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = v5;
    KsepHistoryErrors[2 * v11] = 655528;
    if ( (v10 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v5);
    KsepLogError(0, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v5);
  }
  KsepMatchMachineInfo = (__int64)&qword_1403E64F0;
  qword_1403AD828 = (__int64)&qword_1403E6740;
  qword_1403AD830 = (__int64)&qword_1403E6778;
  result = 0LL;
  qword_1403AD838 = (__int64)&qword_1403E67C0;
  return result;
}
