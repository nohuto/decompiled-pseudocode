/*
 * XREFs of ClassLock @ 0x1C0073454
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C5B38 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall ClassLock(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _QWORD *v5; // rsi
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax

  v4 = *(_DWORD *)(a1 + 96);
  v5 = a2;
  if ( v4 >= 131068 )
    return 0LL;
  v8 = v4 + 1;
  *(_DWORD *)(a1 + 96) = v8;
  v9 = *(_QWORD *)(a1 + 64);
  if ( a1 != v9 )
  {
    a2 = (_QWORD *)*(unsigned int *)(v9 + 96);
    if ( (int)a2 >= 131068 )
    {
      *(_DWORD *)(a1 + 96) = v8 - 1;
      return 0LL;
    }
    *(_DWORD *)(v9 + 96) = (_DWORD)a2 + 1;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, a2, 131068LL, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  *v5 = *(_QWORD *)(v11 + 16);
  *(_QWORD *)(v11 + 16) = v5;
  v5[2] = ClassUnlockWorker;
  result = 1LL;
  v5[1] = a1;
  return result;
}
