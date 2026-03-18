/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x1C0009310
 * Callers:
 *     DpiFdoLineInterruptRoutine @ 0x1C003B6C0 (DpiFdoLineInterruptRoutine.c)
 * Callees:
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoMessageInterruptRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // edi
  __int64 v9; // rcx
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int8 v13; // di
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax

  v3 = 0LL;
  v4 = a3;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 4014LL);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v7 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v7);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v9)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v3 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v11 = *(_DWORD *)(v3 + 140);
      if ( !v11 )
        *(_DWORD *)(v3 + 144) = 4014;
      *(_DWORD *)(v3 + 140) = v11 + 1;
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
          v4);
  if ( v3 )
  {
    v15 = *(_DWORD *)(v3 + 140);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v16 + 24) = 229LL;
      WdLogEvent5_WdAssertion(v16);
      v15 = *(_DWORD *)(v3 + 140);
    }
    v17 = v15 - 1;
    *(_DWORD *)(v3 + 140) = v17;
    if ( !v17 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v14, 4014LL);
  return v13;
}
