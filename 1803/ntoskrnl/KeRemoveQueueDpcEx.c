/*
 * XREFs of KeRemoveQueueDpcEx @ 0x140006070
 * Callers:
 *     EtwpCancelPendingStackwalkApcs @ 0x140005FA8 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFreeCompression @ 0x140005FF4 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140006050 (KeRemoveQueueDpc.c)
 *     ExpCancelTimer @ 0x14005AA70 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KiCheckAndRearmForceIdle @ 0x1400D14A4 (KiCheckAndRearmForceIdle.c)
 *     KeMaskInterrupt @ 0x1401688E4 (KeMaskInterrupt.c)
 *     KeClearForceIdle @ 0x14024A3AC (KeClearForceIdle.c)
 *     VfWdCheckForSettingsChange @ 0x14082B738 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x140005828 (KiGetDeepIdleProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall KeRemoveQueueDpcEx(int *a1, char a2)
{
  char v3; // r12
  __int64 v5; // r13
  bool v6; // bp
  int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 *v12; // rdx
  _QWORD *v13; // rcx
  __int64 *i; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Group; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int IsEmptyAffinity; // eax
  signed __int32 v25[8]; // [rsp+0h] [rbp-228h] BYREF
  char v26; // [rsp+20h] [rbp-208h]
  int v27; // [rsp+24h] [rbp-204h] BYREF
  _QWORD v28[2]; // [rsp+28h] [rbp-200h] BYREF
  __int16 v29; // [rsp+38h] [rbp-1F0h]
  int v30; // [rsp+40h] [rbp-1E8h]
  __int64 v31; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v32[21]; // [rsp+88h] [rbp-1A0h]
  _BYTE v33[176]; // [rsp+130h] [rbp-F8h] BYREF
  int v34; // [rsp+220h] [rbp-8h]

  v3 = 0;
  v26 = 0;
  _disable();
  v5 = *((_QWORD *)a1 + 7);
  v6 = (v34 & 0x200) != 0;
  if ( v5 )
  {
    v8 = *a1;
    v9 = HIWORD(*a1);
    v30 = *a1;
    if ( (unsigned __int16)v9 >= 0x500u )
      LOWORD(v9) = v9 - 1280;
    if ( (_BYTE)v30 == 26 && (v10 = KiProcessorBlock[(unsigned __int16)v9], *(_BYTE *)(v10 + 11880)) )
      v11 = v10 + 11816;
    else
      v11 = KiProcessorBlock[(unsigned __int16)v9] + 11776;
    KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 16));
    if ( v5 == *((_QWORD *)a1 + 7) && v8 == *a1 )
    {
      v12 = (__int64 *)(a1 + 2);
      v13 = (_QWORD *)v11;
      --*(_DWORD *)(v11 + 24);
      for ( i = *(__int64 **)v11; i != v12; i = (__int64 *)*i )
        v13 = i;
      v15 = *v12;
      *v13 = *v12;
      if ( !v15 )
        *(_QWORD *)(v11 + 8) = v13;
      v3 = 1;
      *((_QWORD *)a1 + 7) = 0LL;
      v26 = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 16));
  }
  if ( v6 )
    _enable();
  if ( a2 && *((_QWORD *)a1 + 2) )
  {
    KiGetDeepIdleProcessors((__int64)v33, (__int64)&v31);
    v16 = 0;
    if ( (_WORD)v31 )
    {
      v17 = *((_QWORD *)a1 + 2);
      do
      {
        v18 = v16++;
        v32[v18] &= v17;
      }
      while ( v16 < (unsigned __int16)v31 );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    Group = CurrentPrcb->Group;
    if ( (unsigned __int16)v31 > (unsigned __int16)Group )
      v32[Group] &= ~CurrentPrcb->GroupSetMember;
    v28[1] = v32[0];
    v28[0] = &v31;
    v29 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v27, v28) )
    {
      v21 = KiProcessorBlock[v27];
      if ( *(_BYTE *)a1 != 26 || (v22 = 11816LL, !*(_BYTE *)(v21 + 11880)) )
        v22 = 11776LL;
      if ( !v5 )
      {
        _InterlockedOr(v25, 0);
        v23 = v21 + v22;
        if ( *(_QWORD *)(v21 + v22 + 16) )
        {
          _disable();
          KxAcquireSpinLock((PKSPIN_LOCK)(v23 + 16));
          KxReleaseSpinLock((PKSPIN_LOCK)(v23 + 16));
          if ( (v34 & 0x200) != 0 )
            _enable();
        }
      }
      if ( *(int **)(v21 + v22 + 32) != a1 && (unsigned __int16)v31 > *(unsigned __int8 *)(v21 + 208) )
        v32[*(unsigned __int8 *)(v21 + 208)] &= ~*(_QWORD *)(v21 + 200);
    }
    IsEmptyAffinity = KeIsEmptyAffinityEx(&v31);
    v3 = v26;
    if ( !IsEmptyAffinity )
      KeGenericProcessorCallback(&v31, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 2);
  }
  return v3;
}
