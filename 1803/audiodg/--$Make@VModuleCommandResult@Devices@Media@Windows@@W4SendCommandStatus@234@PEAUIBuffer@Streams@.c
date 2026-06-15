/*
 * XREFs of ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x14004817C
 * Callers:
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14004CFC0 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140048DB8 (--0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@S.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Media::Devices::ModuleCommandResult,enum Windows::Media::Devices::SendCommandStatus,Windows::Storage::Streams::IBuffer *>(
        __int64 *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  void *v6; // rax
  __int64 v7; // rdi

  *a1 = 0LL;
  v6 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = Windows::Media::Devices::ModuleCommandResult::ModuleCommandResult(v6, *a2, *a3);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v7;
  }
  return a1;
}
