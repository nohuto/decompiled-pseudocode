/*
 * XREFs of ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x1800066D8
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x1800066D0 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180006770 (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180006840 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180007C40 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateResourceManagerClientProxyInternal(struct IResourceManager **a1)
{
  unsigned int v1; // ebx
  ResourceManagerClientProxy *v3; // rax
  const unsigned __int16 *v4; // rdx
  int v5; // r8d
  ResourceManagerClientProxy *v6; // rdi
  int v7; // esi

  v1 = 0;
  if ( a1 )
  {
    v3 = (ResourceManagerClientProxy *)operator new(0x5648uLL);
    if ( v3 )
      v6 = ResourceManagerClientProxy::ResourceManagerClientProxy(v3);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = ResourceManagerClientProxy::Init(v6, v4, v5);
      if ( v7 >= 0 )
      {
        *a1 = (struct IResourceManager *)v6;
        v6 = 0LL;
      }
      if ( v6 )
        (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)v6 + 120LL))(v6, 1LL);
    }
    else
    {
      v7 = -2147024882;
    }
  }
  else
  {
    v7 = -2147024809;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v1;
}
