/*
 * XREFs of ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180006650
 * Callers:
 *     <none>
 * Callees:
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x1800066D0 (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x1800067A0 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180008070 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateResourceManagerClientProxy(struct IResourceManager **a1)
{
  ResourceManagerClientProxy *v2; // rax
  ResourceManagerClientProxy *v3; // rbx
  int v4; // edi

  if ( a1 )
  {
    v2 = (ResourceManagerClientProxy *)operator new(0x5810uLL);
    if ( v2 )
      v3 = ResourceManagerClientProxy::ResourceManagerClientProxy(v2);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = ResourceManagerClientProxy::Init(v3);
      if ( v4 >= 0 )
      {
        *a1 = (struct IResourceManager *)v3;
        v3 = 0LL;
      }
      if ( v3 )
        (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)v3 + 120LL))(v3, 1LL);
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
  return (unsigned int)v4;
}
