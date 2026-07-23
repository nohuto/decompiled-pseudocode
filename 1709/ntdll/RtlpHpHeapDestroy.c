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

int __fastcall RtlpHpHeapDestroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  unsigned __int64 v6; // rcx
  int v7; // esi
  char v8; // al
  unsigned __int64 v9; // rdi
  __int64 v10; // r11
  __int64 v11; // rcx
  struct _PEB *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  void *v19; // rcx
  PVOID BaseAddress; // [rsp+20h] [rbp-50h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE Fields[6]; // [rsp+38h] [rbp-38h] BYREF
  __int16 v24; // [rsp+3Eh] [rbp-32h]
  PVOID v25; // [rsp+58h] [rbp-18h]

  BaseAddress = (PVOID)a1;
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
  v9 = (unsigned __int64)BaseAddress + 384;
  while ( *(_QWORD *)v9 )
  {
    RtlpHpVsSubsegmentCleanup((char *)BaseAddress + 360, v9 ^ *(_QWORD *)v9, a3, a4);
    RtlpHpVsSubsegmentFree((char *)BaseAddress + 360, v10, 1LL);
  }
  RtlpHpLfhContextCleanup((char *)BaseAddress + 480);
  RtlpHpSegContextCleanup((char *)BaseAddress + 112);
  RtlpHpSegContextCleanup((char *)BaseAddress + 216);
  RegionSize[0] = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x8000LL, RegionSize[0], BaseAddress);
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v11 = 2147353480LL;
  if ( *(_BYTE *)v11 )
    RtlpHeapLogRangeDestroy(BaseAddress);
  LODWORD(v12) = RtlGetCurrentServiceSessionId();
  v13 = 2147353472LL;
  if ( (_DWORD)v12 )
  {
    v12 = NtCurrentPeb();
    v14 = (__int64)v12->SharedData + 550;
  }
  else
  {
    v14 = 2147353472LL;
  }
  if ( *(_BYTE *)v14 )
  {
    v12 = NtCurrentPeb();
    if ( (v12->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 550;
      v19 = (void *)*(unsigned __int8 *)v13;
      v25 = BaseAddress;
      v24 = 4131;
      LODWORD(v12) = NtTraceEvent(v19, 0x402u, 8u, Fields);
    }
  }
  return (int)v12;
}
