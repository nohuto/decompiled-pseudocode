/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x180048C9C
 * Callers:
 *     TppSimplepExecuteCallback @ 0x18000B180 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18000CB00 (TppExecuteWaitCallback.c)
 *     TppWorkpExecuteCallback @ 0x18000EE70 (TppWorkpExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18000F4D0 (TppTimerpExecuteCallback.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001B60 (RtlpTpETWCallbackEnqueue.c)
 *     TppCleanupGroupMemberRelease @ 0x1800107A8 (TppCleanupGroupMemberRelease.c)
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     TpCallbackMayRunLong @ 0x1800133F0 (TpCallbackMayRunLong.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     TpPostTask @ 0x180046308 (TpPostTask.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x180071EE0 (TppWorkCancelPendingCallbacks.c)
 *     LdrLockLoaderLock @ 0x18007E040 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007FAF0 (LdrUnlockLoaderLock.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  int v4; // r12d
  unsigned __int32 v8; // ecx
  signed __int32 v9; // eax
  int v10; // r14d
  int v11; // esi
  unsigned __int32 v12; // ecx
  void *v13; // rcx
  _QWORD *v14; // rbx
  struct _TEB *v16; // rax
  __int64 v17; // rdi
  void *SubProcessTag; // r8
  _DWORD *v19; // rdx
  __int64 v20; // rdx
  _DWORD *SharedData; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v25[6]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v26; // [rsp+3Eh] [rbp-6Ah]
  int v27; // [rsp+58h] [rbp-50h]
  int v28; // [rsp+5Ch] [rbp-4Ch]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]

  v3 = *(_QWORD *)(a2 + 136);
  v4 = 0;
  v24 = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0LL, 0LL, &v24);
  _m_prefetchw((const void *)(a2 + 232));
  v8 = *(_DWORD *)(a2 + 232);
  do
  {
    v9 = v8;
    if ( v8 >> 1 )
    {
      v10 = 1;
      v11 = 1;
      v12 = v8 & 1 | (2 * (v8 >> 1) - 2);
      if ( v12 < 2 )
      {
        v11 = 0;
        v12 |= 1u;
      }
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v12 = v8 | 1;
    }
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v12, v9);
  }
  while ( v9 != v8 );
  if ( v3 )
  {
    if ( v10 )
    {
      if ( (int)LdrAddRefDll(0, v3) < 0 )
      {
        v10 = 0;
        v11 = 0;
        v4 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v3;
      }
    }
    LdrUnlockLoaderLock(0LL, v24);
    if ( v4 )
    {
      TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
      TppWorkCancelPendingCallbacks(a2);
    }
  }
  if ( v11 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v22 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v22 = 2147353478LL;
    if ( *(_BYTE *)v22 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a2 + 144),
        a2 + 200,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TpPostTask(a2 + 200, *(_QWORD *)(a2 + 144), *(unsigned int *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    LOBYTE(v23) = TppCleanupGroupMemberRelease(a2, 0LL);
    if ( v23 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v10 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)a1 = 72LL;
      *(_DWORD *)(a1 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
      *(_BYTE *)(a1 + 76) |= 1u;
    }
    *(_DWORD *)(a1 + 144) |= 0x240u;
    *(_QWORD *)(a1 + 184) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(a1);
    v13 = *(void **)(a2 + 104);
    if ( v13 )
    {
      *(_QWORD *)(a1 + 80) = v13;
      v16 = NtCurrentTeb();
      v17 = 2147353488LL;
      SubProcessTag = v16->SubProcessTag;
      v16->SubProcessTag = v13;
      v19 = NtCurrentPeb()->SharedData;
      if ( v19 && *v19 )
        v20 = (__int64)NtCurrentPeb()->SharedData + 566;
      else
        v20 = 2147353488LL;
      if ( *(_BYTE *)v20 && v13 != SubProcessTag )
      {
        v27 = (int)SubProcessTag;
        v26 = 1349;
        v28 = (int)v13;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v17 = (__int64)NtCurrentPeb()->SharedData + 566;
        NtTraceEvent(*(unsigned __int8 *)v17, 1026LL, 8LL, v25);
      }
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
    v14 = (_QWORD *)(a2 + 128);
    if ( v14
      && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v14
      && (int)NtSetInformationThread(-2LL, 44LL, v14) >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v14;
    }
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    return 0LL;
  }
}
