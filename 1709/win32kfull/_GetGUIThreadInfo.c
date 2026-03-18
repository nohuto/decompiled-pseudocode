/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00E02C8
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00E01B0 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetGUIThreadInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v6; // rdi
  struct _KTHREAD *v7; // r14
  __int64 v8; // rbp
  __int64 *v9; // rax
  struct _KTHREAD *v10; // r14
  __int64 v11; // rbp
  __int64 *v12; // rax
  _DWORD **v13; // rax
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v18; // rbp
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rsi
  struct _KTHREAD *v26; // rbp
  __int64 *v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx

  v2 = a2;
  v3 = (_QWORD *)a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v4 = 87LL;
LABEL_3:
    UserSetLastError(v4, a2);
    return 0LL;
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 408);
  }
  else
  {
    v6 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v16 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v16 )
    {
      a1 = *(_QWORD *)(v16 + 16);
      if ( *(_QWORD *)(a1 + 408) == gpqForeground )
      {
        CurrentThread = KeGetCurrentThread();
        v3 = *(_QWORD **)(v16 + 16);
        v18 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v18 = *ThreadWin32Thread;
        }
        if ( *(_QWORD *)(v18 + 432) != v3[54] )
          goto LABEL_34;
      }
    }
  }
  if ( *(_QWORD *)(v6 + 288) )
  {
    v7 = KeGetCurrentThread();
    v8 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      v9 = (__int64 *)PsGetThreadWin32Thread(v7);
      if ( v9 )
        v8 = *v9;
    }
    a1 = *(_QWORD *)(*(_QWORD *)(v6 + 288) + 16LL);
    if ( *(_QWORD *)(a1 + 432) != *(_QWORD *)(v8 + 432) )
      goto LABEL_34;
  }
  if ( v3 )
  {
    v10 = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      v12 = (__int64 *)PsGetThreadWin32Thread(v10);
      if ( v12 )
        v11 = *v12;
    }
    if ( v3[54] != *(_QWORD *)(v11 + 432) )
    {
LABEL_34:
      v4 = 5LL;
      goto LABEL_3;
    }
  }
  *(_DWORD *)(v2 + 4) = 0;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( !v3 )
    goto LABEL_39;
  a1 = v3[81];
  if ( a1 && (*(_DWORD *)(a1 + 196) & 8) == 0 && *(_QWORD *)(a1 + 16) )
  {
    *(_DWORD *)(v2 + 4) = 2;
    a1 = *(_QWORD *)(v3[81] + 16LL);
    *(_QWORD *)(v2 + 40) = *(_QWORD *)a1;
  }
  v13 = (_DWORD **)v3[73];
  if ( !v13 || !*v13 )
    goto LABEL_39;
  v14 = *(_DWORD *)(v2 + 4) | 4;
  *(_DWORD *)(v2 + 4) = v14;
  LODWORD(a2) = **v13;
  if ( (a2 & 2) != 0 )
  {
    if ( (a2 & 4) == 0 )
      goto LABEL_37;
    v15 = v14 | 8;
  }
  else
  {
    v15 = v14 | 0x10;
  }
  *(_DWORD *)(v2 + 4) = v15;
LABEL_37:
  a1 = *(_QWORD *)v3[73];
  v20 = *(_QWORD **)(a1 + 8);
  if ( v20 )
    *(_QWORD *)(v2 + 32) = *v20;
LABEL_39:
  v21 = *(_QWORD **)(v6 + 120);
  if ( v21 )
    v21 = (_QWORD *)*v21;
  *(_QWORD *)(v2 + 8) = v21;
  v22 = *(_QWORD **)(v6 + 112);
  if ( v22 )
    v22 = (_QWORD *)*v22;
  *(_QWORD *)(v2 + 16) = v22;
  v23 = *(_QWORD **)(v6 + 104);
  if ( v23 )
    v23 = (_QWORD *)*v23;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 24) = v23;
  v24 = *(_QWORD **)(v6 + 288);
  if ( v24 )
  {
    v25 = 0LL;
    *(_QWORD *)(v2 + 48) = *v24;
    v26 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      v27 = (__int64 *)PsGetThreadWin32Thread(v26);
      if ( v27 )
        v25 = *v27;
    }
    v28 = *(_QWORD *)(v6 + 288);
    if ( *(_QWORD *)(v28 + 16) == v25 || (*(_DWORD *)(*(_QWORD *)(v28 + 168) + 100LL) & 0x20) == 0 )
    {
      v32 = *(_DWORD *)(v6 + 308);
      *(_DWORD *)(v2 + 56) = v32;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v6 + 320) + v32;
      v33 = *(_DWORD *)(v6 + 312);
      *(_DWORD *)(v2 + 60) = v33;
      v31 = *(_DWORD *)(v6 + 316) + v33;
    }
    else
    {
      v29 = *(_DWORD *)(v6 + 348);
      *(_DWORD *)(v2 + 56) = v29;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v6 + 356) + v29;
      v30 = *(_DWORD *)(v6 + 352);
      *(_DWORD *)(v2 + 60) = v30;
      v31 = *(_DWORD *)(v6 + 360) + v30;
    }
    *(_DWORD *)(v2 + 68) = v31;
    if ( !*(_DWORD *)(v6 + 300) )
      *(_DWORD *)(v2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[50] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3[54] + 144LL);
    *(_OWORD *)(v2 + 56) = *(_OWORD *)(v3[54] + 152LL);
  }
  else
  {
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
  }
  return 1LL;
}
