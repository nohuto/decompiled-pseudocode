/*
 * XREFs of RtlValidateHeap @ 0x180077E50
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800EFD20 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlUnlockHeap @ 0x180021980 (RtlUnlockHeap.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

bool __fastcall RtlValidateHeap(__int64 a1, __int16 a2, unsigned __int64 a3, __int64 a4)
{
  char v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rcx
  bool v14; // di
  int v15; // r15d
  int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // r8
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  __int64 v22; // rdx
  char v24; // [rsp+20h] [rbp-68h]
  int v25; // [rsp+24h] [rbp-64h]
  _BYTE v26[6]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v27; // [rsp+36h] [rbp-52h]
  __int64 v28; // [rsp+50h] [rbp-38h]

  v7 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v14 = 1;
    v15 = a2 & 1;
    if ( !v15 )
      RtlLockHeap(a1);
    v16 = v15 | 2;
    if ( (a2 & 8) == 0 )
      v16 = a2 & 1;
    v17 = v16 | 0x80000000;
    if ( (a2 & 4) == 0 )
      v17 = v16;
    v18 = v17 | 0x100;
    if ( (a2 & 0x100) == 0 )
      v18 = v17;
    v19 = a2 & 0xE00 | v18;
    if ( (a2 & 0xE00) == 0 )
      v19 = v18;
    v20 = v19 | 0x2000000;
    if ( (a2 & 0x10) == 0 )
      v20 = v19;
    v21 = v20 | 0x1000000;
    if ( (a2 & 2) == 0 )
      v21 = v20;
    v25 = v21;
    v22 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v22 && (_DWORD)v22 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v25 = v21 | 1;
    if ( a3 )
    {
      if ( (dword_180158684 & 2) != 0 && !((_WORD)a3 ? 0 : sub_1800588D4((__int64)&qword_180159600, a3 >> 16, 1uLL)) )
        a3 -= 16LL;
      v14 = sub_180023990(a1, a3, v25) != -1;
    }
    if ( !v15 )
      RtlUnlockHeap(a1, v22, v18, a4);
    return v14;
  }
  else
  {
    v24 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v24 = _guard_dispatch_icall_fptr();
    }
    else if ( sub_18001F9B0((_DWORD *)a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v7 = 1;
      }
      if ( a3 )
      {
        v9 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
        v10 = sub_180078084(a1, v9, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v8) = 1;
        v10 = sub_180090710(a1, v8);
      }
      v24 = v10;
    }
    if ( v7 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    v11 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v27 = 4141;
      v28 = a1;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      ZwTraceEvent(*(unsigned __int8 *)v11, 1026LL, 8LL, v26);
    }
    return v24;
  }
}
