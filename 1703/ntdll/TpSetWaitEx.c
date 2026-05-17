/*
 * XREFs of TpSetWaitEx @ 0x180017300
 * Callers:
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     RtlDeregisterWaitEx @ 0x180012890 (RtlDeregisterWaitEx.c)
 *     sub_180012AB0 @ 0x180012AB0 (sub_180012AB0.c)
 *     RtlRegisterWait @ 0x180012DA0 (RtlRegisterWait.c)
 *     sub_18001327C @ 0x18001327C (sub_18001327C.c)
 *     TpSetWait @ 0x1800144B0 (TpSetWait.c)
 *     sub_180052270 @ 0x180052270 (sub_180052270.c)
 *     sub_180082FA0 @ 0x180082FA0 (sub_180082FA0.c)
 * Callees:
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     sub_180017914 @ 0x180017914 (sub_180017914.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char v13; // al
  signed int v14; // ebx
  BOOL v15; // ebp
  char v17; // al
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)sub_180017610(a1, 0LL, a2 != 0) )
    return 0LL;
  if ( a4 )
  {
    sub_1801058B8(v9, v8, v10, v11);
    return 0LL;
  }
  v12 = *(_QWORD *)(a1 + 144);
  RtlAcquireSRWLockExclusive(a1 + 240);
  v13 = sub_180017414(a1, v12 + 112, 0LL, &v18);
  v14 = v18;
  v15 = v18 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 355) )
  {
    if ( !v13 )
    {
      *(_BYTE *)(a1 + 464) |= 1u;
      v17 = *(_BYTE *)(a1 + 464);
      *(_QWORD *)(a1 + 376) = a2;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 464) = v17 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v14 += sub_180017914(a1, a2, a3);
      v18 = v14;
LABEL_8:
      if ( v14 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14);
        v14 = 0;
        v18 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 240);
  if ( v14 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14) == -v14 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v15;
}
