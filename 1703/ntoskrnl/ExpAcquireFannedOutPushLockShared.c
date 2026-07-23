/*
 * XREFs of ExpAcquireFannedOutPushLockShared @ 0x14014EC1C
 * Callers:
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 *__fastcall ExpAcquireFannedOutPushLockShared(unsigned __int64 a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // r11
  unsigned int v5; // ecx
  signed __int64 *v6; // rbx

  v3 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v4 = a1 >> 4;
  _BitScanReverse(&v5, v3);
  v6 = (signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v5 - 2)
                                    + 8LL * (v3 ^ (1 << v5))
                                    + 8)
                        + 8 * (v4 & 0x1FF));
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, a2, a3);
  return v6;
}
