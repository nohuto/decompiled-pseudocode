/*
 * XREFs of TpSetWaitEx @ 0x180025710
 * Callers:
 *     sub_180005610 @ 0x180005610 (sub_180005610.c)
 *     TpSetWait @ 0x1800247C0 (TpSetWait.c)
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     sub_1800571C0 @ 0x1800571C0 (sub_1800571C0.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180058640 (RtlRegisterWait.c)
 *     sub_180077048 @ 0x180077048 (sub_180077048.c)
 * Callees:
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_180076198 @ 0x180076198 (sub_180076198.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rbx
  char v9; // al
  signed int v10; // ebx
  BOOL v11; // ebp
  char v13; // al
  signed int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)sub_180025954(a1, 0LL, a2 != 0) )
    return 0LL;
  if ( a4 )
  {
    sub_1801086C8();
    return 0LL;
  }
  v8 = *(_QWORD *)(a1 + 144);
  RtlAcquireSRWLockExclusive(a1 + 240);
  v9 = sub_180028788(a1, v8 + 112, 0LL, &v14);
  v10 = v14;
  v11 = v14 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 355) )
  {
    if ( !v9 )
    {
      v13 = *(_BYTE *)(a1 + 464) | 1;
      *(_QWORD *)(a1 + 376) = a2;
      *(_BYTE *)(a1 + 464) = v13;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 464) = v13 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
      goto LABEL_10;
    }
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v10 += sub_180076198(a1, a2, a3);
      v14 = v10;
LABEL_10:
      if ( v10 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
        v10 = 0;
        v14 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 240);
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10) == -v10 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v11;
}
