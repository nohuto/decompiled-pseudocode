/*
 * XREFs of ?DeleteResourceManagerClientProxy@@YAJPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000C470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeleteResourceManagerClientProxy(struct IResourceManager *a1)
{
  ((void (__fastcall *)(struct IResourceManager *))a1->lpVtbl->Release)(a1);
  return 0LL;
}
