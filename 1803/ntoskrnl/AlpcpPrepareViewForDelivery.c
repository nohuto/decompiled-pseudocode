/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x1404D9C30
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  __int64 v13; // r8
  _QWORD *v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  _BYTE v18[48]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v7 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v10 = *(_DWORD *)(v3 + 48);
  if ( (v10 & 1) == 0 )
  {
    if ( !a2 )
      goto LABEL_7;
    if ( *(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
    v11 = *(_DWORD *)(v3 + 52);
    if ( v11 > 2 )
      goto LABEL_7;
    if ( v11 != 1 )
    {
      v15 = *(_QWORD **)(v3 + 56);
      if ( v15 == (_QWORD *)BugCheckParameter2 )
        v15 = (_QWORD *)*v15;
      v16 = *(_DWORD *)(BugCheckParameter2 + 72);
      if ( (v16 & 8) == 0 )
      {
        v17 = MmSecureVirtualMemoryAgainstWrites(
                *(_QWORD *)(BugCheckParameter2 + 32),
                *(_QWORD *)(BugCheckParameter2 + 40),
                *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !v17 )
          goto LABEL_7;
        *(_QWORD *)(BugCheckParameter2 + 64) = v17;
        v16 = *(_DWORD *)(BugCheckParameter2 + 72);
      }
      *(_DWORD *)(BugCheckParameter2 + 72) = v16 & 0xFFFFFFFE;
      AlpcpReferenceBlob(BugCheckParameter2);
      *(_DWORD *)(v3 + 48) |= 1u;
      *(_QWORD *)(v3 + 72) = BugCheckParameter2;
      *(_QWORD *)(v3 + 80) = v15;
      goto LABEL_7;
    }
    *(_QWORD *)(v3 + 80) = BugCheckParameter2;
    *(_DWORD *)(v3 + 48) = v10 | 1;
LABEL_7:
    ++*(_DWORD *)(BugCheckParameter2 + 76);
    v12 = 0;
    goto LABEL_8;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v3 + 80) )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 64) )
        {
          KiStackAttachProcess(*(_KPROCESS **)(v7 + 32), 0, (__int64)v18);
          MmUnsecureVirtualMemory(*(HANDLE *)(v7 + 64));
          KiUnstackDetachProcess((__int64)v18, 0LL);
          *(_QWORD *)(v7 + 64) = 0LL;
        }
        *(_DWORD *)(v7 + 72) |= 1u;
        *(_QWORD *)(v3 + 72) = 0LL;
      }
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 48) &= ~1u;
      goto LABEL_7;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
  }
  v12 = -1073741790;
LABEL_8:
  v13 = (*(_DWORD *)(BugCheckParameter2 + 72) ^ (2 * a3)) & 2;
  *(_DWORD *)(BugCheckParameter2 + 72) ^= v13;
  AlpcpUnlockBlob(v3, v8, v13, v9);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7, 1);
  return v12;
}
