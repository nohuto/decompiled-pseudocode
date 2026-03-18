/*
 * XREFs of ObpRegisterObject @ 0x14075AF1C
 * Callers:
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlStringCbCopyA @ 0x14008BC44 (RtlStringCbCopyA.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpGetObjectRefInfo @ 0x14075A7C0 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x14075AC60 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x1407A7F9C (EtwTraceObject.c)
 */

__int64 __fastcall ObpRegisterObject(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 *v6; // r9
  char *PoolWithTag; // rax
  unsigned int v8; // r8d
  char *v9; // rdi
  char v10; // al
  char v11; // cl
  char *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (xmmword_14044C2D0 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) != 0
      && ((ObpTraceFlags & 0x20) == 0 || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) != 0)
      && ObpIsObjectPoolTagTraced(a1)
      && (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v12) >= 0 )
    {
      v6 = (unsigned __int16 *)v12;
      if ( v12 )
        goto LABEL_12;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x17F8uLL, 0x7452624Fu);
      v12 = PoolWithTag;
      v6 = (unsigned __int16 *)PoolWithTag;
      if ( PoolWithTag )
      {
        v8 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
        *((_QWORD *)PoolWithTag + 1) = *((_QWORD *)ObpObjectTable + v8);
        *((_QWORD *)ObpObjectTable + v8) = PoolWithTag;
        *((_WORD *)PoolWithTag + 17) = 508;
LABEL_12:
        ++ObpNumTracedObjects;
        *(_QWORD *)v6 = a1;
        v9 = v12;
        RtlStringCbCopyA(
          v12 + 16,
          0x10uLL,
          (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[12]);
        *((_WORD *)v9 + 16) = 0;
        memset(v9 + 36, 0, 12LL * *((unsigned __int16 *)v9 + 17));
        v10 = ObpTraceFlags;
        v11 = *(_BYTE *)(a1 + 25) | 1;
        *(_BYTE *)(a1 + 25) = v11;
        if ( (v10 & 0x40) != 0 )
          *(_BYTE *)(a1 + 25) = v11 | 2;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v4, v5, (__int64)v6);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
