/*
 * XREFs of KiAdjustTimerDueTimes @ 0x140168180
 * Callers:
 *     KiSetSystemTimeDpc @ 0x140167EE0 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1402409E8 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x1400C825C (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x1400F87E0 (KiInsertTimerTable.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KiAdjustTimer2DueTimes @ 0x1401683AC (KiAdjustTimer2DueTimes.c)
 *     KiTraceSetTimer @ 0x14024ADF0 (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD **v7; // r15
  volatile signed __int32 *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r13
  char v11; // dl
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *result; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // r9d
  unsigned __int64 v22; // rdi
  bool inserted; // al
  int v24; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v26; // [rsp+40h] [rbp-20h]
  int v27; // [rsp+48h] [rbp-18h]
  __int64 v28; // [rsp+A8h] [rbp+48h]
  char v29; // [rsp+B8h] [rbp+58h] BYREF

  v28 = a2;
  v26 = &v25;
  v25 = &v25;
  v5 = 0;
  while ( 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    v7 = (_QWORD **)(a2 + 32LL * v5 + 520);
    v8 = (volatile signed __int32 *)(a2 + 32 * (v5 + 16LL));
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64(v8, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)v8 );
    }
    v9 = *v7;
    while ( v9 != v7 )
    {
      v10 = (__int64)(v9 - 4);
      v11 = *((_BYTE *)v9 - 31);
      v9 = (_QWORD *)*v9;
      if ( (v11 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v11 & 2) == 0) )
      {
        KiRemoveEntryTimer(v28, v10, v5);
        v12 = v26;
        v13 = (_QWORD *)(v10 + 32);
        if ( *v26 != &v25 )
          __fastfail(3u);
        *(_QWORD *)(v10 + 40) = v26;
        *v13 = &v25;
        *v12 = v13;
        v26 = (_QWORD **)(v10 + 32);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    if ( ++v5 >= 0x100 )
      break;
    a2 = v28;
  }
  for ( result = v25; v25 != &v25; result = v25 )
  {
    v15 = (__int64)(result - 4);
    v16 = *result;
    v17 = (_QWORD *)result[1];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v17 != result )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = *(_QWORD *)(a3 + 24);
    v19 = *(_QWORD *)(v15 + 24);
    v20 = v19 - v18;
    if ( v18 >= 0 )
    {
      if ( v20 > v19 )
        v20 = 0LL;
    }
    else if ( v20 < v19 )
    {
      v20 = -1LL;
    }
    v21 = (unsigned __int8)(v20 >> 18);
    v22 = KiWaitAlways ^ _byteswap_uint64(v15 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v15 + 48), KiWaitNever));
    *(_DWORD *)v15 |= 0x80u;
    *(_QWORD *)(v15 + 24) = v20;
    v27 = *(_DWORD *)v15;
    BYTE2(v27) = v20 >> 18;
    *(_DWORD *)v15 = v27;
    if ( *(_BYTE *)(a3 + 32) )
      inserted = KiInsertTimerTable(a1, v15, v22, v21, &v29);
    else
      inserted = KiInsertTimerTable(a1, v15, v22, v21, 0LL);
    if ( inserted )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        KiTraceSetTimer(v15, v22, 0LL);
      else
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
    }
    else
    {
      KiTimerWaitTest(a1, v15, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
