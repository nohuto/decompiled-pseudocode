/*
 * XREFs of KsepMatchInitMachineInfo @ 0x1407F7210
 * Callers:
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     KsepDebugPrint @ 0x140208448 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020848C (KsepLogError.c)
 *     KsepStringAnsiToUnicode @ 0x14059BF68 (KsepStringAnsiToUnicode.c)
 *     KsepMatchInitAcpiOemInfo @ 0x1407F70D4 (KsepMatchInitAcpiOemInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1407F7CD4 (KsepMatchInitBiosInfo.c)
 */

__int64 __fastcall KsepMatchInitMachineInfo(__int64 a1)
{
  int matched; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // r9
  char *VendorString; // r8
  NTSTATUS v5; // ebx
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  char v10; // al
  char v11; // al
  __int64 v12; // rdx

  matched = KsepMatchInitAcpiOemInfo(a1);
  if ( matched < 0 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = matched;
    KsepHistoryErrors[2 * v8] = 655516;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
    KsepLogError(0, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
  }
  memset(&qword_140386CB0, 0, 0x38uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = -1LL;
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v3;
  while ( VendorString[v3] );
  v5 = KsepStringAnsiToUnicode(word_140386A20, 0x20Au, VendorString, v3);
  if ( v5 < 0 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v10 = KsepDebugFlag;
    KsepHistoryErrors[2 * v9 + 1] = v5;
    KsepHistoryErrors[2 * v9] = 655522;
    if ( (v10 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v5);
    KsepLogError(0, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v5);
  }
  else
  {
    dword_140386CD4 = CurrentPrcb->CpuType;
    dword_140386CD0 = CurrentPrcb->CpuModel;
    qword_140386CB0 = (__int64)word_140386A20;
  }
  v6 = KsepMatchInitBiosInfo();
  if ( v6 < 0 )
  {
    v11 = KsepDebugFlag;
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v12 + 1] = v6;
    KsepHistoryErrors[2 * v12] = 655528;
    if ( (v11 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v6);
    KsepLogError(0, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v6);
  }
  KsepMatchMachineInfo = (__int64)&qword_1403869E0;
  qword_14034FCE8 = (__int64)&qword_140386C30;
  qword_14034FCF0 = (__int64)&qword_140386C68;
  result = 0LL;
  qword_14034FCF8 = (__int64)&qword_140386CB0;
  return result;
}
