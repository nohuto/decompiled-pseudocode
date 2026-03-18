/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x1C00A94D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v12; // r8
  __int64 v13; // rcx
  __int64 v15; // rcx
  _BYTE v16[12]; // [rsp+34h] [rbp-54h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp-28h]

  v6 = a2;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  v12 = *(_DWORD **)(v10 + 456);
  v13 = *(_QWORD *)(gptiCurrent + 664LL);
  if ( v13 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v13 + 40) )
      {
        v13 = *(_QWORD *)(v13 + 40);
      }
      else
      {
        if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
          break;
        v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL * (*(_DWORD *)(v13 + 48) + 1) + 32);
      }
      if ( !v13 )
        break;
      if ( (*(_DWORD *)(v13 + 64) & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(v13 + 48) != 4 )
          return 0LL;
        break;
      }
    }
  }
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  v18 = v6;
  v17[1] = a3;
  v17[0] = a4;
  v20 = 0LL;
  v15 = *(_QWORD *)(gptiCurrent + 664LL);
  if ( !v15 )
    return v9;
  while ( 1 )
  {
    if ( *(_QWORD *)(v15 + 40) )
    {
      v15 = *(_QWORD *)(v15 + 40);
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
      break;
    v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL * (*(_DWORD *)(v15 + 48) + 1) + 32);
LABEL_21:
    if ( !v15 || (*(_DWORD *)(v15 + 64) & 0x80u) == 0 )
      return xxxCallHook2(v15, 0, (*v12 >> 4) & 1, (unsigned int)v17, (__int64)v16);
  }
  LODWORD(v15) = 0;
  return xxxCallHook2(v15, 0, (*v12 >> 4) & 1, (unsigned int)v17, (__int64)v16);
}
