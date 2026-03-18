/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x14048BE1C
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140511AB4 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *v3; // rsi
  __int64 result; // rax
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  v2 = BugCheckParameter2;
  v3 = *(_KPROCESS **)(BugCheckParameter2 + 32);
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v2 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v2 + 64) )
    {
      KiStackAttachProcess(v3, 0, (__int64)v5);
      MmUnsecureVirtualMemory(*(HANDLE *)(v2 + 64));
      KiUnstackDetachProcess((__int64)v5, 0LL);
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
