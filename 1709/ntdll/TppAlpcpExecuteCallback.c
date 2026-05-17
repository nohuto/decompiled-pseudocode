/*
 * XREFs of TppAlpcpExecuteCallback @ 0x18000F0A0
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     TppIteWakeWaiters @ 0x18000A5B0 (TppIteWakeWaiters.c)
 *     RtlSetThreadSubProcessTag @ 0x18000F400 (RtlSetThreadSubProcessTag.c)
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     TpCallbackMayRunLong @ 0x1800133F0 (TpCallbackMayRunLong.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     NtAlpcSetInformation @ 0x1800A11F0 (NtAlpcSetInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall TppAlpcpExecuteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // r15
  signed __int64 v7; // rbx
  signed __int64 v8; // rdi
  signed __int64 v9; // rbx
  __int64 v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rbp
  __int64 v14; // rbx
  _DWORD *SharedData; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r10
  _DWORD *ThreadPoolData; // rcx
  int v21; // eax
  unsigned int v22; // eax
  _QWORD *v23; // r8
  struct _PEB *result; // rax
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  signed __int32 v27; // eax
  int v28; // edx
  signed __int32 v29; // r8d
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  signed __int32 v32; // [rsp+88h] [rbp+10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]

  v33 = a3;
  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    result = (struct _PEB *)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 208));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(a2 + 284);
      v28 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v29 = v28 + MEMORY[0x7FFE03C0];
      if ( v27 >= v28 && v27 <= v29 + MEMORY[0x7FFE03C0] )
        break;
      if ( v27 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v29, v27) )
      {
        v30 = *(_QWORD *)(a2 + 272);
        v32 = v29;
        NtAlpcSetInformation(v30, 8LL, &v32);
      }
    }
  }
  v6 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v7 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a2 + 136);
      v6 = 0;
    }
    v8 = v7;
    v9 = (v7 ^ (v7 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v7;
    if ( v8 < 0 && (v9 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v9 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive(a2 + 136);
    }
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v9, v8);
  }
  while ( v8 != v7 );
  v10 = v33;
  v11 = 0LL;
  if ( v6 )
  {
    v31 = *(_QWORD **)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive(a2 + 136);
    TppIteWakeWaiters(v31);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v12 = *(_QWORD *)(a2 + 176);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 80) = v12;
    RtlSetThreadSubProcessTag(v12);
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  v13 = (_QWORD *)(a2 + 200);
  if ( a2 != -200
    && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v13
    && (int)NtSetInformationThread(-2LL, 44LL, v13) >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v13;
  }
  v14 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v16 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v16 = 2147353478LL;
  if ( *(_BYTE *)v16 )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(a2 + 216),
      a2,
      *(_QWORD *)(a2 + 152),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 176));
  v17 = *(_QWORD *)(a2 + 176);
  v18 = *(_QWORD *)(a2 + 160);
  v19 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v21 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v22 = ((_BYTE)v21 - 1) & 1;
    ThreadPoolData[3] = v22;
    v23 = &ThreadPoolData[8 * v22];
    v11 = v23 + 4;
    v23[4] = v19;
    v23[5] = v18;
    v23[6] = v17;
    v23[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = a2;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, v10);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, v18);
  }
  result = NtCurrentPeb();
  v25 = result->SharedData;
  if ( v25 && *v25 )
  {
    result = NtCurrentPeb();
    v14 = (__int64)result->SharedData + 556;
  }
  if ( *(_BYTE *)v14 )
    result = (struct _PEB *)RtlpTpETWCallbackStop(
                              *(_QWORD *)(a2 + 216),
                              a2,
                              *(_QWORD *)(a2 + 152),
                              *(_QWORD *)(a2 + 160),
                              *(_QWORD *)(a2 + 176));
  if ( v11 )
  {
    v26 = v11[3];
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v26 )
    {
      result = (struct _PEB *)((char *)result - v26);
      v11[3] = result;
    }
  }
  return result;
}
