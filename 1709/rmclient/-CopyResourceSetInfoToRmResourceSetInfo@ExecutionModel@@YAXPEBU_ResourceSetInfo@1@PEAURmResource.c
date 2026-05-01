/*
 * XREFs of ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F904
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000E128 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18000E6B0 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000EE60 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000FB48 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

void __fastcall ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(
        ExecutionModel *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x5E0uLL);
  *((_QWORD *)a2 + 186) = *((_QWORD *)this + 46);
  *((_QWORD *)a2 + 158) = *((_QWORD *)this + 8);
  *((_QWORD *)a2 + 159) = *((_QWORD *)this + 9);
  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 305) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 304) = *((_DWORD *)this + 3);
  *(_OWORD *)((char *)a2 + 1224) = *(_OWORD *)((char *)this + 24);
  *((_WORD *)a2 + 620) = *((_WORD *)this + 20);
  *((_BYTE *)a2 + 1242) = *((_BYTE *)this + 42);
  *((_DWORD *)a2 + 311) = *((_DWORD *)this + 11);
  *((_DWORD *)a2 + 312) = *((_DWORD *)this + 12);
  *((_QWORD *)a2 + 157) = *((_QWORD *)this + 7);
  *((_DWORD *)a2 + 320) = *((_DWORD *)this + 20);
  *((_DWORD *)a2 + 374) = *((_DWORD *)this + 94);
  *((_DWORD *)a2 + 302) = *(_DWORD *)this;
  *((_DWORD *)a2 + 371) = *((_DWORD *)this + 90);
  *((_DWORD *)a2 + 375) = *((_DWORD *)this + 95);
  memcpy_s((char *)a2 + 1284, 0xC8uLL, (char *)this + 160, 0xC8uLL);
  memcpy_s((char *)a2 + 8, 0x4B0uLL, (char *)this + 88, 0x48uLL);
}
