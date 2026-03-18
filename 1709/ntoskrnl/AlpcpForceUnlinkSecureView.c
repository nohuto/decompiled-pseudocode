/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x140451F5C
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1404FCCD4 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *v3; // rsi
  __int64 result; // rax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v5; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  v2 = BugCheckParameter2;
  v3 = *(_KPROCESS **)(BugCheckParameter2 + 32);
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v2 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v2 + 64) )
    {
      KiStackAttachProcess(v3, 0, (__int64)&v5);
      MmUnsecureVirtualMemory(*(HANDLE *)(v2 + 64));
      KiUnstackDetachProcess(&v5, 0LL);
      *(_QWORD *)(v2 + 64) = 0LL;
    }
    *(_DWORD *)(v2 + 72) |= 1u;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v2 + 72) |= 4u;
  }
  else
  {
    v2 = 0LL;
  }
  result = AlpcpUnlockBlob(v1);
  if ( v2 )
    return AlpcpDereferenceBlobEx(v2);
  return result;
}
