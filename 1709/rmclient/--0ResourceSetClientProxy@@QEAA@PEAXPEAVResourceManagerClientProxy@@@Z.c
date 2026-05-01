/*
 * XREFs of ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000DB94
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000E128 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18000E6B0 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000E940 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800046D0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 */

ResourceSetClientProxy *__fastcall ResourceSetClientProxy::ResourceSetClientProxy(
        ResourceSetClientProxy *this,
        void *a2,
        struct ResourceManagerClientProxy *a3)
{
  *((_QWORD *)this + 3) = -1LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &ResourceSetClientProxy::`vftable';
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 2) = a2;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ResourceSetClientProxy *)((char *)this + 40));
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 1;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = a3;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 448), 0, 0);
  *((_DWORD *)this + 122) = 0;
  return this;
}
