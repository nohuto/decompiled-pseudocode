/*
 * XREFs of UserDeleteW32Thread @ 0x1C007DB50
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003BB04 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     UnlockObjectAssignment @ 0x1C003C740 (UnlockObjectAssignment.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0054EB0 (Win32FreeToPagedLookasideList.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  int v14; // eax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_27;
  v8 = *(void **)(a1 + 704);
  if ( v8 )
    ObfDereferenceObject(v8);
  v9 = *(_QWORD *)(a1 + 856);
  if ( v9 )
    Win32FreePool(v9);
  v10 = *(_QWORD *)(a1 + 472);
  if ( v10 )
    Win32FreePool(v10);
  v11 = *(_QWORD *)(a1 + 408);
  if ( v11 )
  {
    --*(_DWORD *)(v11 + 388);
    v12 = *(_QWORD *)(a1 + 408);
    if ( !*(_DWORD *)(v12 + 388) && !*(_DWORD *)(v12 + 384) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 )
        FreeMessageList(*(_QWORD *)(a1 + 408) + 24LL);
      Win32FreeToPagedLookasideList((__int64)QLookaside, *(_QWORD *)(a1 + 408));
    }
  }
  if ( *(_QWORD *)(a1 + 432) )
    UnlockObjectAssignment((void **)(a1 + 432));
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_27:
    v14 = v15;
  }
  else
  {
    v13 = v15;
    if ( !v15 )
      EtwTraceReleaseUserCrit(v5, v4, v6, v7);
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v13 )
      UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    v14 = 1;
  }
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
