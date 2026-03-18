/*
 * XREFs of KsepMatchInitMachineInfo @ 0x14083F164
 * Callers:
 *     KseInitialize @ 0x1408404D4 (KseInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020EFB4 (KsepLogError.c)
 *     KsepStringAnsiToUnicode @ 0x1405C55E0 (KsepStringAnsiToUnicode.c)
 *     KsepMatchInitBiosInfo @ 0x14083F264 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x14083F5AC (KsepMatchInitAcpiOemInfo.c)
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
  memset(&qword_1403A2120, 0, 0x38uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = -1LL;
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v2;
  while ( VendorString[v2] );
  v4 = KsepStringAnsiToUnicode(word_1403A1E90, 0x20Au, VendorString, v2);
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
    dword_1403A2144 = CurrentPrcb->CpuType;
    dword_1403A2140 = CurrentPrcb->CpuModel;
    qword_1403A2120 = (__int64)word_1403A1E90;
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
  KsepMatchMachineInfo = (__int64)&qword_1403A1E58;
  qword_14036A748 = (__int64)&qword_1403A20A0;
  qword_14036A750 = (__int64)&qword_1403A20D8;
  result = 0LL;
  qword_14036A758 = (__int64)&qword_1403A2120;
  return result;
}
