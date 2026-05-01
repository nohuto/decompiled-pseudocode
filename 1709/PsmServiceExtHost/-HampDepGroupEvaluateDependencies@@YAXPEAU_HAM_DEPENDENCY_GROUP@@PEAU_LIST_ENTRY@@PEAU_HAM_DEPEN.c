/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18004478C
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004497C (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180044A7C (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_ACTIVITY@@K@Z @ 0x180047690 (-HampActGetDependencyAction@@YA-AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_ACTIVITY@@K@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _LIST_ENTRY *a2,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a3)
{
  struct _HAM_HOST_DEPENDENCY *i; // rcx
  struct _LIST_ENTRY *Flink; // r14
  BOOL v8; // ebp
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _HAM_HOST_DEPENDENCY *FirstDependencyForHost; // r11
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // r11
  __int64 v16; // rax
  struct _LIST_ENTRY *v17; // rdx
  struct _LIST_ENTRY *v18; // rcx
  struct _HAM_HOST_DEPENDENCY *NextDependency; // rax
  _QWORD *v20; // r11
  struct _HAM_HOST_DEPENDENCY *j; // rsi
  __int64 v22; // rdx
  int v23; // r11d
  __int64 v24; // rdx
  char *k; // rax
  __int64 v26; // rcx

  for ( i = (struct _HAM_HOST_DEPENDENCY *)(((*((_QWORD *)a1 + 9) & 0xFFFFFFFFFFFFFFFEuLL) - 56) & -(__int64)((*((_QWORD *)a1 + 9) & 0xFFFFFFFFFFFFFFFEuLL) != 0));
        i;
        i = HampDepGroupGetNextDependency(i) )
  {
    *((_DWORD *)i + 20) = 0;
  }
  Flink = a2->Flink;
  v8 = a2->Flink != a2;
  while ( 1 )
  {
    v9 = a2->Flink;
    if ( a2->Flink == a2 )
      break;
    v10 = v9->Flink;
    if ( v9->Flink->Blink != v9 || (Blink = v9->Blink, Blink->Flink != v9) )
      __fastfail(3u);
    Blink->Flink = v10;
    v10->Blink = Blink;
    v9->Flink = 0LL;
    v9->Blink = 0LL;
    FirstDependencyForHost = HampDepGroupFindFirstDependencyForHost(a1, (struct _RM_HAM_ACTIVITY_HOST *)&v9[-43]);
    if ( FirstDependencyForHost )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)FirstDependencyForHost + 6);
        v14 = *((_DWORD *)FirstDependencyForHost + 21) & 1;
        *((_DWORD *)FirstDependencyForHost + 20) |= 8u;
        if ( (unsigned __int8)HampActGetDependencyAction(v13, (unsigned int)(2 * v14)) != 3 )
        {
          v16 = *(_QWORD *)(v15 + 8);
          if ( (*(_BYTE *)(v16 + 704) & 2) == 0 )
          {
            v17 = a2->Flink;
            v18 = (struct _LIST_ENTRY *)(v16 + 688);
            if ( a2->Flink->Blink != a2 )
              __fastfail(3u);
            v18->Flink = v17;
            *(_QWORD *)(v16 + 696) = a2;
            v17->Blink = v18;
            a2->Flink = v18;
            *(_DWORD *)(v16 + 704) |= 2u;
          }
        }
        NextDependency = HampDepGroupGetNextDependency((struct _HAM_HOST_DEPENDENCY *)v15);
        if ( !NextDependency || *v20 != *(_QWORD *)NextDependency )
          break;
        FirstDependencyForHost = NextDependency;
      }
    }
  }
  for ( j = (struct _HAM_HOST_DEPENDENCY *)(((*((_QWORD *)a1 + 9) & 0xFFFFFFFFFFFFFFFEuLL) - 56) & -(__int64)((*((_QWORD *)a1 + 9) & 0xFFFFFFFFFFFFFFFEuLL) != 0));
        j;
        j = HampDepGroupGetNextDependency(j) )
  {
    v22 = (2 * (*((_DWORD *)j + 21) & 1)) | 1u;
    if ( (*((_DWORD *)j + 20) & 8) == 0 )
      v22 = 2 * (*((_DWORD *)j + 21) & 1u);
    LOBYTE(v23) = HampActGetDependencyAction(*((_QWORD *)j + 6), v22);
    *((_DWORD *)j + 20) ^= (*((_DWORD *)j + 20) ^ v23) & 7;
  }
  v24 = v8;
  if ( Flink == a2 )
  {
    for ( k = *(char **)a3; k != (char *)a3; k = *(char **)k )
    {
      if ( k[276] >= 0 || k[280] < 0 )
      {
        v24 = 1LL;
        break;
      }
    }
  }
  v26 = *((_QWORD *)a3 + 3);
  if ( v26 )
    *((_DWORD *)a3 + 8) ^= (*((_DWORD *)a3 + 8) ^ (2 * (unsigned __int8)HampActGetDependencyAction(v26, v24))) & 0xE;
}
