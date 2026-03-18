/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x140049550
 * Callers:
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x140049920 (MiSystemVaToDynamicBitmap.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleaseSessionVa @ 0x1400CD1E0 (MiReleaseSessionVa.c)
 *     MiNonPagedPoolToNode @ 0x1400DC918 (MiNonPagedPoolToNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rdi
  unsigned __int64 *p_Region; // rbp
  unsigned __int64 *v9; // r15
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // r11
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // r9
  __int64 *v17; // r10
  bool i; // zf
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  BugCheckParameter4 = (int)a3;
  v5 = BugCheckParameter3 >> 21;
  switch ( a3 )
  {
    case 3u:
      return result;
    case 1u:
      return MiReleaseSessionVa(BugCheckParameter2, (unsigned int)v5);
    case 5u:
      p_Region = &qword_1403CB6A8[25 * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2) + 11].Region;
      break;
    default:
      p_Region = (unsigned __int64 *)MiSystemVaToDynamicBitmap(a3);
      break;
  }
  v9 = p_Region;
  v10 = (BugCheckParameter2 - p_Region[4]) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 14 )
  {
    v9 = v19;
    v13 = p_Region[2];
    v19[1] = p_Region[1];
    v19[0] = v13;
  }
  KeAcquireInStackQueuedSpinLock(p_Region + 8, &LockHandle);
  v11 = v10 + v5 - 1;
  if ( v11 >= *v9 )
    goto LABEL_32;
  if ( v5 > 1 )
  {
    v14 = v9[1];
    v15 = (__int64 *)(v14 + 8 * (v10 >> 6));
    v16 = *v15;
    v17 = (__int64 *)(v14 + 8 * (v11 >> 6));
    if ( v15 != v17 )
    {
      for ( i = ((-1LL << v10) & v16) == -1LL << v10; ; i = *v15 == -1 )
      {
        if ( !i )
          goto LABEL_32;
        if ( ++v15 == v17 )
          break;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11) & *v15) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11 )
        goto LABEL_12;
      v12 = 0;
      goto LABEL_11;
    }
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10 )
      goto LABEL_12;
LABEL_32:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v5 != 1 )
    goto LABEL_32;
  v12 = _bittest64((const signed __int64 *)v9[1], v10);
LABEL_11:
  if ( !v12 )
    goto LABEL_32;
LABEL_12:
  RtlClearBitsEx((__int64)v9, v10, v5);
  if ( (_DWORD)BugCheckParameter4 == 14 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v10 < p_Region[6] )
      p_Region[6] = v10;
  }
  else if ( v10 < p_Region[3] )
  {
    p_Region[3] = v10;
  }
  _InterlockedExchangeAdd64(&qword_1403CCF10[(int)BugCheckParameter4], -(__int64)v5);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_1403CB808 += BugCheckParameter3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
