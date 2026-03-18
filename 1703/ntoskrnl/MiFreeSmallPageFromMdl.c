/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x1400B5540
 * Callers:
 *     MiFreeMdlPageRun @ 0x1400B3B5C (MiFreeMdlPageRun.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(unsigned __int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // r9
  int v6; // r13d
  __int64 v7; // r10
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r9
  bool v15; // zf
  _QWORD *v16; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // r8
  _QWORD *v20; // r10
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // [rsp+20h] [rbp-78h]
  unsigned __int64 v27; // [rsp+28h] [rbp-70h]
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  int v32; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v33; // [rsp+B8h] [rbp+20h]

  v3 = 48 * a1;
  v4 = 1LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v32 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * a1 - 0x58000000000LL + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(__int64 *)(v3 - 0x58000000000LL + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 - 0x58000000000LL + 24), 0x3FuLL) );
  }
  v5 = a1;
  v6 = 0;
  v7 = 1LL;
  v8 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v3 - 0x58000000000LL + 40) >> 40) & 0x3FFLL));
  memset(&LockHandle, 0, sizeof(LockHandle));
  LODWORD(v9) = 2;
  while ( 1 )
  {
    v9 = (unsigned int)(v9 - 1);
    v10 = v8 + 16LL * (unsigned int)v9;
    v11 = *(_QWORD *)(v10 + 4808);
    if ( !v11 )
      break;
    v26 = MiLargePageSizes[v9];
    v12 = v5 / v26;
    v33 = v5 / v26;
    v27 = ((v7 + v26 + v5 - 1) & ~(v26 - 1)) / v26;
    v13 = v27 - v5 / v26;
    v14 = v27 - 1;
    if ( v27 - 1 >= v11 )
      goto LABEL_28;
    if ( v13 > 1 )
    {
      v18 = *(_QWORD *)(v10 + 4816);
      v19 = (_QWORD *)(v18 + 8 * (v12 >> 6));
      v20 = (_QWORD *)(v18 + 8 * (v14 >> 6));
      if ( v19 == v20 )
      {
        v21 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v13) << v12;
      }
      else
      {
        if ( ((-1LL << v12) & *v19) != 0 )
          goto LABEL_28;
        if ( ++v19 != v20 )
        {
          while ( !*v19 )
          {
            if ( ++v19 == v20 )
              goto LABEL_26;
          }
          goto LABEL_28;
        }
LABEL_26:
        v21 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v14;
      }
      if ( (*v19 & v21) == 0 )
        break;
    }
    else if ( v13 == 1 && !_bittest64(*(const signed __int64 **)(v10 + 4816), v12) )
    {
      break;
    }
LABEL_28:
    if ( !v6 )
    {
      v6 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_14036C2C0, &LockHandle);
      v12 = v33;
    }
    RtlClearBitsEx(v10 + 4808, v12, v13);
    if ( !(_DWORD)v9 )
      break;
    v22 = MiLargePageSizes[(unsigned int)(v9 - 1)] / v26;
    v23 = ~(v22 - 1);
    v5 = v26 * (v23 & v33);
    v7 = v26 * ((v23 & (v22 + v27 - 1)) - (v23 & v33));
  }
  if ( v6 == 1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( a2 < 0 )
    *(_QWORD *)(v3 - 0x58000000000LL + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(v3 - 0x58000000000LL + 24) &= 0xC000000000000000uLL;
  v15 = *(_WORD *)(v3 - 0x58000000000LL + 32) == 2;
  *(_WORD *)(v3 - 0x58000000000LL + 32) -= 2;
  if ( !v15 )
  {
    *(_BYTE *)(v3 - 0x58000000000LL + 34) |= 7u;
    v4 = 0LL;
    goto LABEL_16;
  }
  if ( (a2 & 1) != 0 )
  {
    *(_BYTE *)(v3 - 0x58000000000LL + 34) &= ~0x10u;
    MiInsertPageInFreeOrZeroedList(a1, 1LL);
  }
  else
  {
    v16 = (_QWORD *)qword_14036C298;
    if ( qword_14036C298 )
    {
      if ( ((*(_QWORD *)(v3 - 0x58000000000LL + 40) >> 54) & 7) == 1 )
      {
        v24 = v3 / 48;
        if ( qword_14036C298 )
        {
          do
          {
            v25 = v16[3];
            if ( v24 < v25 )
            {
              v16 = (_QWORD *)*v16;
            }
            else
            {
              if ( v24 - v25 < v16[4] )
              {
                MiInsertPageInFreeOrZeroedList(a1, 256LL);
                goto LABEL_16;
              }
              v16 = (_QWORD *)v16[1];
            }
          }
          while ( v16 );
        }
      }
    }
    MiInsertPageInFreeOrZeroedList(a1, 2LL);
  }
LABEL_16:
  _InterlockedAnd64((volatile signed __int64 *)(v3 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v4;
}
