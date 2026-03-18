/*
 * XREFs of MiReturnImageBase @ 0x1405937FC
 * Callers:
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1405F09CC (MiFreeRelocations.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiGetImageBitMapInfo @ 0x14006C8AC (MiGetImageBitMapInfo.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1400C55A0 (MiZeroCfgSystemWideBitmap.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiReturnSystemImageAddress @ 0x1405F6654 (MiReturnSystemImageAddress.c)
 */

__int64 __fastcall MiReturnImageBase(unsigned int *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF
  PRTL_BITMAP v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  if ( (_DWORD)v2 != -1 )
  {
    if ( *((_BYTE *)a1 + 12) == 1 )
    {
      if ( *((_BYTE *)a1 + 13) == 1 )
        return MiReturnSystemImageAddress((v2 - 0x80000000LL) << 16, a1[1] << 16);
    }
    else
    {
      MiGetImageBitMapInfo(a1[2], &BitMapHeader, &v10, 0LL);
      MiZeroCfgSystemWideBitmap((__int64)a1, v10 - ((*a1 + (unsigned __int64)a1[1]) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB428, 0LL);
      if ( v9 )
        RtlClearBits(v9, *a1, a1[1]);
      RtlClearBits(BitMapHeader, *a1, a1[1]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB428, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB428, v4, v5, v6);
      KeAbPostRelease((ULONG_PTR)&qword_1403CB428);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
