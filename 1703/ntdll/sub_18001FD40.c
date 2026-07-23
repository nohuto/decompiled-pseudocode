/*
 * XREFs of sub_18001FD40 @ 0x18001FD40
 * Callers:
 *     sub_180009FB0 @ 0x180009FB0 (sub_180009FB0.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 * Callees:
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     sub_18001FFBC @ 0x18001FFBC (sub_18001FFBC.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     sub_1800217D0 @ 0x1800217D0 (sub_1800217D0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007DC74 @ 0x18007DC74 (sub_18007DC74.c)
 *     sub_180080558 @ 0x180080558 (sub_180080558.c)
 */

__int64 __fastcall sub_18001FD40(
        _RTL_SRWLOCK *a1,
        _RTL_SRWLOCK *a2,
        _RTL_SRWLOCK *a3,
        unsigned int a4,
        unsigned int a5)
{
  _RTL_SRWLOCK *v5; // rbp
  int v9; // r13d
  PSLIST_ENTRY v10; // rbx
  int v11; // r15d
  __int64 Ptr; // rdi
  unsigned int v13; // r8d
  unsigned __int16 v14; // cx
  unsigned int v15; // eax
  __int64 v16; // rsi
  _RTL_SRWLOCK *v18; // rbx

  v5 = a3 + 2;
  v9 = 0;
  v10 = 0LL;
  v11 = 1;
  RtlAcquireSRWLockShared(a3 + 2);
  while ( 1 )
  {
    while ( !a3[1].Ptr )
    {
      if ( v11 == 2 )
        RtlReleaseSRWLockExclusive(v5);
      else
        RtlReleaseSRWLockShared(v5);
      v18 = a2 + 3;
      if ( v18->Ptr == v18
        || ((RtlAcquireSRWLockExclusive(a2 + 2), v18->Ptr == v18)
          ? (v10 = 0LL)
          : (v10 = (PSLIST_ENTRY)sub_1800217D0(a2, v18->Ptr, 2LL)),
            RtlReleaseSRWLockExclusive(a2 + 2),
            !v10) )
      {
        v10 = sub_18000EF18(a1, (__int64)a2, a5);
        if ( !v10 )
        {
          v16 = 0LL;
          goto LABEL_14;
        }
      }
      v11 = 2;
      RtlAcquireSRWLockExclusive(v5);
      sub_18007DC74(v10, a3);
      if ( a3[1].Ptr && LOWORD(v10[2].Next) == WORD1(v10[2].Next) )
        v10[1].Next = 0LL;
      else
        v10 = (PSLIST_ENTRY)sub_1800217D0(a3, v10, 0LL);
    }
    Ptr = (__int64)a3[3].Ptr;
    if ( (_RTL_SRWLOCK *)Ptr != &a3[3] )
    {
      while ( 2 )
      {
        LOWORD(v13) = *(_WORD *)(Ptr + 32);
        v9 = 0;
        while ( (_WORD)v13 != 1 || v11 != 1 )
        {
          v14 = v13 - 1;
          v13 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(Ptr + 32), v13 - 1, v13);
          v15 = v14 + 1;
          if ( v13 == v15 )
          {
            if ( !*(_WORD *)(Ptr + 32) )
              sub_1800217D0(a3, Ptr, 1LL);
            goto LABEL_9;
          }
          if ( v13 < v15 )
            v9 = 1;
        }
        Ptr = *(_QWORD *)Ptr;
        if ( (_RTL_SRWLOCK *)Ptr != &a3[3] )
          continue;
        break;
      }
    }
    Ptr = 0LL;
LABEL_9:
    if ( v11 == 2 )
      RtlReleaseSRWLockExclusive(v5);
    else
      RtlReleaseSRWLockShared(v5);
    if ( Ptr )
      break;
    v11 = 2;
    RtlAcquireSRWLockExclusive(v5);
  }
  v16 = sub_18001FFBC(a1, a3, Ptr, a4);
  if ( !v16 )
    sub_18001E250(a1, Ptr, 0LL, a5);
LABEL_14:
  if ( v9 )
    sub_180080558(a1, a2);
  if ( v10 )
    sub_18001F6A8((__int64)a1, a2, (__int64)v10, a5);
  return v16;
}
