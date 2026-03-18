/*
 * XREFs of ?ReaderUnregistered@DataProviderProxy@@QEAAXXZ @ 0x180169DA0
 * Callers:
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016BC14 (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DataProviderProxy::ReaderUnregistered(DataProviderProxy *this)
{
  char *v1; // rdi

  --*((_DWORD *)this + 14);
  v1 = (char *)this + 8;
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 64LL))(
    (char *)this + 8,
    *((unsigned int *)this + 14));
  if ( !*((_DWORD *)this + 14) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))(v1);
}
