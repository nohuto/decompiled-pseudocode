/*
 * XREFs of ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180006770
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x1800066D8 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180004250 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
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
    v2 = (ExecutionModel::_ResourceSetInfo *)((char *)v2 + 376);
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 2681) = 0LL;
  *((_QWORD *)this + 2682) = 0LL;
  *((_BYTE *)this + 22000) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 22008), 0, 0);
  *((_QWORD *)this + 2756) = (char *)this + 22048;
  *((_QWORD *)this + 2757) = (char *)this + 22048;
  *((_QWORD *)this + 2758) = 0LL;
  *((_QWORD *)this + 2759) = 0LL;
  *((_WORD *)this + 11040) = 2048;
  result = this;
  *((_WORD *)this + 10740) = 0;
  return result;
}
