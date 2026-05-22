/*
 * XREFs of ?_Change_array@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAXQEAUAttachedInputObjectEntry@InputSite@@_K1@Z @ 0x18000CB0C
 * Callers:
 *     ??$emplace_back@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAAEAUAttachedInputObjectEntry@InputSite@@$$QEAU23@@Z @ 0x18000C99C (--$emplace_back@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@InputSi.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<InputSite::AttachedInputObjectEntry>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v8; // rbx
  char *v9; // rbp
  char *v10; // rdi
  char *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 result; // rax

  v8 = *(char **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_18;
  v9 = *(char **)(a1 + 8);
  if ( v8 == v9 )
    goto LABEL_11;
  v10 = v8 + 56;
  do
  {
    if ( (*((_DWORD *)v10 + 2) & 3) == 1LL )
    {
      v11 = (char *)*((_QWORD *)v10 - 1);
    }
    else
    {
      if ( (*((_DWORD *)v10 + 2) & 3) != 2LL )
        goto LABEL_9;
      v11 = v10 - 48;
    }
    (**(void (__fastcall ***)(char *))v10)(v11);
LABEL_9:
    *((_QWORD *)v10 + 1) = 0LL;
    v8 += 72;
    v10 += 72;
  }
  while ( v8 != v9 );
  v8 = *(char **)a1;
LABEL_11:
  v12 = *(_QWORD *)(a1 + 16) - (_QWORD)v8;
  v13 = v12 / 72;
  if ( (unsigned __int64)(v12 / 72) > 0x38E38E38E38E38ELL )
    goto LABEL_19;
  if ( (unsigned __int64)(72 * v13) < 0x1000 )
    goto LABEL_17;
  if ( ((unsigned __int8)v8 & 0x1F) != 0
    || (v14 = *((_QWORD *)v8 - 1), v14 >= (unsigned __int64)v8)
    || (unsigned __int64)&v8[-v14 - 8] > 0x1F )
  {
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v12, v13);
    JUMPOUT(0x18000CC3ALL);
  }
  v8 = (char *)*((_QWORD *)v8 - 1);
LABEL_17:
  operator delete(v8);
LABEL_18:
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 72 * a3;
  result = 9 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 72 * a4;
  return result;
}
