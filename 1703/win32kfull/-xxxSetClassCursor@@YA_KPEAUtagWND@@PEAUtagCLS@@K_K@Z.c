/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C2E24
 * Callers:
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ClassLock @ 0x1C00EB620 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F9260 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C020AD74 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct tagCLS *i; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int128 v24; // [rsp+28h] [rbp-59h]
  __int128 v25; // [rsp+38h] [rbp-49h]
  __int128 v26; // [rsp+48h] [rbp-39h] BYREF
  __int128 v27; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v29[3]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v30[4]; // [rsp+98h] [rbp+17h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 )
  {
    v9 = HMValidateHandle(a4, 3);
    if ( !v9 )
    {
      if ( a3 == -14 || (v10 = 1402LL, a3 == -34) )
        v10 = 1414LL;
      UserSetLastError(v10);
    }
  }
  v11 = *((_QWORD *)a2 + 8);
  if ( !(unsigned int)ClassLock(v11, v29) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v14 = gptiCurrent;
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  if ( a3 == -34 || a3 == -14 )
  {
    v15 = (_QWORD *)xxxSetClassIcon(a1, v11);
LABEL_16:
    v8 = v15;
    if ( v15 )
      v8 = (_QWORD *)*v15;
    goto LABEL_18;
  }
  if ( a3 == -12 )
  {
    *((_QWORD *)&v24 + 1) = v9;
    *(_QWORD *)&v24 = v11 + 128;
    v26 = v24;
    v15 = (_QWORD *)HMAssignmentLock(&v26);
    goto LABEL_16;
  }
LABEL_18:
  for ( i = *(struct tagCLS **)(v11 + 72); ; i = *(struct tagCLS **)i )
  {
    if ( !i )
    {
LABEL_28:
      ThreadUnlock1(v14, v12);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v20 = v29[0];
      v4 = v8;
      *(_QWORD *)(ThreadWin32Thread + 16) = v29[0];
      goto LABEL_29;
    }
    if ( a3 == -34 || a3 == -14 )
      break;
    if ( a3 == -12 )
    {
      *((_QWORD *)&v25 + 1) = v9;
      *(_QWORD *)&v25 = (char *)i + 128;
      v27 = v25;
      HMAssignmentLock(&v27);
    }
LABEL_25:
    if ( !i )
      goto LABEL_28;
  }
  if ( (unsigned int)ClassLock((__int64)i, v30) )
  {
    xxxSetClassIcon(a1, (__int64)i);
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v18 = v30[0];
    *(_QWORD *)(v17 + 16) = v30[0];
    i = ClassUnlockWorker(i, v18);
    goto LABEL_25;
  }
  UserSetLastError(5LL);
  ThreadUnlock1(v22, v21);
  v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v23 + 16) = v29[0];
LABEL_29:
  ClassUnlockWorker((struct tagCLS *)v11, v20);
  return v4;
}
