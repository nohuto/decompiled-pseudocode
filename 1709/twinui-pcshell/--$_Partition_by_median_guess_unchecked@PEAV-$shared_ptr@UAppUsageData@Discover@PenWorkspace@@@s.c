/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAV12@@0@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV20@1@Z@Z @ 0x1800EC4EC
 * Callers:
 *     ??$_Sort_unchecked1@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JAEAP6A_NAEAV10@2@Z@Z @ 0x1800EC384 (--$_Sort_unchecked1@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00AEAP6A_NAEAV10@1@Z@Z @ 0x1800ECCE4 (--$_Med3_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall std::_Partition_by_median_guess_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        char **a1,
        char *a2,
        char *a3,
        unsigned __int8 (__fastcall **a4)(_QWORD *, char *))
{
  char *v5; // r15
  char *v7; // rbp
  __int64 v8; // rax
  char *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  char *v13; // rbp
  char *v14; // rbx
  char *v15; // rdi
  char *v16; // rdi
  char *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  bool v20; // zf
  char *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char **result; // rax

  v5 = a3 - 16;
  v7 = a3;
  v8 = (a3 - 16 - a2) >> 4;
  v9 = &a2[16 * (((a3 - a2) >> 4) / 2)];
  if ( v8 <= 40 )
  {
    std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      a2,
      v9,
      a3 - 16);
  }
  else
  {
    v10 = (v8 + 1) / 8;
    v11 = 16 * v10;
    v12 = 32 * v10;
    v13 = &a2[16 * v10];
    std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      a2,
      v13,
      &a2[32 * v10]);
    std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      &v9[-v11],
      v9,
      &v9[v11]);
    std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      &v5[v12 / 0xFFFFFFFFFFFFFFF8uLL],
      &v5[v11 / 0xFFFFFFFFFFFFFFF8uLL],
      (char *)v5);
    std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      v13,
      v9,
      &v5[v11 / 0xFFFFFFFFFFFFFFF8uLL]);
    v7 = a3;
  }
  v14 = v9 + 16;
  if ( a2 < v9 )
  {
    do
    {
      v15 = v9 - 16;
      if ( (*a4)((_QWORD *)v9 - 2, v9) )
        break;
      if ( (*a4)(v9, v9 - 16) )
        break;
      v9 -= 16;
    }
    while ( a2 < v15 );
  }
  while ( v14 < v7 && !(*a4)(v14, v9) && !(*a4)(v9, v14) )
    v14 += 16;
  v16 = v14;
  v17 = v9;
  while ( 1 )
  {
    while ( v16 < v7 )
    {
      if ( (*a4)(v9, v16) )
        goto LABEL_19;
      if ( (*a4)(v16, v9) )
        break;
      if ( v14 != v16 )
      {
        v18 = *((_QWORD *)v14 + 1);
        *((_QWORD *)v14 + 1) = *((_QWORD *)v16 + 1);
        *((_QWORD *)v16 + 1) = v18;
        v19 = *(_QWORD *)v14;
        *(_QWORD *)v14 = *(_QWORD *)v16;
        *(_QWORD *)v16 = v19;
      }
      v14 += 16;
LABEL_19:
      v16 += 16;
    }
    v20 = v17 == a2;
    if ( v17 > a2 )
    {
      v21 = v17 - 16;
      do
      {
        if ( !(*a4)(v21, v9) )
        {
          if ( (*a4)(v9, v21) )
            break;
          v9 -= 16;
          if ( v9 != v21 )
          {
            v22 = *((_QWORD *)v9 + 1);
            *((_QWORD *)v9 + 1) = *((_QWORD *)v21 + 1);
            *((_QWORD *)v21 + 1) = v22;
            v23 = *(_QWORD *)v9;
            *(_QWORD *)v9 = *(_QWORD *)v21;
            *(_QWORD *)v21 = v23;
          }
        }
        v17 -= 16;
        v21 -= 16;
      }
      while ( a2 < v17 );
      v20 = v17 == a2;
    }
    if ( v20 )
      break;
    v17 -= 16;
    if ( v16 != v7 )
    {
      v33 = *((_QWORD *)v16 + 1);
      *((_QWORD *)v16 + 1) = *((_QWORD *)v17 + 1);
      *((_QWORD *)v17 + 1) = v33;
      v34 = *(_QWORD *)v16;
      *(_QWORD *)v16 = *(_QWORD *)v17;
      *(_QWORD *)v17 = v34;
      goto LABEL_19;
    }
    v9 -= 16;
    if ( v17 != v9 )
    {
      v28 = *((_QWORD *)v17 + 1);
      *((_QWORD *)v17 + 1) = *((_QWORD *)v9 + 1);
      *((_QWORD *)v9 + 1) = v28;
      v29 = *(_QWORD *)v17;
      *(_QWORD *)v17 = *(_QWORD *)v9;
      *(_QWORD *)v9 = v29;
    }
    v30 = *((_QWORD *)v14 - 1);
    v14 -= 16;
    v31 = *((_QWORD *)v9 + 1);
    *((_QWORD *)v9 + 1) = v30;
    *((_QWORD *)v14 + 1) = v31;
    v32 = *(_QWORD *)v9;
    *(_QWORD *)v9 = *(_QWORD *)v14;
    *(_QWORD *)v14 = v32;
  }
  if ( v16 != v7 )
  {
    if ( v14 != v16 )
    {
      v24 = *((_QWORD *)v9 + 1);
      *((_QWORD *)v9 + 1) = *((_QWORD *)v14 + 1);
      *((_QWORD *)v14 + 1) = v24;
      v25 = *(_QWORD *)v9;
      *(_QWORD *)v9 = *(_QWORD *)v14;
      *(_QWORD *)v14 = v25;
    }
    v26 = *((_QWORD *)v9 + 1);
    v14 += 16;
    *((_QWORD *)v9 + 1) = *((_QWORD *)v16 + 1);
    *((_QWORD *)v16 + 1) = v26;
    v27 = *(_QWORD *)v9;
    *(_QWORD *)v9 = *(_QWORD *)v16;
    v9 += 16;
    *(_QWORD *)v16 = v27;
    goto LABEL_19;
  }
  result = a1;
  a1[1] = v14;
  *a1 = v9;
  return result;
}
