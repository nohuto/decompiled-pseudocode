/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x1400F6D54
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiNonPagedPoolToNode @ 0x1400F4370 (MiNonPagedPoolToNode.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F739C (MiSystemVaToDynamicBitmap.c)
 *     MiReleaseSessionVa @ 0x1400F7EA8 (MiReleaseSessionVa.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v6; // rdi
  unsigned __int64 *p_Region; // rbp
  unsigned __int64 *v10; // r15
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // r11
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 *v16; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  bool i; // zf
  _QWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  BugCheckParameter4 = (int)a3;
  v6 = BugCheckParameter3 >> 21;
  switch ( (_DWORD)a3 )
  {
    case 3:
      return result;
    case 1:
      return MiReleaseSessionVa(BugCheckParameter2, (unsigned int)v6);
    case 5:
      p_Region = &qword_140388510[25 * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2) + 11].Region;
      break;
    default:
      p_Region = (unsigned __int64 *)MiSystemVaToDynamicBitmap((unsigned int)a3, BugCheckParameter3, a3, a4);
      break;
  }
  v10 = p_Region;
  v11 = (BugCheckParameter2 - p_Region[4]) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 14 )
  {
    v10 = v20;
    v18 = p_Region[2];
    v20[1] = p_Region[1];
    v20[0] = v18;
  }
  KeAcquireInStackQueuedSpinLock(p_Region + 8, &LockHandle);
  v12 = v11 + v6 - 1;
  if ( v12 >= *v10 )
    goto LABEL_32;
  if ( v6 > 1 )
  {
    v14 = v10[1];
    v15 = (__int64 *)(v14 + 8 * (v11 >> 6));
    v16 = (__int64 *)(v14 + 8 * (v12 >> 6));
    v17 = *v15;
    if ( v15 != v16 )
    {
      for ( i = ((-1LL << v11) & v17) == -1LL << v11; ; i = *v15 == -1 )
      {
        if ( !i )
          goto LABEL_32;
        if ( ++v15 == v16 )
          break;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v12) & *v15) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v12 )
        goto LABEL_12;
      v13 = 0;
      goto LABEL_11;
    }
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v11) & v17) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v11 )
      goto LABEL_12;
LABEL_32:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v6 != 1 )
    goto LABEL_32;
  v13 = _bittest64((const signed __int64 *)v10[1], v11);
LABEL_11:
  if ( !v13 )
    goto LABEL_32;
LABEL_12:
  RtlClearBitsEx((__int64)v10, v11, v6);
  if ( (_DWORD)BugCheckParameter4 == 14 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v11 < p_Region[6] )
      p_Region[6] = v11;
  }
  else if ( v11 < p_Region[3] )
  {
    p_Region[3] = v11;
  }
  _InterlockedExchangeAdd64(&qword_140389950[(int)BugCheckParameter4], -(__int64)v6);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_140388608 += BugCheckParameter3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
