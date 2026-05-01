/*
 * XREFs of ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x1800066D0
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180006650 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800046D0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 */

ResourceManagerClientProxy *__fastcall ResourceManagerClientProxy::ResourceManagerClientProxy(
        ResourceManagerClientProxy *this)
{
  ExecutionModel::_ResourceSetInfo *v2; // rbx
  __int64 v3; // rdi
  ResourceManagerClientProxy *result; // rax

  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  v2 = (ResourceManagerClientProxy *)((char *)this + 16);
  *((_DWORD *)this + 2) = 1;
  v3 = 57LL;
  do
  {
    ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(v2);
    v2 = (ExecutionModel::_ResourceSetInfo *)((char *)v2 + 384);
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 2738) = 0LL;
  *((_QWORD *)this + 2739) = 0LL;
  *((_BYTE *)this + 22456) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 22464), 0, 0);
  *((_QWORD *)this + 2813) = (char *)this + 22504;
  *((_QWORD *)this + 2814) = (char *)this + 22504;
  *((_QWORD *)this + 2815) = 0LL;
  *((_QWORD *)this + 2816) = 0LL;
  *((_WORD *)this + 11268) = 2048;
  result = this;
  *((_WORD *)this + 10968) = 0;
  return result;
}
