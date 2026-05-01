/*
 * XREFs of ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18000FAD0
 * Callers:
 *     RmGetResourceSetInfoPolicy @ 0x18000CE20 (RmGetResourceSetInfoPolicy.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x18000DEE0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18000E020 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x18000E8C0 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000FB48 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1

  if ( a2 > 0x38 )
    return 2147942487LL;
  v4 = (_OWORD *)(a1 + 384LL * (int)a2);
  v5 = 3LL;
  do
  {
    *a3 = *v4;
    a3[1] = v4[1];
    a3[2] = v4[2];
    a3[3] = v4[3];
    a3[4] = v4[4];
    a3[5] = v4[5];
    a3[6] = v4[6];
    a3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(a3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  return 0LL;
}
