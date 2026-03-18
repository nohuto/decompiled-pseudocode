/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1401FE738
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x14020AD80 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x14020AE24 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1401FE7E0 (IopAcquirePassiveInterruptBlockLock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401FE8AC (IopFindPassiveInterruptBlock.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int8 v3; // [rsp+48h] [rbp+10h] BYREF

  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 32) )
      ((void (__fastcall *)(_QWORD, __int64))off_1403534B0[0])(*(unsigned int *)(result + 24), 1LL);
    IopAcquirePassiveInterruptBlockLock(v1, &v3);
    v2 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v2 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      KiInsertQueueDpc(v1 + 104, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 56));
    result = v3;
    __writecr8(v3);
  }
  return result;
}
