/*
 * XREFs of ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000E594
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000C460 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007550 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x18000DB84 (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000EA28 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 */

__int64 __fastcall CreateResourceManagerClientProxyInternal(struct IResourceManager **a1)
{
  int v2; // edi
  ResourceManagerClientProxy *v3; // rax
  ResourceManagerClientProxy *v4; // rbx

  if ( a1 )
  {
    v3 = (ResourceManagerClientProxy *)operator new(0x290uLL);
    if ( v3 )
      v4 = ResourceManagerClientProxy::ResourceManagerClientProxy(v3);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v2 = ResourceManagerClientProxy::Init(v4);
      if ( v2 >= 0 )
      {
        *a1 = (struct IResourceManager *)v4;
        v4 = 0LL;
      }
      if ( v4 )
        (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)v4 + 120LL))(v4, 1LL);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v2;
}
