/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x1C0053A00
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v11; // r8
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  _BYTE v16[12]; // [rsp+34h] [rbp-54h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v11 = *(_DWORD **)(v9 + 432);
  v12 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v12 )
  {
    do
    {
      if ( *(_QWORD *)(v12 + 40) )
      {
        v12 = *(_QWORD *)(v12 + 40);
      }
      else
      {
        if ( (*(_DWORD *)(v12 + 64) & 1) != 0 )
          goto LABEL_9;
        v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL * (*(_DWORD *)(v12 + 48) + 1) + 32);
      }
      if ( !v12 )
        goto LABEL_9;
    }
    while ( (*(_DWORD *)(v12 + 64) & 0x80u) != 0 );
    if ( *(_DWORD *)(v12 + 48) != 4 )
      return 0LL;
  }
LABEL_9:
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  v18 = a2;
  v17[1] = a3;
  v17[0] = a4;
  v20 = 0LL;
  v13 = (*v11 >> 4) & 1;
  v14 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( !v14 )
    return v8;
  while ( 1 )
  {
    if ( *(_QWORD *)(v14 + 40) )
    {
      v14 = *(_QWORD *)(v14 + 40);
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(v14 + 64) & 1) != 0 )
      break;
    v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL * (*(_DWORD *)(v14 + 48) + 1) + 32);
LABEL_14:
    if ( !v14 || (*(_DWORD *)(v14 + 64) & 0x80u) == 0 )
      return xxxCallHook2(v14, 0, v13, (unsigned int)v17, (__int64)v16);
  }
  LODWORD(v14) = 0;
  return xxxCallHook2(v14, 0, v13, (unsigned int)v17, (__int64)v16);
}
