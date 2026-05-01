/*
 * XREFs of ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000C7BC
 * Callers:
 *     ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x18000C8D0 (--_GResourceManagerClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180007C88 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     RmpClientWnfDestroySubscription @ 0x18000E8D8 (RmpClientWnfDestroySubscription.c)
 */

void __fastcall ResourceManagerClientProxy::~ResourceManagerClientProxy(ResourceManagerClientProxy *this)
{
  bool v1; // zf
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  void *v7; // rcx

  v1 = *((_BYTE *)this + 22000) == 0;
  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  if ( !v1 )
  {
    RmpClientWnfDestroySubscription(*((PVOID *)this + 2684));
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000F910, 1u, 0LL, (char *)this + 21456);
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 2681);
    *((_QWORD *)this + 2681) = 0LL;
  }
  v3 = (__int64 **)((char *)this + 22048);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 2759) = 0LL;
  v7 = (void *)*((_QWORD *)this + 2758);
  if ( v7 )
    operator delete(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
}
