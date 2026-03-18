/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C007A470
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C007A3A8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserReAllocPool @ 0x1C0082FD0 (UserReAllocPool.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  struct _TL *v3; // r15
  struct tagTHREADINFO ***v4; // r14
  struct tagKL *v5; // rbp
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rdx
  void *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 i; // rbp
  _QWORD *j; // r14
  _QWORD *v15; // r15
  PVOID *v16; // rcx
  __int64 k; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0LL;
  v7 = 128;
  v9 = (void *)Win32AllocPool(1024LL, 0x69747355u);
  if ( !v9 )
    return 0LL;
  v12 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v12 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          v15 = j - 82;
          if ( j != (_QWORD *)656 && (!a3 || a3 == (struct tagKL *)v15[49]) )
          {
            v16 = (PVOID *)v15[47];
            if ( *v16 == gpepCSRSS || *(_QWORD *)v15[47] == PsGetCurrentProcess(v16, v8, v10, v11) )
            {
              if ( (_DWORD)v6 == v7 )
              {
                v7 += 128;
                v19 = UserReAllocPool(v9, 8LL * (unsigned int)v6);
                if ( !v19 )
                  goto LABEL_28;
                v9 = (void *)v19;
              }
              *((_QWORD *)v9 + v6) = v15;
              v6 = (unsigned int)(v6 + 1);
            }
          }
        }
      }
      v12 = *(_QWORD *)(v12 + 8);
    }
    while ( v12 );
    v5 = a3;
    v4 = a1;
    v3 = a2;
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 288); k; k = *(_QWORD *)(k + 584) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(k + 392) )
    {
      if ( (_DWORD)v6 == v7 )
      {
        v7 += 128;
        v20 = UserReAllocPool(v9, 8LL * (unsigned int)v6);
        if ( !v20 )
        {
LABEL_28:
          Win32FreePool((__int64)v9);
          return 0LL;
        }
        v9 = (void *)v20;
      }
      *((_QWORD *)v9 + v6) = k;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  if ( (_DWORD)v6 && v4 )
  {
    *v4 = (struct tagTHREADINFO **)v9;
    PushW32ThreadLock(v9, v3, Win32FreePool);
  }
  else
  {
    Win32FreePool((__int64)v9);
  }
  return (unsigned int)v6;
}
