/*
 * XREFs of HvViewMapFlush @ 0x140675B48
 * Callers:
 *     CmpDoSystemCacheWrite @ 0x14066A6BC (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14066C518 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     CcFlushCache @ 0x140034710 (CcFlushCache.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E1000 (HvpViewMapAcquireLockShared.c)
 *     CcPinRead @ 0x140436EB0 (CcPinRead.c)
 *     CcUnpinData @ 0x14054B080 (CcUnpinData.c)
 */

__int64 __fastcall HvViewMapFlush(__int64 a1, unsigned int a2, ULONG a3)
{
  __int64 v4; // r13
  ULONG v6; // esi
  unsigned int v7; // r15d
  ULONG v8; // r14d
  unsigned int Status; // esi
  PVOID BcbVoid; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+38h] [rbp-50h] BYREF
  PVOID Buffer; // [rsp+40h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  HvpViewMapAcquireLockShared(a1);
  v6 = a3;
  v7 = v4;
  while ( v6 )
  {
    v8 = *(_DWORD *)(32LL * ((v7 >> 18) & 0x3F) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(v7) & 0x7F)) + 24)
       - (v7 & 0x3FFFF);
    if ( v8 > v6 )
      v8 = v6;
    FileOffset.QuadPart = v7;
    CcPinRead(*(PFILE_OBJECT *)(a1 + 16), &FileOffset, v8, 1u, &BcbVoid, &Buffer);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinData(BcbVoid);
    v7 += v8;
    v6 -= v8;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v15 = v4;
  CcFlushCache(
    *(PSECTION_OBJECT_POINTERS *)(*(_QWORD *)(a1 + 16) + 40LL),
    (PLARGE_INTEGER)((char *)&v15 + 1),
    a3,
    &IoStatus);
  Status = IoStatus.Status;
  if ( IoStatus.Status >= 0 )
    return 0;
  return Status;
}
