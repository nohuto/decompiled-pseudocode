/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800615DC
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegContextCleanup @ 0x18006172C (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x180061780 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x180061818 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180061864 (RtlpHpVsSubsegmentCleanup.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800FFA0C (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180107570 (RtlpHpLargeAllocationDestroy.c)
 */

unsigned int *__fastcall RtlpHpHeapDestroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  unsigned __int64 v6; // rcx
  int v7; // esi
  char v8; // al
  unsigned __int64 v9; // rdi
  __int64 v10; // r11
  __int64 v11; // rcx
  unsigned int *result; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v22[6]; // [rsp+38h] [rbp-38h] BYREF
  __int16 v23; // [rsp+3Eh] [rbp-32h]
  __int64 v24; // [rsp+58h] [rbp-18h]

  v20 = a1;
  v5 = *(_BYTE *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 80);
  v7 = v5 & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v6 )
        {
          v15 = (_QWORD *)v6;
          if ( v7 )
            v6 ^= *(_QWORD *)v6;
          else
            v6 = *(_QWORD *)v6;
          *v15 = 0LL;
        }
        v16 = *(_QWORD *)(v6 + 8);
        if ( !v16 )
          break;
        v17 = v6;
        if ( v7 )
          v6 ^= v16;
        else
          v6 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v17 + 8) = 0LL;
      }
      v18 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v7 && v18 )
        v18 ^= v6;
      RtlpHpLargeAllocationDestroy(v6, a1);
      if ( !v18 )
        break;
      v6 = v18;
    }
  }
  v8 = *(_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(a1 + 88) |= 1u;
  v9 = v20 + 384;
  while ( *(_QWORD *)v9 )
  {
    RtlpHpVsSubsegmentCleanup(v20 + 360, v9 ^ *(_QWORD *)v9, a3, a4);
    RtlpHpVsSubsegmentFree(v20 + 360, v10, 1LL);
  }
  RtlpHpLfhContextCleanup(v20 + 480);
  RtlpHpSegContextCleanup(v20 + 112);
  RtlpHpSegContextCleanup(v20 + 216);
  v21 = 0LL;
  ZwFreeVirtualMemory(-1LL, &v20, &v21, 0x8000LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x8000LL, v21, v20);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v11 = 2147353480LL;
  if ( *(_BYTE *)v11 )
    RtlpHeapLogRangeDestroy(v20);
  result = RtlGetCurrentServiceSessionId();
  v13 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v14 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v14 = 2147353472LL;
  }
  if ( *(_BYTE *)v14 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 550;
      v19 = *(unsigned __int8 *)v13;
      v24 = v20;
      v23 = 4131;
      return (unsigned int *)NtTraceEvent(v19, 1026LL, 8LL, v22);
    }
  }
  return result;
}
