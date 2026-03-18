/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x14051639C
 * Callers:
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     PsGetThreadTeb @ 0x1400DD9C0 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1405162E0 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // r14
  __int64 ThreadTeb; // rbx
  __int16 v14; // dx
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  _OWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  struct _KTHREAD *v23; // rbx
  struct _KTHREAD *v25; // rbx
  int CpuAreaInfo; // [rsp+24h] [rbp-C4h]
  __int64 v28; // [rsp+28h] [rbp-C0h]
  volatile void *Address; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-88h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v31; // [rsp+70h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (signed __int64 *)(a2 + 1728);
  ExAcquirePushLockSharedEx(a2 + 1728, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  v28 = ThreadTeb;
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v31);
    v15 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v15 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v15, v14, (__int64)&Address);
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
            v18 = v30;
            if ( v30 >= 0x7FFFFFFF0000LL )
              v18 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v18;
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
          ThreadTeb = v28;
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
          v19 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v19 )
          {
            if ( (v19 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v19 + 8) > 0x7FFFFFFF0000LL || v19 + 8 < (unsigned __int64)(v19 + 4) )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = (*(_DWORD *)(v19 + 4) & 2) != 0;
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
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v23);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v25 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v25);
    return 3221225547LL;
  }
}
