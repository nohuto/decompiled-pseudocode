/*
 * XREFs of MiReturnImageBase @ 0x140513EE8
 * Callers:
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x140581FD0 (MiFreeRelocations.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmap @ 0x14002EE7C (MiZeroCfgSystemWideBitmap.c)
 *     MiGetImageBitMapInfo @ 0x14005EC64 (MiGetImageBitMapInfo.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiReturnSystemImageAddress @ 0x140583130 (MiReturnSystemImageAddress.c)
 */

__int64 __fastcall MiReturnImageBase(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF
  PRTL_BITMAP v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a1;
  if ( (_DWORD)v5 != -1 )
  {
    if ( *((_BYTE *)a1 + 12) == 1 )
    {
      if ( *((_BYTE *)a1 + 13) == 1 )
        return MiReturnSystemImageAddress((v5 - 0x80000000LL) << 16, a1[1] << 16, a3, a4);
    }
    else
    {
      MiGetImageBitMapInfo(a1[2], &BitMapHeader, &v10, 0LL);
      MiZeroCfgSystemWideBitmap((__int64)a1, v10 - ((*a1 + (unsigned __int64)a1[1]) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BF68, 0LL);
      if ( v9 )
        RtlClearBits(v9, *a1, a1[1]);
      RtlClearBits(BitMapHeader, *a1, a1[1]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BF68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BF68);
      KeAbPostRelease((ULONG_PTR)&qword_14036BF68);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
