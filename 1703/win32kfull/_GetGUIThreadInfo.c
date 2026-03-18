/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00D9790
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00D9680 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetGUIThreadInfo(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 *v11; // rax
  __int64 v12; // rcx
  int **v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  _QWORD *v31; // rax

  v3 = a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v25 = 87LL;
    goto LABEL_42;
  }
  if ( a1 )
  {
    v4 = a1[48];
  }
  else
  {
    v4 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v5 = *(_QWORD *)(gpqForeground + 88LL);
    if ( v5 && *(_QWORD *)(*(_QWORD *)(v5 + 16) + 384LL) == gpqForeground )
    {
      v3 = *(_QWORD **)(v5 + 16);
      v6 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v6 = *ThreadWin32Thread;
      if ( *(_QWORD *)(v6 + 408) != v3[51] )
        goto LABEL_41;
    }
  }
  if ( *(_QWORD *)(v4 + 256) )
  {
    v8 = 0LL;
    v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v9 )
      v8 = *v9;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 256) + 16LL) + 408LL) != *(_QWORD *)(v8 + 408) )
      goto LABEL_41;
  }
  if ( v3 )
  {
    v10 = 0LL;
    v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v11 )
      v10 = *v11;
    if ( v3[51] != *(_QWORD *)(v10 + 408) )
    {
LABEL_41:
      v25 = 5LL;
LABEL_42:
      UserSetLastError(v25);
      return 0LL;
    }
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( !v3 )
    goto LABEL_20;
  v12 = v3[74];
  if ( v12 && (*(_DWORD *)(v12 + 180) & 8) == 0 && *(_QWORD *)v12 )
  {
    *(_DWORD *)(a2 + 4) = 2;
    *(_QWORD *)(a2 + 40) = **(_QWORD **)v3[74];
  }
  v13 = (int **)v3[66];
  if ( !v13 || !*v13 )
    goto LABEL_20;
  v28 = *(_DWORD *)(a2 + 4) | 4;
  *(_DWORD *)(a2 + 4) = v28;
  v29 = **v13;
  if ( (v29 & 2) != 0 )
  {
    if ( (v29 & 4) == 0 )
      goto LABEL_56;
    v30 = v28 | 8;
  }
  else
  {
    v30 = v28 | 0x10;
  }
  *(_DWORD *)(a2 + 4) = v30;
LABEL_56:
  v31 = *(_QWORD **)(*(_QWORD *)v3[66] + 8LL);
  if ( v31 )
    *(_QWORD *)(a2 + 32) = *v31;
LABEL_20:
  v14 = *(_QWORD **)(v4 + 88);
  if ( v14 )
    v14 = (_QWORD *)*v14;
  *(_QWORD *)(a2 + 8) = v14;
  v15 = *(_QWORD **)(v4 + 80);
  if ( v15 )
    v15 = (_QWORD *)*v15;
  *(_QWORD *)(a2 + 16) = v15;
  v16 = *(_QWORD **)(v4 + 72);
  if ( v16 )
    v16 = (_QWORD *)*v16;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 24) = v16;
  v17 = *(_QWORD **)(v4 + 256);
  if ( v17 )
  {
    v18 = 0LL;
    *(_QWORD *)(a2 + 48) = *v17;
    v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v19 )
      v18 = *v19;
    v20 = *(_QWORD *)(v4 + 256);
    if ( *(_QWORD *)(v20 + 16) == v18 || (*(_DWORD *)(*(_QWORD *)(v20 + 168) + 92LL) & 0x20) == 0 )
    {
      v21 = *(_DWORD *)(v4 + 272);
      *(_DWORD *)(a2 + 56) = v21;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v4 + 284) + v21;
      v22 = *(_DWORD *)(v4 + 276);
      *(_DWORD *)(a2 + 60) = v22;
      v23 = *(_DWORD *)(v4 + 280) + v22;
    }
    else
    {
      v26 = *(_DWORD *)(v4 + 308);
      *(_DWORD *)(a2 + 56) = v26;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v4 + 316) + v26;
      v27 = *(_DWORD *)(v4 + 312);
      *(_DWORD *)(a2 + 60) = v27;
      v23 = *(_DWORD *)(v4 + 320) + v27;
    }
    *(_DWORD *)(a2 + 68) = v23;
    if ( !*(_DWORD *)(v4 + 268) )
      *(_DWORD *)(a2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[47] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v3[51] + 144LL);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(v3[51] + 152LL);
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  return 1LL;
}
