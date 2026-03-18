/*
 * XREFs of PspApplyTimerDelayProcess @ 0x1402394C4
 * Callers:
 *     PspTimerDelayProcess @ 0x140239B70 (PspTimerDelayProcess.c)
 *     PspTimerDelayWorkerRoutine @ 0x140239BE0 (PspTimerDelayWorkerRoutine.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x140239944 (PspSetProcessTimerDelayForKTimers.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140239AB0 (PspSetProcessTimerDelayForWin32.c)
 */

__int64 __fastcall PspApplyTimerDelayProcess(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // esi
  __int64 v6; // r8
  unsigned __int64 v8; // rbx
  unsigned int v9; // kr00_4
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rtt
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = a2;
  --CurrentThread->SpecialApcDisable;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 4u);
  v8 = 0LL;
  if ( a2 )
  {
    LOBYTE(a4) = 0;
    v9 = *(_DWORD *)(a2 + 4);
    LODWORD(a2) = (3518437209u * (unsigned __int64)*(unsigned int *)a2) >> 32;
    v8 = (*(_DWORD *)v6 / 0x2710u) & 0x3FFFFFFF | ((unsigned __int64)((v9 / 0x2710) & 0x3FFFFFFF) << 30);
  }
  else
  {
    LOBYTE(a4) = 1;
  }
  v10 = *(_QWORD *)(a1 + 1968);
  if ( (_BYTE)a4 )
  {
    if ( ((v10 | (v10 >> 30)) & 0x3FFFFFFF) == 0 )
      goto LABEL_22;
    v8 = v10 & 0xFFFFFFFFFFFFFFFLL;
  }
  else if ( (((unsigned int)v8 ^ (unsigned int)v10) & 0x3FFFFFFF) == 0 )
  {
    v6 = 0xFFFFFFFC0000000LL;
    a2 = v8 & 0xFFFFFFFFC0000000uLL;
    if ( (v10 & 0xFFFFFFFC0000000LL) == (v8 & 0xFFFFFFFFC0000000uLL) )
      goto LABEL_22;
  }
  v11 = ((unsigned __int64)(unsigned __int8)a4 << 61) | 0x8000000000000000uLL | v8;
  v13 = v10 & 0x7FFFFFFFFFFFFFFFLL;
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1968), v11, v10 & 0x7FFFFFFFFFFFFFFFLL);
  if ( v13 != v12 )
  {
    do
    {
      v14 = v12;
      if ( v12 >= 0x8000000000000000uLL )
      {
        if ( (_BYTE)a4 )
        {
          v6 = v12 & 0xFFFFFFFFFFFFFFFLL;
          a2 = v11 & 0xF000000000000000uLL;
          v11 = v11 & 0xF000000000000000uLL | v12 & 0xFFFFFFFFFFFFFFFLL;
        }
        else
        {
          a2 = 0x2000000000000000LL;
          if ( (v12 & 0x2000000000000000LL) == 0 )
            goto LABEL_22;
        }
        v11 |= 0x4000000000000000uLL;
      }
      else
      {
        a2 = 0xBFFFFFFFFFFFFFFFuLL;
        v11 &= ~0x4000000000000000uLL;
        if ( (_BYTE)a4 )
        {
          a2 = (v11 ^ v12) & 0xFFFFFFFFFFFFFFFLL;
          v11 ^= a2;
        }
      }
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1968), v11, v12);
    }
    while ( v12 != v14 );
  }
  if ( (v11 & 0x4000000000000000LL) == 0 )
  {
    do
    {
      v15 = v11;
      PspSetProcessTimerDelayForKTimers(a1, a2, v6, a4);
      v5 = PspSetProcessTimerDelayForWin32(a1);
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1968), v11 & 0x1FFFFFFFFFFFFFFFLL, v11);
    }
    while ( v15 != v11 );
  }
LABEL_22:
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v5;
}
