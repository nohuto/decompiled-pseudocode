/*
 * XREFs of RaDeleteBus @ 0x1C00653EC
 * Callers:
 *     RaidAdapterHack @ 0x1C0026278 (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1C0029CA0 (RaidDeleteAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

void *__fastcall RaDeleteBus(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 16));
    *(_BYTE *)a1 = 0;
    return memset((void *)(a1 + 8), 0, 0x40uLL);
  }
  return result;
}
