/*
 * XREFs of SlowAppThreadInShellFrame @ 0x1C0006E3C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00B44C4 (IsDebuggerAttached.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01BC4A0 (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 *v4; // r14
  __int64 v6; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // esi
  struct tagTHREADINFO *v13; // rdi
  int v14; // r12d
  _DWORD *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // [rsp+70h] [rbp+18h]
  int v26; // [rsp+78h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v4 = (__int64 *)*((_QWORD *)a1 + 48);
  v6 = 0LL;
  v8 = *v4;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = v4[10];
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( v11 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(v11 + 376)) )
        return 0LL;
      a3 = v25;
      a4 = v26;
    }
  }
  if ( a4 )
  {
    v17 = *((_QWORD *)a1 + 74);
    v12 = gdwMDAQThreshold / 0xAu;
    if ( v17 && (*(_DWORD *)(v17 + 180) & 0x100000) != 0 )
      v12 = gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v12 = gdwMDAQTimeoutDefenseInDepth;
  }
  v13 = (struct tagTHREADINFO *)v4[4];
  if ( v13 )
  {
    if ( v13 != a1 && v13 == a2 )
    {
      v18 = v4[5];
      if ( v18 )
      {
        if ( a3 == v18 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 47)) )
            return 0LL;
          if ( v8 && (int)v9 - *(_DWORD *)(*v4 + 48) >= v12 )
            return v13;
          v19 = *((_QWORD *)v13 + 91);
          if ( v19 )
          {
            if ( (int)v9 - *(_DWORD *)(v19 + 48) >= v12 )
              return v13;
          }
          if ( (int)v9 - *(_DWORD *)(*(_QWORD *)(v4[4] + 400) + 12LL) >= v12 )
            return v13;
        }
      }
    }
  }
  if ( !v8 )
    goto LABEL_9;
  v13 = *(struct tagTHREADINFO **)(v8 + 104);
  if ( !v13 )
    goto LABEL_9;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 47)) )
    return 0LL;
  if ( v13 != a1 || (v13 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
  {
    v14 = v26;
    if ( (v26 || (*(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) & 0x1084) != 0)
      && ((int)v9 - *(_DWORD *)(v8 + 48) >= v12 || (unsigned int)(*((_DWORD *)v4 + 4) + *((_DWORD *)v13 + 186)) > 0x100) )
    {
      return v13;
    }
  }
  else
  {
LABEL_9:
    v14 = v26;
  }
  v13 = (struct tagTHREADINFO *)v4[4];
  if ( !v13 || v13 == a1 )
    goto LABEL_11;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 47)) )
    return 0LL;
  v20 = v4[5];
  if ( v20 )
  {
    v21 = *((_QWORD *)v13 + 91);
    if ( v20 == v21 && (int)v9 - *(_DWORD *)(v21 + 48) >= v12 )
      return v13;
    if ( v20 == *v4 && (int)v9 - *(_DWORD *)(*v4 + 48) >= v12 )
      return v13;
  }
  if ( v14
    && ((int)v9 - *(_DWORD *)(*((_QWORD *)v13 + 50) + 12LL) >= v12
     || (unsigned int)(*((_DWORD *)v4 + 4) + *((_DWORD *)v13 + 186)) > 0x100) )
  {
    return v13;
  }
LABEL_11:
  v15 = (_DWORD *)*((_QWORD *)a1 + 74);
  if ( !v15 || (v15[45] & 0x100000) == 0 )
    return 0LL;
  v22 = v15[80];
  if ( v22 < 3 || v15[79] / v22 <= v12 )
  {
    v24 = v15[78];
    if ( !v24 || (int)v9 - v24 < 4 * v12 )
      return 0LL;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 48) + 88LL) + 112LL);
  if ( v23 )
    return *(struct tagTHREADINFO **)(v23 + 16);
  return (struct tagTHREADINFO *)v6;
}
