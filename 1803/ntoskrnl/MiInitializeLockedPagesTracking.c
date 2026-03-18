/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x140749BF4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140652748 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiInitializeLockedPagesTracking(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x78546D4Du);
  v3 = result;
  if ( result )
  {
    result = memset(result, 0, 0x28uLL);
    v3[3] = 0LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 8) = 1;
    *(_QWORD *)(a1 + 1200) = v3;
  }
  return result;
}
