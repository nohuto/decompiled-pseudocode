/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x140425B50
 * Callers:
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140425814 (PspWow64GetContextThread.c)
 * Callees:
 *     PsGetThreadTeb @ 0x140007C30 (PsGetThreadTeb.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140425EAC (RtlWow64GetCpuAreaInfo.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  _OWORD *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rax
  struct _KTHREAD *v23; // rdi
  struct _KTHREAD *v25; // rbx
  int CpuAreaInfo; // [rsp+20h] [rbp-C8h]
  __int64 ThreadTeb; // [rsp+30h] [rbp-B8h]
  volatile void *Address; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v31; // [rsp+78h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (signed __int64 *)(a2 + 1720);
  ExAcquirePushLockSharedEx(a2 + 1720, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v31);
    v15 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v15 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v15, v14, &Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v16 = Address;
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address + 716 > 0x7FFFFFFF0000LL || (char *)Address + 716 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          v17 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v16;
            *(_OWORD *)(a4 + 16) = v16[1];
            *(_OWORD *)(a4 + 32) = v16[2];
            *(_OWORD *)(a4 + 48) = v16[3];
            *(_OWORD *)(a4 + 64) = v16[4];
            *(_OWORD *)(a4 + 80) = v16[5];
            *(_OWORD *)(a4 + 96) = v16[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v16[7];
            v16 += 8;
            --v17;
          }
          while ( v17 );
          *(_OWORD *)a4 = *v16;
          *(_OWORD *)(a4 + 16) = v16[1];
          *(_OWORD *)(a4 + 32) = v16[2];
          *(_OWORD *)(a4 + 48) = v16[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v16 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v16 + 18);
          if ( a7 )
          {
            v19 = v30;
            if ( v30 >= 0x7FFFFFFF0000LL )
              v19 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v19;
          }
        }
        else
        {
          v20 = Address;
          ProbeForWrite(Address, 0x2CCuLL, 4u);
          v21 = 5LL;
          do
          {
            *v20 = *(_OWORD *)a4;
            v20[1] = *(_OWORD *)(a4 + 16);
            v20[2] = *(_OWORD *)(a4 + 32);
            v20[3] = *(_OWORD *)(a4 + 48);
            v20[4] = *(_OWORD *)(a4 + 64);
            v20[5] = *(_OWORD *)(a4 + 80);
            v20[6] = *(_OWORD *)(a4 + 96);
            v20 += 8;
            *(v20 - 1) = *(_OWORD *)(a4 + 112);
            a4 += 128LL;
            --v21;
          }
          while ( v21 );
          *v20 = *(_OWORD *)a4;
          v20[1] = *(_OWORD *)(a4 + 16);
          v20[2] = *(_OWORD *)(a4 + 32);
          v20[3] = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v20 + 8) = *(_QWORD *)(a4 + 64);
          *((_DWORD *)v20 + 18) = *(_DWORD *)(a4 + 72);
          if ( a7 )
          {
            v22 = v30;
            if ( v30 >= 0x7FFFFFFF0000LL )
              v22 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v22 = *a7;
          }
        }
        if ( a8 )
        {
          v18 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v18 )
          {
            if ( (v18 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v18 + 8) > 0x7FFFFFFF0000LL || v18 + 8 < (unsigned __int64)(v18 + 4) )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = *(_BYTE *)(v18 + 4) & 2;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      CpuAreaInfo = -1073741811;
    }
    KiUnstackDetachProcess(&v31, 0LL);
    v23 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1720), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a2 + 1720));
    KeAbPostRelease(a2 + 1720);
    KeLeaveCriticalRegionThread((__int64)v23);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v25 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegionThread((__int64)v25);
    return 3221225547LL;
  }
}
