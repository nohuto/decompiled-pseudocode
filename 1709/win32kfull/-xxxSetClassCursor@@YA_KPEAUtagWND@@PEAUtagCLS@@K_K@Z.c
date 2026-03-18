/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C5B38
 * Callers:
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ClassLock @ 0x1C0073454 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0073710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetClassIcon @ 0x1C020C114 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  int v5; // edi
  struct tagCLS *v6; // r13
  _QWORD *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  struct tagCLS *i; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int128 v38; // [rsp+28h] [rbp-59h]
  __int128 v39; // [rsp+38h] [rbp-49h]
  __int128 v40; // [rsp+48h] [rbp-39h] BYREF
  __int128 v41; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v42[3]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v43[3]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v44[4]; // [rsp+98h] [rbp+17h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 )
  {
    LOBYTE(a2) = 3;
    v9 = HMValidateHandle(a4, (__int64)a2, a3, a4);
    if ( !v9 )
    {
      if ( v5 == -14 || (v11 = 1402LL, v5 == -34) )
        v11 = 1414LL;
      UserSetLastError(v11, v10);
    }
  }
  v12 = *((_QWORD *)v6 + 8);
  if ( !(unsigned int)ClassLock(v12, v43, a3, a4) )
  {
    UserSetLastError(5LL, v13);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v42[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v42;
  v42[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  if ( v5 == -34 || v5 == -14 )
  {
    v21 = (_QWORD *)xxxSetClassIcon(a1, v12);
LABEL_16:
    v8 = v21;
    if ( v21 )
      v8 = (_QWORD *)*v21;
    goto LABEL_18;
  }
  if ( v5 == -12 )
  {
    *((_QWORD *)&v38 + 1) = v9;
    *(_QWORD *)&v38 = v12 + 136;
    v40 = v38;
    v21 = (_QWORD *)HMAssignmentLock(&v40);
    goto LABEL_16;
  }
LABEL_18:
  for ( i = *(struct tagCLS **)(v12 + 72); ; i = *(struct tagCLS **)i )
  {
    if ( !i )
    {
LABEL_28:
      ThreadUnlock1(ThreadWin32Thread, v17);
      v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30);
      v4 = v8;
      *(_QWORD *)(v31 + 16) = v43[0];
      goto LABEL_29;
    }
    if ( v5 == -34 || v5 == -14 )
      break;
    if ( v5 == -12 )
    {
      *((_QWORD *)&v39 + 1) = v9;
      *(_QWORD *)&v39 = (char *)i + 136;
      v41 = v39;
      HMAssignmentLock(&v41);
    }
LABEL_25:
    if ( !i )
      goto LABEL_28;
  }
  if ( (unsigned int)ClassLock((__int64)i, v44, v19, v20) )
  {
    xxxSetClassIcon(a1, (__int64)i);
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
    *(_QWORD *)(v27 + 16) = v44[0];
    i = ClassUnlockWorker(i);
    goto LABEL_25;
  }
  UserSetLastError(5LL, v23);
  ThreadUnlock1(v33, v32);
  v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36);
  *(_QWORD *)(v37 + 16) = v43[0];
LABEL_29:
  ClassUnlockWorker((struct tagCLS *)v12);
  return v4;
}
