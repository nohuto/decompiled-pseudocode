/*
 * XREFs of FreeWindowStation @ 0x1C00ADD90
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxEmptyClipboard @ 0x1C00AE73C (xxxEmptyClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AEA9C (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCloseClipboard @ 0x1C00AF380 (xxxCloseClipboard.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  struct _RTL_ATOM_TABLE *v3; // rcx
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int128 v16; // [rsp+20h] [rbp-48h]
  _OWORD v17[3]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v1 = *a1;
  *(_DWORD *)(v1 + 32) |= 0x10u;
  v2 = *(_QWORD *)(v1 + 176);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_DWORD *)(v1 + 168) = 0;
  }
  if ( (*(_DWORD *)(v1 + 32) & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v18);
  v3 = *(struct _RTL_ATOM_TABLE **)(v1 + 136);
  if ( v3 )
    RtlDestroyAtomTable(v3);
  *(_QWORD *)(v1 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  HMAssignmentUnlock(v1 + 80);
  HMAssignmentUnlock(v1 + 72);
  HMAssignmentUnlock(v1 + 64);
  xxxEmptyClipboard((PVOID)v1);
  if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 120) )
  {
    v19 = *(_QWORD *)(v1 + 120);
    *(_QWORD *)(v1 + 120) = *(_QWORD *)(v19 + 296);
    *(_QWORD *)(v19 + 296) = 0LL;
    *(_DWORD *)(v19 + 304) &= ~1u;
    HMAssignmentUnlock(&v19);
  }
  if ( (*(_DWORD *)(v1 + 32) & 4) == 0 )
  {
    v4 = (_QWORD *)(v1 + 40);
    v5 = *(_QWORD *)(v1 + 40);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 24);
      if ( v5 != v6 )
      {
        do
        {
          v14 = *v4;
          v15 = *(_QWORD *)(*v4 + 16LL);
          HMMarkObjectDestroy(*v4);
          *(_DWORD *)(v14 + 32) |= 0x20000000u;
          *(_QWORD *)&v16 = v1 + 40;
          *((_QWORD *)&v16 + 1) = v15;
          v17[0] = v16;
          HMAssignmentLock(v17);
        }
        while ( *v4 != v6 );
      }
      v7 = *v4;
      HMMarkObjectDestroy(*v4);
      *(_DWORD *)(v7 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 40);
      gdwHydraHint |= 0x10000u;
    }
  }
  v8 = *(_QWORD *)(v1 + 160);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(v1 + 160) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v18 )
    UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return 0LL;
}
