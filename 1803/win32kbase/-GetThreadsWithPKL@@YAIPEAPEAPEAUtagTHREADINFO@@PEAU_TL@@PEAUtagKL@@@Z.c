/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0128230
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C012A3F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserReAllocPool @ 0x1C0066550 (UserReAllocPool.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  struct _TL *v3; // r15
  struct tagTHREADINFO ***v4; // r14
  struct tagKL *v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // r12d
  void *v8; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  _QWORD *i; // r14
  _QWORD *v13; // r15
  PVOID *v14; // rcx
  void *v15; // rax
  __int64 j; // rsi
  void *v17; // rax

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0LL;
  v7 = 128;
  v8 = (void *)Win32AllocPool(1024LL, 0x69747355u);
  if ( !v8 )
    return 0LL;
  v10 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      v11 = *(_QWORD *)(v10 + 16);
LABEL_18:
      if ( v11 )
      {
        for ( i = *(_QWORD **)(v11 + 168); ; i = (_QWORD *)*i )
        {
          if ( i == (_QWORD *)(v11 + 168) )
          {
            v11 = *(_QWORD *)(v11 + 32);
            goto LABEL_18;
          }
          v13 = i - 91;
          if ( i != (_QWORD *)728 && (!a3 || a3 == (struct tagKL *)v13[54]) )
          {
            v14 = (PVOID *)v13[52];
            if ( *v14 == gpepCSRSS || *(_QWORD *)v13[52] == PsGetCurrentProcess(v14) )
            {
              if ( (_DWORD)v6 == v7 )
              {
                v7 += 128;
                v15 = UserReAllocPool(v8, 8LL * (unsigned int)v6, 8LL * v7, 0x69747355u);
                if ( !v15 )
                {
LABEL_22:
                  Win32FreePool((__int64)v8);
                  return 0LL;
                }
                v8 = v15;
              }
              *((_QWORD *)v8 + v6) = v13;
              v6 = (unsigned int)(v6 + 1);
            }
          }
        }
      }
      v10 = *(_QWORD *)(v10 + 8);
    }
    while ( v10 );
    v5 = a3;
    v4 = a1;
    v3 = a2;
  }
  for ( j = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 320); j; j = *(_QWORD *)(j + 656) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(j + 432) )
    {
      if ( (_DWORD)v6 == v7 )
      {
        v7 += 128;
        v17 = UserReAllocPool(v8, 8LL * (unsigned int)v6, 8LL * v7, 0x69747355u);
        if ( !v17 )
          goto LABEL_22;
        v8 = v17;
      }
      *((_QWORD *)v8 + v6) = j;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  if ( (_DWORD)v6 && v4 )
  {
    *v4 = (struct tagTHREADINFO **)v8;
    PushW32ThreadLock(v8, v3, Win32FreePool);
  }
  else
  {
    Win32FreePool((__int64)v8);
  }
  return (unsigned int)v6;
}
