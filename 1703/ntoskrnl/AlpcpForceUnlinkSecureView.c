/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x1406B18C0
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140498C64 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 */

unsigned __int64 __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *v3; // rsi
  unsigned __int64 result; // rax
  $5BC46E0569261879018906DEC3127961 v5; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = a1;
  v3 = *(_KPROCESS **)(a1 + 32);
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v2 == *(_QWORD *)(v1 + 72) )
  {
    KiStackAttachProcess(v3, 0, (__int64)&v5);
    MmUnsecureVirtualMemory(*(HANDLE *)(v2 + 64));
    KiUnstackDetachProcess(&v5, 0LL);
    *(_DWORD *)(v2 + 72) |= 1u;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v2 + 72) |= 4u;
  }
  else
  {
    v2 = 0LL;
  }
  result = AlpcpUnlockBlob(v1);
  if ( v2 )
    return AlpcpDereferenceBlobEx(v2, 1);
  return result;
}
