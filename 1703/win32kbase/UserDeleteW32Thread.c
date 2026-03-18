/*
 * XREFs of UserDeleteW32Thread @ 0x1C00D8150
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00291D8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0037D40 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UnlockObjectAssignment @ 0x1C0043590 (UnlockObjectAssignment.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_20;
  v4 = *(void **)(a1 + 648);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(_QWORD *)(a1 + 768);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 448);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a1 + 384);
  if ( v7 )
  {
    --*(_DWORD *)(v7 + 348);
    v8 = *(_QWORD *)(a1 + 384);
    if ( !*(_DWORD *)(v8 + 348) && !*(_DWORD *)(v8 + 344) )
      Win32FreeToPagedLookasideList((__int64)QLookaside, v8);
  }
  if ( *(_QWORD *)(a1 + 408) )
    UnlockObjectAssignment((void **)(a1 + 408));
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_20:
    v13 = v14;
  }
  else
  {
    v12 = v14;
    if ( !v14 )
      EtwTraceReleaseUserCrit(v10, v9, v11);
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v12 )
      UserSessionSwitchLeaveCrit();
    v13 = 1;
  }
  if ( !v13 )
    UserSessionSwitchLeaveCrit();
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
