/*
 * XREFs of MiReturnImageBase @ 0x140499C04
 * Callers:
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1405946BC (MiFreeRelocations.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiGetImageBitMapInfo @ 0x1400BB4C8 (MiGetImageBitMapInfo.c)
 *     MiZeroCfgSystemWideBitmap @ 0x140125DC4 (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x1405413B0 (MiReturnSystemImageAddress.c)
 */

__int64 __fastcall MiReturnImageBase(unsigned int *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF
  PRTL_BITMAP v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

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
      MiGetImageBitMapInfo(a1[2], &BitMapHeader, &v7, 0LL);
      MiZeroCfgSystemWideBitmap((__int64)a1, v7 - ((*a1 + (unsigned __int64)a1[1]) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388288, 0LL);
      if ( v6 )
        RtlClearBits(v6, *a1, a1[1]);
      RtlClearBits(BitMapHeader, *a1, a1[1]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388288);
      KeAbPostRelease((ULONG_PTR)&qword_140388288);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
