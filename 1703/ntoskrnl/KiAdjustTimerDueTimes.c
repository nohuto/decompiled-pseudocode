/*
 * XREFs of KiAdjustTimerDueTimes @ 0x140143C38
 * Callers:
 *     KiSetSystemTimeDpc @ 0x140143A60 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401FD43C (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x140036264 (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400EC830 (KiInsertTimerTable.c)
 *     KiAdjustTimer2DueTimes @ 0x140143E38 (KiAdjustTimer2DueTimes.c)
 *     KiTraceSetTimer @ 0x1402064DC (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned int i; // esi
  _QWORD **v7; // r14
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // r13
  char v11; // dl
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  char *v21; // [rsp+20h] [rbp-40h]
  int v22; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+48h] [rbp-18h]
  char v27; // [rsp+B8h] [rbp+58h] BYREF

  v24 = &v23;
  v3 = (volatile signed __int32 *)(a2 + 512);
  v23 = &v23;
  for ( i = 0; i < 0x100; ++i )
  {
    v7 = (_QWORD **)(v3 + 2);
    v22 = 0;
    while ( _interlockedbittestandset64(v3, 0LL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)v3 );
    }
    v8 = *v7;
    while ( v8 != v7 )
    {
      v10 = (__int64)(v8 - 4);
      v11 = *((_BYTE *)v8 - 31);
      v8 = (_QWORD *)*v8;
      if ( (v11 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v11 & 2) == 0) )
      {
        KiRemoveEntryTimer(a2, v10, i);
        v12 = v24;
        v13 = (_QWORD *)(v10 + 32);
        if ( *v24 != &v23 )
          __fastfail(3u);
        *(_QWORD *)(v10 + 40) = v24;
        *v13 = &v23;
        *v12 = v13;
        v24 = (_QWORD **)(v10 + 32);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    v3 += 8;
  }
  for ( result = v23; v23 != &v23; result = v23 )
  {
    v14 = (__int64)(result - 4);
    v15 = *result;
    v16 = (_QWORD *)result[1];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v16 != result )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v17 = *(_QWORD *)(a3 + 24);
    v18 = *(_QWORD *)(v14 + 24);
    v19 = v18 - v17;
    if ( v17 >= 0 )
    {
      if ( v19 > v18 )
        v19 = 0LL;
    }
    else if ( v19 < v18 )
    {
      v19 = -1LL;
    }
    v20 = KiWaitAlways ^ _byteswap_uint64(v14 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v14 + 48), KiWaitNever));
    *(_DWORD *)v14 |= 0x80u;
    *(_QWORD *)(v14 + 24) = v19;
    v25 = *(_DWORD *)v14;
    BYTE2(v25) = v19 >> 18;
    *(_DWORD *)v14 = v25;
    if ( *(_BYTE *)(a3 + 32) )
      v21 = &v27;
    else
      v21 = 0LL;
    if ( KiInsertTimerTable(a1, v14, v20, (unsigned __int8)(v19 >> 18), v21) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        KiTraceSetTimer(v14, v20, 0LL);
      else
        _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
    }
    else
    {
      KiTimerWaitTest(a1, v14, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
