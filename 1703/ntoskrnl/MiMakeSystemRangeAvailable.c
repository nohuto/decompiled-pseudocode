/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x1400825B4
 * Callers:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 * Callees:
 *     MiReleaseSessionVa @ 0x140035AD4 (MiReleaseSessionVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiNonPagedPoolToNode @ 0x140126720 (MiNonPagedPoolToNode.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v5; // rsi
  __int64 *p_Region; // rbx
  __int64 *v9; // r14
  ULONG_PTR v10; // rdi
  ULONG_PTR v11; // r11
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 *v15; // r10
  __int64 v16; // rax
  bool i; // zf
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  BugCheckParameter4 = a3;
  v5 = BugCheckParameter3 >> 21;
  if ( a3 == 3 )
    return result;
  if ( a3 == 1 )
    return MiReleaseSessionVa(BugCheckParameter2, v5);
  p_Region = 0LL;
  switch ( a3 )
  {
    case 5:
      p_Region = (__int64 *)&qword_14036C1C8[25 * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2) + 11].Region;
      break;
    case 6:
      p_Region = &qword_14036C3A8;
      break;
    case 7:
      p_Region = &qword_14036C438;
      break;
    case 8:
      p_Region = &qword_14036C480;
      break;
    case 9:
LABEL_28:
      p_Region = &qword_14036C2D0;
      break;
    case 11:
      p_Region = (__int64 *)&unk_14036C360;
      break;
    case 12:
      p_Region = &qword_14036C318;
      break;
    case 13:
      p_Region = (__int64 *)&unk_14036C3F0;
      break;
    case 15:
      goto LABEL_28;
    default:
      break;
  }
  v9 = p_Region;
  v10 = (BugCheckParameter2 - p_Region[4]) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 15 )
  {
    v9 = v18;
    v18[1] = p_Region[1];
    v18[0] = p_Region[2];
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)p_Region + 8, &LockHandle);
  v11 = v10 + v5 - 1;
  if ( v11 >= *v9 )
    goto LABEL_46;
  if ( v5 > 1 )
  {
    v13 = v9[1];
    v14 = (__int64 *)(v13 + 8 * (v10 >> 6));
    v15 = (__int64 *)(v13 + 8 * (v11 >> 6));
    v16 = *v14;
    if ( v14 != v15 )
    {
      for ( i = ((-1LL << v10) & v16) == -1LL << v10; ; i = *v14 == -1 )
      {
        if ( !i )
          goto LABEL_46;
        if ( ++v14 == v15 )
          break;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11) & *v14) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11 )
        goto LABEL_18;
      v12 = 0;
      goto LABEL_17;
    }
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10 )
      goto LABEL_18;
LABEL_46:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v5 != 1 )
    goto LABEL_46;
  v12 = _bittest64((const signed __int64 *)v9[1], v10);
LABEL_17:
  if ( !v12 )
    goto LABEL_46;
LABEL_18:
  RtlClearBitsEx(v9, v10, v5);
  if ( (_DWORD)BugCheckParameter4 == 15 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v10 < p_Region[6] )
      p_Region[6] = v10;
  }
  else if ( v10 < p_Region[3] )
  {
    p_Region[3] = v10;
  }
  _InterlockedExchangeAdd64(&qword_14036D690[(int)BugCheckParameter4], -(__int64)v5);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_14036C2C8 += BugCheckParameter3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
