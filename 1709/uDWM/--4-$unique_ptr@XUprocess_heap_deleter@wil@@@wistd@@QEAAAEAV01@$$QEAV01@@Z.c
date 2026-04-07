/*
 * XREFs of ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800343E0
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180031FD8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18003230C (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180036B40 (-MemoryFree@@YAXPEAX@Z.c)
 */

void **__fastcall wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(void **a1, void **a2)
{
  void *v3; // rdi
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != v4 )
    {
      if ( v4 )
        MemoryFree(v4);
      *a1 = v3;
    }
  }
  return a1;
}
