/*
 * XREFs of MiCfgInitializeProcess @ 0x14049A54C
 * Callers:
 *     MiMapProcessExecutable @ 0x14049A420 (MiMapProcessExecutable.c)
 * Callees:
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiMapCfgBitMapSection @ 0x14044C9B0 (MiMapCfgBitMapSection.c)
 *     MiReferenceCfgVad @ 0x14044CB68 (MiReferenceCfgVad.c)
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rax
  int v5; // r14d
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int16 v12; // cx
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+38h]
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 0x10) == 0 )
    return 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0x20000000000LL;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    v11 = *(_QWORD *)(a1 + 1064);
    if ( !v11 )
      return 3221225595LL;
    v12 = *(_WORD *)(v11 + 8);
    if ( v12 != 332 && v12 != 452 )
      return 3221225595LL;
    v15 = qword_14036C180 - 0x20000000000LL;
  }
  result = MiMapCfgBitMapSection(a1, qword_14036BFF0, (__int64)&v17, (int)&v15);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad((__int64)CurrentThread, v15, 0);
    v4 = *(_QWORD *)(a1 + 1064);
    if ( v4 )
    {
      v13 = *(_WORD *)(v4 + 8);
      if ( v13 == 332 || v13 == 452 )
      {
        v14 = *(_QWORD *)(a1 + 1152);
        v17 = 0LL;
        v15 = 0LL;
        v16 = (2 * (v14 >> 4)) >> 3;
        result = MiMapCfgBitMapSection(a1, qword_14036BFE0, (__int64)&v17, (int)&v15);
        if ( (int)result < 0 )
          return result;
        MiReferenceCfgVad((__int64)CurrentThread, v15, 1);
      }
    }
    v5 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v6 = *(_QWORD **)(a1 + 1576);
    v7 = 0LL;
    while ( v6 )
    {
      v7 = (unsigned __int64)v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 48) & 7) == 2 )
      {
        MiReferenceVad(v7);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, v7);
        v5 = MiCommitVadCfgBits(v7, 0LL, 0LL);
        MiUnlockAndDereferenceVad((char *)v7);
        if ( v5 < 0 )
          return (unsigned int)v5;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      }
      v9 = *(_QWORD **)(v7 + 8);
      v10 = v7;
      if ( v9 )
      {
        v8 = (_QWORD *)*v9;
        v7 = *(_QWORD *)(v7 + 8);
        while ( v8 )
        {
          v7 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)v7 == v10 )
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
