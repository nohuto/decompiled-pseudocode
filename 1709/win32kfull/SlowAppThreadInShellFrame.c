/*
 * XREFs of SlowAppThreadInShellFrame @ 0x1C000BEC4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00CBEDC (IsDebuggerAttached.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01C02D0 (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r14
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
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // [rsp+70h] [rbp+18h]
  int v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v4 = *((_QWORD *)a1 + 51);
  v6 = 0LL;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = *(_QWORD *)(v4 + 112);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( v11 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(v11 + 400)) )
        return 0LL;
      a3 = v26;
      a4 = v27;
    }
  }
  if ( a4 )
  {
    v17 = *((_QWORD *)a1 + 81);
    v12 = gdwMDAQThreshold / 0xAu;
    if ( v17 && (*(_DWORD *)(v17 + 196) & 0x100000) != 0 )
      v12 = gdwMDAQThreshold / 0x14u;
  }
  else
  {
    v12 = gdwMDAQTimeoutDefenseInDepth;
  }
  v13 = *(struct tagTHREADINFO **)(v4 + 64);
  if ( v13 )
  {
    if ( v13 != a1 && v13 == a2 )
    {
      v18 = *(_QWORD *)(v4 + 72);
      if ( v18 )
      {
        if ( a3 == v18 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 50)) )
            return 0LL;
          if ( v8 && (int)v9 - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 48LL) >= v12 )
            return v13;
          v19 = *((_QWORD *)v13 + 98);
          if ( v19 )
          {
            if ( (int)v9 - *(_DWORD *)(v19 + 48) >= v12 )
              return v13;
          }
          if ( (int)v9 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 64) + 424LL) + 12LL) >= v12 )
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
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 50)) )
    return 0LL;
  if ( v13 != a1 || (v13 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
  {
    v14 = v27;
    if ( (v27 || (*(_WORD *)(*((_QWORD *)a1 + 53) + 6LL) & 0x1084) != 0)
      && ((int)v9 - *(_DWORD *)(v8 + 48) >= v12 || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v13 + 200)) > 0x100) )
    {
      return v13;
    }
  }
  else
  {
LABEL_9:
    v14 = v27;
  }
  v13 = *(struct tagTHREADINFO **)(v4 + 64);
  if ( !v13 || v13 == a1 )
    goto LABEL_11;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 50)) )
    return 0LL;
  v20 = *(_QWORD *)(v4 + 72);
  if ( v20 )
  {
    v21 = *((_QWORD *)v13 + 98);
    if ( v20 == v21 && (int)v9 - *(_DWORD *)(v21 + 48) >= v12 )
      return v13;
    v22 = *(_QWORD *)(v4 + 24);
    if ( v20 == v22 && (int)v9 - *(_DWORD *)(v22 + 48) >= v12 )
      return v13;
  }
  if ( v14
    && ((int)v9 - *(_DWORD *)(*((_QWORD *)v13 + 53) + 12LL) >= v12
     || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v13 + 200)) > 0x100) )
  {
    return v13;
  }
LABEL_11:
  v15 = (_DWORD *)*((_QWORD *)a1 + 81);
  if ( !v15 || (v15[49] & 0x100000) == 0 )
    return 0LL;
  v23 = v15[84];
  if ( v23 < 3 || v15[83] / v23 <= v12 )
  {
    v25 = v15[82];
    if ( !v25 || (int)v9 - v25 < 4 * v12 )
      return 0LL;
  }
  v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 51) + 120LL) + 112LL);
  if ( v24 )
    return *(struct tagTHREADINFO **)(v24 + 16);
  return (struct tagTHREADINFO *)v6;
}
