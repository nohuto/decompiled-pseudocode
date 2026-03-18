/*
 * XREFs of ObpRegisterObject @ 0x1406C30BC
 * Callers:
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140062428 (RtlStringCbCopyA.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ObpGetObjectRefInfo @ 0x1406C2974 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x1406C2DF0 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x14070B18C (EtwTraceObject.c)
 */

__int64 __fastcall ObpRegisterObject(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // r9
  char *PoolWithTag; // rax
  unsigned int v6; // r8d
  char *v7; // rdi
  char *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (xmmword_1403E4010 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) != 0
      && ((ObpTraceFlags & 0x20) == 0 || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) != 0)
      && ObpIsObjectPoolTagTraced(a1)
      && (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v8) >= 0 )
    {
      v4 = v8;
      if ( v8 )
        goto LABEL_12;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x17F8uLL, 0x7452624Fu);
      v8 = PoolWithTag;
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v6 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
        *((_QWORD *)PoolWithTag + 1) = *((_QWORD *)ObpObjectTable + v6);
        *((_QWORD *)ObpObjectTable + v6) = PoolWithTag;
        *((_WORD *)PoolWithTag + 17) = 508;
LABEL_12:
        ++ObpNumTracedObjects;
        *(_QWORD *)v4 = a1;
        v7 = v8;
        RtlStringCbCopyA(
          v8 + 16,
          0x10uLL,
          (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[12]);
        *((_WORD *)v7 + 16) = 0;
        memset(v7 + 36, 0, 12LL * *((unsigned __int16 *)v7 + 17));
        *(_BYTE *)(a1 + 25) |= 1u;
        if ( (ObpTraceFlags & 0x40) != 0 )
          *(_BYTE *)(a1 + 25) |= 2u;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
