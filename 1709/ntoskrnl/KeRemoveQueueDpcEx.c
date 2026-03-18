/*
 * XREFs of KeRemoveQueueDpcEx @ 0x140129650
 * Callers:
 *     ExpCancelTimer @ 0x1400E1D98 (ExpCancelTimer.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140129264 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFreeCompression @ 0x1401292C0 (EtwpFreeCompression.c)
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 *     KeRemoveQueueDpc @ 0x140129630 (KeRemoveQueueDpc.c)
 *     KiCheckAndRearmForceIdle @ 0x14013171C (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14020C1F4 (KeClearForceIdle.c)
 *     VfWdCheckForSettingsChange @ 0x1407BE2EC (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1400DE17C (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall KeRemoveQueueDpcEx(int *a1, char a2)
{
  char v3; // r12
  __int64 v5; // r13
  bool v6; // r14
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Group; // rdx
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // r14
  signed __int32 v23[8]; // [rsp+0h] [rbp-228h] BYREF
  int v24; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int16 *v25[2]; // [rsp+28h] [rbp-200h] BYREF
  __int16 v26; // [rsp+38h] [rbp-1F0h]
  unsigned int v27; // [rsp+40h] [rbp-1E8h]
  unsigned __int16 *v28; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v29[21]; // [rsp+88h] [rbp-1A0h]
  unsigned __int16 v30[88]; // [rsp+130h] [rbp-F8h] BYREF
  int v31; // [rsp+220h] [rbp-8h]

  v3 = 0;
  _disable();
  v5 = *((_QWORD *)a1 + 7);
  v6 = (v31 & 0x200) != 0;
  if ( v5 )
  {
    v8 = *a1;
    v27 = v8;
    v9 = HIWORD(v8);
    if ( HIWORD(v8) >= 0x500u )
      LOWORD(v9) = HIWORD(v8) - 1280;
    if ( (_BYTE)v27 == 26 && (v10 = KiProcessorBlock[(unsigned __int16)v9], *(_BYTE *)(v10 + 11880)) )
      v11 = v10 + 11816;
    else
      v11 = KiProcessorBlock[(unsigned __int16)v9] + 11776;
    KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 16));
    if ( v5 == *((_QWORD *)a1 + 7) && v8 == *a1 )
    {
      --*(_DWORD *)(v11 + 24);
      v12 = (__int64 *)(a1 + 2);
      v13 = (__int64 *)v11;
      if ( *(int **)v11 != a1 + 2 )
      {
        do
          v13 = (__int64 *)*v13;
        while ( (__int64 *)*v13 != v12 );
      }
      v14 = *v12;
      *v13 = v14;
      if ( !v14 )
        *(_QWORD *)(v11 + 8) = v13;
      *((_QWORD *)a1 + 7) = 0LL;
      v3 = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 16));
  }
  if ( v6 )
    _enable();
  if ( a2 && *((_QWORD *)a1 + 2) )
  {
    KiGetDeepIdleProcessors(v30, (unsigned __int16 *)&v28);
    v15 = 0;
    if ( (_WORD)v28 )
    {
      v16 = *((_QWORD *)a1 + 2);
      do
      {
        v17 = v15++;
        v29[v17] &= v16;
      }
      while ( v15 < (unsigned __int16)v28 );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    Group = CurrentPrcb->Group;
    if ( (unsigned __int16)v28 > (unsigned __int16)Group )
      v29[Group] &= ~CurrentPrcb->GroupSetMember;
    v25[1] = (unsigned __int16 *)v29[0];
    v25[0] = (unsigned __int16 *)&v28;
    v26 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v24, v25) )
    {
      v20 = KiProcessorBlock[v24];
      if ( *(_BYTE *)a1 != 26 || (v21 = 11816LL, !*(_BYTE *)(v20 + 11880)) )
        v21 = 11776LL;
      if ( !v5 )
      {
        _InterlockedOr(v23, 0);
        v22 = v20 + v21;
        if ( *(_QWORD *)(v20 + v21 + 16) )
        {
          _disable();
          KxAcquireSpinLock((PKSPIN_LOCK)(v22 + 16));
          KxReleaseSpinLock((PKSPIN_LOCK)(v22 + 16));
          if ( (v31 & 0x200) != 0 )
            _enable();
        }
      }
      if ( *(int **)(v20 + v21 + 32) != a1 && (unsigned __int16)v28 > *(unsigned __int8 *)(v20 + 208) )
        v29[*(unsigned __int8 *)(v20 + 208)] &= ~*(_QWORD *)(v20 + 200);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v28) )
      KeGenericProcessorCallback(&v28, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 2);
  }
  return v3;
}
