/*
 * XREFs of KiAdjustTimerDueTimes @ 0x140149D6C
 * Callers:
 *     KiSetSystemTimeDpc @ 0x140149AE0 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1402033D8 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x14006FA60 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     KiRemoveEntryTimer @ 0x140129C3C (KiRemoveEntryTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14014A20C (KiAdjustTimer2DueTimes.c)
 *     KiTraceSetTimer @ 0x14020CA7C (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned int v6; // esi
  _QWORD **v7; // r14
  volatile signed __int32 *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r13
  char v11; // dl
  _QWORD *result; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  char *v22; // [rsp+20h] [rbp-40h]
  int v23; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v25; // [rsp+40h] [rbp-20h]
  int v26; // [rsp+48h] [rbp-18h]
  char v28; // [rsp+B8h] [rbp+58h] BYREF

  v25 = &v24;
  v4 = a2;
  v24 = &v24;
  v6 = 0;
  while ( 1 )
  {
    v7 = (_QWORD **)(32LL * v6 + v4 + 520);
    v8 = (volatile signed __int32 *)(v4 + 32 * (v6 + 16LL));
    v23 = 0;
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&v23);
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
        KiRemoveEntryTimer(a2, v10, v6);
        v13 = v25;
        v14 = (_QWORD *)(v10 + 32);
        if ( *v25 != &v24 )
          __fastfail(3u);
        *(_QWORD *)(v10 + 40) = v25;
        *v14 = &v24;
        *v13 = v14;
        v25 = (_QWORD **)(v10 + 32);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    if ( ++v6 >= 0x100 )
      break;
    v4 = a2;
  }
  for ( result = v24; v24 != &v24; result = v24 )
  {
    v15 = (__int64)(result - 4);
    v16 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v17 = (_QWORD *)result[1], (_QWORD *)*v17 != result) )
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
    v21 = KiWaitAlways ^ _byteswap_uint64(v15 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v15 + 48), KiWaitNever));
    *(_DWORD *)v15 |= 0x80u;
    *(_QWORD *)(v15 + 24) = v20;
    v26 = *(_DWORD *)v15;
    BYTE2(v26) = v20 >> 18;
    *(_DWORD *)v15 = v26;
    if ( *(_BYTE *)(a3 + 32) )
      v22 = &v28;
    else
      v22 = 0LL;
    if ( KiInsertTimerTable(a1, v15, v21, (unsigned __int8)(v20 >> 18), v22) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        KiTraceSetTimer(v15, v21, 0LL);
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
