/*
 * XREFs of ObpSetObjectAuditInfo @ 0x1406C1550
 * Callers:
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x14050C750 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, void *a2)
{
  _QWORD *v5; // rbx
  SIZE_T v6; // r14
  PVOID PoolWithTag; // rax
  void *v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rsi

  if ( !RtlValidSecurityDescriptor(a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    v5 = (_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F]);
  else
    v5 = 0LL;
  if ( v5 && !*v5 )
  {
    v6 = RtlLengthSecurityDescriptor(a2);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x4941624Fu);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, a2, v6);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = a1 + 16;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    if ( *v5 )
    {
      ExReleasePushLockEx(v10, 0LL);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *v5 = v8;
      ExReleasePushLockEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return 0LL;
}
