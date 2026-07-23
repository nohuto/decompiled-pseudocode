/*
 * XREFs of sub_180006420 @ 0x180006420
 * Callers:
 *     sub_18000638C @ 0x18000638C (sub_18000638C.c)
 *     sub_180006420 @ 0x180006420 (sub_180006420.c)
 * Callees:
 *     sub_180006420 @ 0x180006420 (sub_180006420.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

void __fastcall sub_180006420(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _RTL_SRWLOCK *v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h]
  _RTL_SRWLOCK *v11; // [rsp+58h] [rbp+10h]

  v10 = a1;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v5 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v6 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        sub_180006420(a1, *(_QWORD *)(v5 + *(_QWORD *)(a2 + 104)), a3);
        a1 = v10;
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
  v7 = (_QWORD **)(a2 + 24);
  if ( *v7 != v7 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v8 = (_RTL_SRWLOCK *)(a2 + 16);
    v11 = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    v9 = *v7;
    if ( *v7 != v7 )
    {
      do
      {
        sub_1800215C8(v10, (_DWORD)v9, -1, 1, a3);
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != v7 );
      v8 = v11;
    }
    RtlReleaseSRWLockShared(v8);
  }
}
