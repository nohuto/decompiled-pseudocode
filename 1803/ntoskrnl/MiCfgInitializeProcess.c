/*
 * XREFs of MiCfgInitializeProcess @ 0x1404E95B8
 * Callers:
 *     MiMapProcessExecutable @ 0x1404E94B0 (MiMapProcessExecutable.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 *     MiMapCfgBitMapSection @ 0x140575A40 (MiMapCfgBitMapSection.c)
 *     MiReferenceCfgVad @ 0x1405764D4 (MiReferenceCfgVad.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rax
  int v5; // r14d
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int16 v15; // cx
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 2088) & 1) == 0 )
    return 0LL;
  v20 = 0LL;
  v18 = 0LL;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    v14 = *(_QWORD *)(a1 + 1064);
    if ( !v14 )
      return 3221225595LL;
    v15 = *(_WORD *)(v14 + 8);
    if ( v15 != 332 && v15 != 452 )
      return 3221225595LL;
  }
  v19 = 0x20000000000LL;
  result = MiMapCfgBitMapSection(a1, qword_1403CB4B0, (unsigned int)&v20, (unsigned int)&v18, (__int64)&v19);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad(CurrentThread, v18, 0LL);
    v4 = *(_QWORD *)(a1 + 1064);
    if ( v4 )
    {
      v16 = *(_WORD *)(v4 + 8);
      if ( v16 == 332 || v16 == 452 )
      {
        v17 = *(_QWORD *)(a1 + 1152);
        v20 = 0LL;
        v18 = 0LL;
        v19 = (2 * (v17 >> 4)) >> 3;
        result = MiMapCfgBitMapSection(a1, qword_1403CB4A0, (unsigned int)&v20, (unsigned int)&v18, (__int64)&v19);
        if ( (int)result < 0 )
          return result;
        MiReferenceCfgVad(CurrentThread, v18, 1LL);
      }
    }
    v5 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v6 = *(_QWORD **)(a1 + 1576);
    v7 = 0LL;
    while ( v6 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v7 )
    {
      if ( (v7[6] & 7) == 2 )
      {
        MiReferenceVad((__int64)v7);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)v7);
        v5 = MiCommitVadCfgBits((__int64)v7, 0LL, 0LL);
        MiUnlockAndDereferenceVad(v7, v11, v12, v13);
        if ( v5 < 0 )
          return (unsigned int)v5;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      }
      v9 = (_QWORD *)v7[1];
      v10 = v7;
      if ( v9 )
      {
        v7 = (_QWORD *)v7[1];
        for ( i = (_QWORD *)*v9; i; i = (_QWORD *)*i )
          v7 = i;
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v10 )
            break;
          v10 = v7;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    return (unsigned int)v5;
  }
  return result;
}
