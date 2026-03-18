/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x1406B2DB0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405D36C0 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiInitializeLockedPagesTracking(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x78546D4Du);
  v3 = result;
  if ( result )
  {
    result = memset(result, 0, 0x20uLL);
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 1;
    *(_QWORD *)(a1 + 1200) = v3;
  }
  return result;
}
