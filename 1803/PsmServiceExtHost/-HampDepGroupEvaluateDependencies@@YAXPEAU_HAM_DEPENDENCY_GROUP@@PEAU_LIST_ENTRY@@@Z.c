/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@@Z @ 0x180016CE0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800172A0 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800322CC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(struct _HAM_DEPENDENCY_GROUP *a1, struct _LIST_ENTRY *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r15
  struct _HAM_DEPENDENCY_LINK *NextLink; // rcx
  struct _HAM_DEPENDENCY_LINK *v6; // rdx
  char *v7; // r9
  struct _HAM_DEPENDENCY_LINK *v8; // rdx
  struct _HAM_DEPENDENCY_LINK *v9; // r8
  struct _HAM_DEPENDENCY_LINK *i; // rcx
  struct _HAM_DEPENDENCY_LINK *v11; // rdx
  struct _HAM_DEPENDENCY_LINK *v12; // rdx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _RTL_BALANCED_NODE *v16; // rbx
  struct _LIST_ENTRY *v17; // rbp
  int v18; // eax
  struct _RTL_BALANCED_NODE *v19; // rdi
  struct _RTL_BALANCED_NODE *v20; // rsi
  int v21; // eax
  struct _RTL_BALANCED_NODE *ParentValue; // rdx
  struct _RTL_BALANCED_NODE **v23; // r9
  int v24; // eax
  int v25; // eax
  struct _RTL_BALANCED_NODE *v26; // rcx
  struct _RTL_BALANCED_NODE *v27; // rax
  struct _LIST_ENTRY *v28; // rdx
  struct _LIST_ENTRY *v29; // rcx
  struct _RTL_BALANCED_NODE *v30; // rdx
  struct _HAM_DEPENDENCY_LINK *v31; // r10
  struct _HAM_DEPENDENCY_LINK *j; // rax
  struct _HAM_DEPENDENCY_LINK *v33; // rcx
  struct _HAM_DEPENDENCY_LINK *v34; // rdx
  struct _HAM_DEPENDENCY_LINK *v35; // rdx
  __int64 v36; // rax
  struct _HAM_DEPENDENCY_LINK *v37; // r15
  struct _HAM_DEPENDENCY_LINK *v38; // rdx
  char *v39; // r9
  char v40; // dl
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // r10
  char v44; // r8
  int v45; // eax
  char v46; // dl
  struct _HAM_DEPENDENCY_LINK *v47; // rdx
  struct _HAM_DEPENDENCY_LINK *v48; // r8
  struct _HAM_DEPENDENCY_LINK *k; // rcx
  struct _HAM_DEPENDENCY_LINK *v50; // rdx
  struct _HAM_DEPENDENCY_LINK *v51; // rdx
  struct _LIST_ENTRY *v52; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  v3 = (unsigned __int64)a1 + 72;
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      NextLink = 0LL;
    else
      NextLink = (struct _HAM_DEPENDENCY_LINK *)(v2 ^ (v3 | 1));
  }
  else
  {
    NextLink = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  }
  if ( NextLink )
  {
    while ( 1 )
    {
      v6 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
      v7 = 0LL;
      if ( v6 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
        v7 = (char *)v6 - 16;
      if ( v7 )
        break;
      NextLink = HampDepGroupGetNextLink(NextLink);
      if ( !NextLink )
        goto LABEL_27;
    }
    while ( 1 )
    {
      do
      {
        v8 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v7 + 2);
        v9 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v7 + 1);
        *((_DWORD *)v7 + 8) = 0;
        v7 = 0LL;
        if ( v8 != (struct _HAM_DEPENDENCY_LINK *)((char *)v9 + 64) )
          v7 = (char *)v8 - 16;
      }
      while ( v7 );
      i = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v9 + 1);
      if ( i )
      {
        v11 = *(struct _HAM_DEPENDENCY_LINK **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = v11;
            v11 = *(struct _HAM_DEPENDENCY_LINK **)v11;
          }
          while ( v11 );
        }
      }
      else
      {
        for ( i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v9 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              i;
              i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)i == v9 )
            break;
          v9 = i;
        }
      }
      if ( !i )
        break;
      while ( 1 )
      {
        v12 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 8);
        v7 = 0LL;
        if ( v12 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 64) )
          v7 = (char *)v12 - 16;
        if ( v7 )
          break;
        i = HampDepGroupGetNextLink(i);
        if ( !i )
          goto LABEL_27;
      }
    }
  }
LABEL_27:
  while ( 2 )
  {
    Flink = a2->Flink;
    if ( a2->Flink != a2 )
    {
      v14 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v14;
      v14->Blink = Blink;
      Flink->Flink = 0LL;
      Flink->Blink = 0LL;
      v16 = *(struct _RTL_BALANCED_NODE **)v3;
      v17 = Flink[-47].Flink;
      v52 = v17;
      if ( !v16 )
        continue;
      while ( 1 )
      {
        v18 = HampDepGroupCompareDependencyLinkForHost(&v52, v16);
        if ( !v18 )
          break;
        if ( v18 >= 0 )
          v16 = v16->Children[1];
        else
          v16 = v16->Children[0];
        if ( !v16 )
          goto LABEL_27;
      }
      v19 = v16->Children[0];
      v20 = 0LL;
      if ( !v16->Children[0] )
        goto LABEL_46;
      while ( 1 )
      {
        v21 = HampDepGroupCompareDependencyLinkForHost(&v52, v19);
        if ( v21 < 0 )
          goto LABEL_42;
        if ( v21 <= 0 )
          break;
        v19 = v19->Children[1];
LABEL_43:
        if ( !v19 )
        {
          if ( v20 )
            v16 = v20;
          do
          {
LABEL_46:
            if ( (struct _LIST_ENTRY *)v16[1].Children[0] != v17 )
              break;
            ParentValue = (struct _RTL_BALANCED_NODE *)v16[2].ParentValue;
            v23 = 0LL;
            if ( ParentValue != (struct _RTL_BALANCED_NODE *)&v16[2].16 )
              v23 = &ParentValue[-1].Children[1];
            if ( v23 )
            {
              while ( 1 )
              {
                if ( *((_BYTE *)v23 + 40) != 3 )
                {
                  v24 = *((_DWORD *)v23 + 9);
                  *((_DWORD *)v23 + 8) |= 8u;
                  v25 = v24 & 1;
                  v26 = *v23;
                  if ( (!*v23 || ((__int64)v26[22].Right & 8) == 0) && !v25 )
                  {
                    v27 = v26[3].Children[1];
                    if ( (*(_BYTE *)&v27[30].16 & 2) == 0 )
                    {
                      v28 = a2->Flink;
                      v29 = (struct _LIST_ENTRY *)&v27[30];
                      if ( a2->Flink->Blink != a2 )
                        __fastfail(3u);
                      v29->Flink = v28;
                      v27[30].Children[1] = (struct _RTL_BALANCED_NODE *)a2;
                      v28->Blink = v29;
                      a2->Flink = v29;
                      *(_DWORD *)&v27[30].16 |= 2u;
                    }
                  }
                }
                v30 = v23[2];
                v31 = (struct _HAM_DEPENDENCY_LINK *)v23[1];
                v23 = 0LL;
                if ( v30 != (struct _RTL_BALANCED_NODE *)((char *)v31 + 64) )
                  v23 = &v30[-1].Children[1];
                if ( !v23 )
                {
                  j = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v31 + 1);
                  v33 = v31;
                  if ( j )
                  {
                    v34 = *(struct _HAM_DEPENDENCY_LINK **)j;
                    if ( *(_QWORD *)j )
                    {
                      do
                      {
                        j = v34;
                        v34 = *(struct _HAM_DEPENDENCY_LINK **)v34;
                      }
                      while ( v34 );
                    }
                  }
                  else
                  {
                    for ( j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v31 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                          j;
                          j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)j + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
                    {
                      if ( *(struct _HAM_DEPENDENCY_LINK **)j == v33 )
                        break;
                      v33 = j;
                    }
                  }
                  if ( !j )
                    goto LABEL_27;
                  while ( 1 )
                  {
                    v35 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)j + 8);
                    v23 = 0LL;
                    if ( v35 != (struct _HAM_DEPENDENCY_LINK *)((char *)j + 64) )
                      v23 = (struct _RTL_BALANCED_NODE **)((char *)v35 - 16);
                    if ( v23 )
                      break;
                    j = HampDepGroupGetNextLink(j);
                    if ( !j )
                      goto LABEL_27;
                  }
                }
                if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)v31 + 3) != v23[1][1].Children[0] )
                  v23 = 0LL;
                if ( !v23 )
                  goto LABEL_27;
              }
            }
            v16 = (struct _RTL_BALANCED_NODE *)HampDepGroupGetNextLink((struct _HAM_DEPENDENCY_LINK *)v16);
          }
          while ( v16 );
          goto LABEL_27;
        }
      }
      v20 = v19;
LABEL_42:
      v19 = v19->Children[0];
      goto LABEL_43;
    }
    break;
  }
  v36 = *(_QWORD *)(v3 + 8);
  if ( (v36 & 1) != 0 )
  {
    if ( v36 == 1 )
      v37 = 0LL;
    else
      v37 = (struct _HAM_DEPENDENCY_LINK *)(v36 ^ (v3 | 1));
  }
  else
  {
    v37 = *(struct _HAM_DEPENDENCY_LINK **)(v3 + 8);
  }
  if ( v37 )
  {
    while ( 1 )
    {
      v38 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v37 + 8);
      v39 = 0LL;
      if ( v38 != (struct _HAM_DEPENDENCY_LINK *)((char *)v37 + 64) )
        v39 = (char *)v38 - 16;
      if ( v39 )
        break;
      v37 = HampDepGroupGetNextLink(v37);
      if ( !v37 )
        return;
    }
    while ( 1 )
    {
      v40 = v39[40];
      if ( v40 == 1 )
      {
        if ( *(_QWORD *)(*((_QWORD *)v39 + 6) + 768LL) <= *((_QWORD *)v39 + 8)
          && *(_QWORD *)(*((_QWORD *)v39 + 7) + 768LL) <= *((_QWORD *)v39 + 9) )
        {
          goto LABEL_100;
        }
      }
      else
      {
        if ( v40 != 3 )
          goto LABEL_100;
        v41 = *((_QWORD *)v39 + 7);
        if ( *(_QWORD *)(v41 + 768) <= *((_QWORD *)v39 + 9)
          && (HIWORD(*(_DWORD *)(v41 + 632)) & 3u) < (unsigned __int64)*((int *)v39 + 21) )
        {
          goto LABEL_100;
        }
      }
      *((_DWORD *)v39 + 9) |= 1u;
LABEL_100:
      v42 = 2 * *((_DWORD *)v39 + 9);
      v43 = *(_QWORD *)v39;
      v44 = v42 | 1;
      if ( (*((_DWORD *)v39 + 8) & 8) == 0 )
        v44 = v42;
      if ( v43 && (*(_BYTE *)(v43 + 536) & 8) != 0 || (v44 & 2) != 0 )
      {
        v45 = 3;
      }
      else if ( v40 == 3 )
      {
        v45 = *((_QWORD *)v39 + 8) < *(_QWORD *)(*((_QWORD *)v39 + 6) + 768LL) ? 5 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v43 + 536) & 0xC0u) >= 0x40 || (v46 = 3, (v44 & 1) == 0) )
          v46 = 1;
        v45 = 0;
        if ( (v46 == 1) != (*(_BYTE *)(*(_QWORD *)v39 + 540LL) == 1) )
        {
          LOBYTE(v45) = v46 == 1;
          ++v45;
        }
      }
      v47 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v39 + 2);
      v48 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v39 + 1);
      *((_DWORD *)v39 + 8) = v45 | *((_DWORD *)v39 + 8) & 0xFFFFFFF8;
      v39 = 0LL;
      if ( v47 != (struct _HAM_DEPENDENCY_LINK *)((char *)v48 + 64) )
        v39 = (char *)v47 - 16;
      if ( !v39 )
      {
        k = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v48 + 1);
        if ( k )
        {
          v50 = *(struct _HAM_DEPENDENCY_LINK **)k;
          if ( *(_QWORD *)k )
          {
            do
            {
              k = v50;
              v50 = *(struct _HAM_DEPENDENCY_LINK **)v50;
            }
            while ( v50 );
          }
        }
        else
        {
          for ( k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v48 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                k;
                k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( *(struct _HAM_DEPENDENCY_LINK **)k == v48 )
              break;
            v48 = k;
          }
        }
        if ( !k )
          return;
        while ( 1 )
        {
          v51 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)k + 8);
          v39 = 0LL;
          if ( v51 != (struct _HAM_DEPENDENCY_LINK *)((char *)k + 64) )
            v39 = (char *)v51 - 16;
          if ( v39 )
            break;
          k = HampDepGroupGetNextLink(k);
          if ( !k )
            return;
        }
      }
    }
  }
}
