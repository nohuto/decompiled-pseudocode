/*
 * XREFs of FreeWindowStation @ 0x1C00C49E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxEmptyClipboard @ 0x1C00C55F4 (xxxEmptyClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C5978 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCloseClipboard @ 0x1C00C60A0 (xxxCloseClipboard.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _RTL_ATOM_TABLE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int128 v21; // [rsp+20h] [rbp-48h]
  _OWORD v22[3]; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v3 = *a1;
  *(_DWORD *)(v3 + 32) |= 0x10u;
  v4 = *(_QWORD *)(v3 + 176);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)(v3 + 176) = 0LL;
    *(_DWORD *)(v3 + 168) = 0;
  }
  if ( (*(_DWORD *)(v3 + 32) & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent(gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23);
  v8 = *(struct _RTL_ATOM_TABLE **)(v3 + 136);
  if ( v8 )
    RtlDestroyAtomTable(v8);
  *(_QWORD *)(v3 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  HMAssignmentUnlock(v3 + 80);
  HMAssignmentUnlock(v3 + 72);
  HMAssignmentUnlock(v3 + 64);
  xxxEmptyClipboard((PVOID)v3);
  if ( (*(_DWORD *)(v3 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v3);
  CloseClipboardToken((struct tagWINDOWSTATION *)v3);
  while ( *(_QWORD *)(v3 + 120) )
  {
    v24 = *(_QWORD *)(v3 + 120);
    *(_QWORD *)(v3 + 120) = *(_QWORD *)(v24 + 296);
    *(_QWORD *)(v24 + 296) = 0LL;
    *(_DWORD *)(v24 + 304) &= ~1u;
    HMAssignmentUnlock(&v24);
  }
  if ( (*(_DWORD *)(v3 + 32) & 4) == 0 )
  {
    v11 = (_QWORD *)(v3 + 40);
    v12 = *(_QWORD *)(v3 + 40);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 24);
      if ( v12 != v13 )
      {
        do
        {
          v19 = *v11;
          v20 = *(_QWORD *)(*v11 + 16LL);
          HMMarkObjectDestroy(*v11);
          *(_DWORD *)(v19 + 32) |= 0x20000000u;
          *(_QWORD *)&v21 = v3 + 40;
          *((_QWORD *)&v21 + 1) = v20;
          v22[0] = v21;
          HMAssignmentLock(v22);
        }
        while ( *v11 != v13 );
      }
      v14 = *v11;
      HMMarkObjectDestroy(*v11);
      *(_DWORD *)(v14 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v3 + 40);
      gdwHydraHint |= 0x10000u;
    }
  }
  v15 = *(_QWORD *)(v3 + 160);
  if ( v15 )
  {
    Win32FreePool(v15, v9, v10);
    *(_QWORD *)(v3 + 160) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v23 )
    UserSessionSwitchLeaveCrit(v17, v16);
  return 0LL;
}
