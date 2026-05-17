/*
 * XREFs of TppIopExecuteCallback @ 0x18000CC70
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     TppStartThreadData @ 0x18000CE14 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18000CEA0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCompleteThreadData @ 0x18000F478 (TppCompleteThreadData.c)
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrLockLoaderLock @ 0x18007E040 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007FAF0 (LdrUnlockLoaderLock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppIopExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  int v9; // edi
  int v10; // esi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF

  v21 = 0LL;
  v7 = a2 - 200;
  v8 = *(_QWORD *)(a2 - 200 + 136);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0LL, 0LL, &v21);
  }
  else
  {
    v10 = 0;
  }
  _m_prefetchw((const void *)(v7 + 280));
  v11 = *(_DWORD *)(v7 + 280);
  while ( v11 > 0 )
  {
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 280), v11 - 1, v11);
    v12 = v11 == v13;
    v11 = v13;
    if ( v12 )
      goto LABEL_6;
  }
  v9 = 0;
LABEL_6:
  if ( v10 && v9 )
  {
    if ( (int)LdrAddRefDll(0LL, v8) >= 0 )
    {
      *(_QWORD *)(a1 + 168) = v8;
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0LL, v21);
  if ( v9 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, v7);
    v16 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14) )
      v17 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v17 = 2147353478LL;
    if ( *(_BYTE *)v17 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v7 + 144),
        a2,
        *(_QWORD *)(v7 + 80),
        *(_QWORD *)(v7 + 88),
        *(_QWORD *)(v7 + 104));
    TppStartThreadData(&v22, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v7 + 80))(a1, *(_QWORD *)(v7 + 88), a3, a4, v7);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v19, v18) )
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v16 )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(v7 + 144),
        a2,
        *(_QWORD *)(v7 + 80),
        *(_QWORD *)(v7 + 88),
        *(_QWORD *)(v7 + 104));
    return TppCompleteThreadData(v22);
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(v7 + 8))(v7);
  }
  return result;
}
