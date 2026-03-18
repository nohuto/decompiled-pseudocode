/*
 * XREFs of KiAcquireThreadStateLock @ 0x140043AC0
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140007340 (KeQueryTotalCycleTimeThread.c)
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006515C (KiApplyForegroundBoostThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140111648 (KeSetIdealProcessorThreadEx.c)
 *     KiSetThreadSchedulingGroup @ 0x140120BE4 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140120D30 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadTag @ 0x1401307B0 (KeUpdateThreadTag.c)
 *     KeTryToFreezeThreadStack @ 0x140153618 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSets @ 0x140202FAC (KiUpdateThreadCpuSets.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140204470 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  int v6; // ebx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  char v11; // al
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v16[17]; // [rsp+24h] [rbp-44h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *(unsigned __int8 *)(a1 + 388);
          v7 = 0LL;
          v8 = 0LL;
          if ( v6 != 2 )
            break;
LABEL_2:
          v9 = *(unsigned int *)(a1 + 536);
          if ( (int)v9 >= 0 )
          {
            v7 = KiProcessorBlock[v9];
            v16[0] = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
            {
              do
                KeYieldProcessorEx(v16);
              while ( *(_QWORD *)(v7 + 48) );
            }
            if ( a1 == *(_QWORD *)(v7 + 8) )
              goto LABEL_6;
            goto LABEL_40;
          }
        }
        if ( *(_BYTE *)(a1 + 388) == 1 )
          break;
        if ( *(_BYTE *)(a1 + 388) != 3 )
        {
          if ( *(_BYTE *)(a1 + 388) != 5 )
            goto LABEL_6;
          v11 = *(_BYTE *)(a1 + 112) & 7;
          if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
            goto LABEL_6;
          LOBYTE(v6) = 2;
          goto LABEL_2;
        }
        v12 = *(unsigned int *)(a1 + 536);
        if ( (int)v12 >= 0 )
        {
          v7 = KiProcessorBlock[v12];
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v17);
            while ( *(_QWORD *)(v7 + 48) );
          }
          if ( a1 == *(_QWORD *)(v7 + 16) )
            goto LABEL_6;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v12 )
            __fastfail(0x1Eu);
          goto LABEL_40;
        }
      }
      v13 = *(unsigned int *)(a1 + 536);
      if ( (int)v13 < 0 )
        break;
      v7 = KiProcessorBlock[v13];
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(_QWORD *)(v7 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
        goto LABEL_6;
LABEL_40:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    }
    v14 = (unsigned int)v13;
    v18 = 0;
    LODWORD(v14) = v13 & 0x7FFFFFFF;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v14] + 25160);
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v8 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
LABEL_6:
  result = (unsigned __int8)v6;
  *a2 = v7;
  *a3 = v8;
  return result;
}
