/*
 * XREFs of PspStorageFreeSlot @ 0x1407808EC
 * Callers:
 *     PsFreeSiloContextSlot @ 0x140778830 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x14077D330 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x14089FF04 (PspInitializeSiloStructures.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspStorageFreeSlot(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int32 *Buffer; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx

  v1 = a1 - 32;
  if ( a1 >= 0x20 && v1 >= 0x100 )
    return 3221225485LL;
  v4 = a1;
  if ( a1 >= 0x20 )
    v4 = v1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  Buffer = (signed __int32 *)PspStorageBitmap.Buffer;
  if ( a1 >= 0x20 )
    Buffer = (signed __int32 *)PspStorageExpansionBitmap.Buffer;
  if ( _bittest64((const signed __int64 *)Buffer, v4) )
  {
    _bittestandreset(Buffer, v4);
    v8 = 0;
  }
  else
  {
    v8 = -1073741811;
  }
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v9) = v9 & 6;
  if ( (_BYTE)v9 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock, v9, v5, v6);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  return v8;
}
