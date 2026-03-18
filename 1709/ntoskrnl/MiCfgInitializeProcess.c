/*
 * XREFs of MiCfgInitializeProcess @ 0x14045F104
 * Callers:
 *     MiMapProcessExecutable @ 0x14045EF60 (MiMapProcessExecutable.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiMapCfgBitMapSection @ 0x14045DB10 (MiMapCfgBitMapSection.c)
 *     MiReferenceCfgVad @ 0x14045DBA8 (MiReferenceCfgVad.c)
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rax
  int v6; // r14d
  _QWORD *v7; // rax
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int16 v13; // cx
  __int64 v14; // rcx
  __int16 v15; // ax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+48h]
  __int64 v19; // [rsp+80h] [rbp+50h] BYREF

  if ( (*(_DWORD *)(a1 + 2088) & 1) == 0 )
    return 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v2 = qword_140388310;
  v18 = 0x20000000000LL;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    v12 = *(_QWORD *)(a1 + 1064);
    if ( !v12 )
      return 3221225595LL;
    v13 = *(_WORD *)(v12 + 8);
    if ( v13 != 332 && v13 != 452 )
      return 3221225595LL;
    v14 = qword_1403884C0;
    if ( (unsigned __int64)qword_1403884C0 <= 0x400000000000LL )
      v14 = 0x7FF600000000LL - ((unsigned __int16)(ExGenRandom(1) & 0x3FFF) << 16);
    v17 = v14 - 0x20000000000LL;
  }
  result = MiMapCfgBitMapSection(a1, v2, (__int64)&v19, (int)&v17);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad((__int64)CurrentThread, v17, 0);
    v5 = *(_QWORD *)(a1 + 1064);
    if ( v5 )
    {
      v15 = *(_WORD *)(v5 + 8);
      if ( v15 == 332 || v15 == 452 )
      {
        v16 = *(_QWORD *)(a1 + 1152);
        v19 = 0LL;
        v17 = 0LL;
        v18 = (2 * (v16 >> 4)) >> 3;
        result = MiMapCfgBitMapSection(a1, qword_140388300, (__int64)&v19, (int)&v17);
        if ( (int)result < 0 )
          return result;
        MiReferenceCfgVad((__int64)CurrentThread, v17, 1);
      }
    }
    v6 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v7 = *(_QWORD **)(a1 + 1576);
    v8 = 0LL;
    while ( v7 )
    {
      v8 = (unsigned __int64)v7;
      v7 = (_QWORD *)*v7;
    }
    while ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 48) & 7) == 2 )
      {
        MiReferenceVad(v8);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, v8);
        v6 = MiCommitVadCfgBits(v8, 0LL, 0LL);
        MiUnlockAndDereferenceVad((char *)v8);
        if ( v6 < 0 )
          return (unsigned int)v6;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      }
      v10 = *(_QWORD **)(v8 + 8);
      v11 = v8;
      if ( v10 )
      {
        v9 = (_QWORD *)*v10;
        v8 = *(_QWORD *)(v8 + 8);
        while ( v9 )
        {
          v8 = (unsigned __int64)v9;
          v9 = (_QWORD *)*v9;
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v8 || *(_QWORD *)v8 == v11 )
            break;
          v11 = v8;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    return (unsigned int)v6;
  }
  return result;
}
