/*
 * XREFs of xxxCsEvent @ 0x1C000C874
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C0118BE0 (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C01E46B0 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C0213CD0 (xxxMessageEvent.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  size_t v4; // rdi
  _WORD *v5; // rax
  _WORD *v6; // rbx
  int v8; // esi
  PKDEFERRED_ROUTINE DeferredRoutine; // rax
  int v10; // edx
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // rdi
  int v15; // r14d
  PKDEFERRED_ROUTINE i; // rsi
  int j; // esi
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v24[3]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v25[24]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v26[32]; // [rsp+80h] [rbp-38h] BYREF

  v4 = (unsigned int)a2 + 8;
  v5 = (_WORD *)Win32AllocPoolWithQuota(v4, 895775573LL);
  v6 = v5;
  if ( !v5 )
    return 16392LL;
  memmove(v5, Src, v4);
  v6[3] = a2;
  v8 = 0;
  DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
  if ( WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    v10 = *(_DWORD *)v6;
    do
    {
      if ( ((v10 & *((_DWORD *)DeferredRoutine + 10)) == 0 || v6[2])
        && ((v10 & *((_DWORD *)DeferredRoutine + 10)) != 0 || !v6[2]) )
      {
        ++v8;
      }
      DeferredRoutine = (PKDEFERRED_ROUTINE)*((_QWORD *)DeferredRoutine + 3);
    }
    while ( DeferredRoutine );
  }
  v11 = (_DWORD *)Win32AllocPoolWithQuotaZInit(8LL * v8 + 8, 912552789LL);
  v14 = v11;
  if ( !v11 )
  {
    Win32FreePool(v6, v12, v13);
    return 16392LL;
  }
  *v11 = v8;
  v15 = 0;
  for ( i = WPP_MAIN_CB.Dpc.DeferredRoutine; i && v15 < *v14; i = (PKDEFERRED_ROUTINE)*((_QWORD *)i + 3) )
  {
    if ( ((*(_DWORD *)v6 & *((_DWORD *)i + 10)) == 0 || v6[2]) && ((*(_DWORD *)v6 & *((_DWORD *)i + 10)) != 0 || !v6[2]) )
    {
      *(_QWORD *)&v22 = &v14[2 * v15 + 2];
      *((_QWORD *)&v22 + 1) = *((_QWORD *)i + 6);
      v23 = v22;
      HMAssignmentLock(&v23);
      ++v15;
    }
  }
  PushW32ThreadLock(v6, v26, Win32FreePool);
  PushW32ThreadLock(v14, v25, DestroyEventPacketTargets);
  for ( j = 0; j < *v14; ++j )
  {
    v18 = (_QWORD *)HMAssignmentUnlock(&v14[2 * j + 2]);
    if ( v18 )
    {
      v19 = ValidateHwnd(*v18);
      if ( v19 )
      {
        v24[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v24;
        v24[1] = v19;
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        xxxSendMessage(v19, 60LL, 0LL, v6);
        ThreadUnlock1(v21, v20);
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock(v25);
  PopAndFreeAlwaysW32ThreadLock(v26);
  return 0LL;
}
