/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800046D0
 * Callers:
 *     CreateResourceManagerProxy @ 0x180001090 (CreateResourceManagerProxy.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x1800066D0 (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000DB94 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x18000DEE0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18000E020 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x18000E8C0 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000EBF0 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000FB48 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  __int64 v1; // r8
  char *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  ExecutionModel::_ResourceSetInfo *result; // rax

  *(_DWORD *)this = -1;
  v1 = 3LL;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 12) = 0;
  v2 = (char *)this + 88;
  *((_QWORD *)this + 8) = 0LL;
  v3 = 3LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 2) = 101;
  *((_DWORD *)this + 3) = 32;
  do
  {
    *(_DWORD *)v2 = -1;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 101;
    *((_WORD *)v2 + 10) = 0;
    v2 += 24;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 90) = 0;
  v4 = (_QWORD *)((char *)this + 160);
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 34) = 2;
  do
  {
    *v4 = 0x6500000065LL;
    v4[1] = 0x6500000065LL;
    v4[2] = 0x6500000065LL;
    v4 += 8;
    *(v4 - 5) = 0x6500000065LL;
    *(v4 - 4) = 0x6500000065LL;
    *(v4 - 3) = 0x6500000065LL;
    *(v4 - 2) = 0x6500000065LL;
    *(v4 - 1) = 0x6500000065LL;
    --v1;
  }
  while ( v1 );
  *v4 = 0x6500000065LL;
  *((_DWORD *)this + 95) = 0;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_DWORD *)this + 8) = 101;
  return result;
}
