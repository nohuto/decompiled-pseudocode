/*
 * XREFs of MiReacquireWalkLocks @ 0x14025382C
 * Callers:
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 valid; // rax
  __int64 v8; // r8
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 )
    MiLockWorkingSetShared(v3);
  valid = MiLockLowestValidPageTable(v3, a2 << 25 >> 16, &v10);
  if ( valid == a2 )
  {
    *(_QWORD *)(a1 + 48) = a2;
    result = 1LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    MiUnlockPageTableInternal(v3, valid);
    if ( !a3 )
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 4), v8);
    return 0LL;
  }
  return result;
}
