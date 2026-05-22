/*
 * XREFs of ??$_Sort_unchecked@PEAW4_Button@@_JU?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800B8790
 * Callers:
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800B735C (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800B74A8 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800B7758 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@_JU?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800B8790 (--$_Sort_unchecked@PEAW4_Button@@_JU-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Sort_unchecked@PEAW4_Button@@_JU?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800B8790 (--$_Sort_unchecked@PEAW4_Button@@_JU-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1800B8A6C (--$_Partition_by_median_guess_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YA-AU-$pair@PEAW4_But.c)
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@_JW41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1800B8FD4 (--$_Pop_heap_hole_by_index@PEAW4_Button@@_JW41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41.c)
 */

__int64 __fastcall std::_Sort_unchecked<enum _Button *,__int64,std::less<void>>(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 result; // rax
  char *v7; // rbp
  char *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rbp
  char *i; // rbx
  int v14; // esi
  char *v15; // rdx
  char *j; // rax
  int v17; // [rsp+20h] [rbp-38h]
  char *v18; // [rsp+30h] [rbp-28h] BYREF
  char *v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  char *v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = a2;
  v4 = a4;
  result = (a2 - a1) >> 2;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_28;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(&v18, v8, v7, a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v9) = v4;
    if ( (__int64)((v18 - v8) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)((v7 - v19) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<enum _Button *,__int64,std::less<void>>(v19, v7, a3, v9);
      v7 = v18;
    }
    else
    {
      std::_Sort_unchecked<enum _Button *,__int64,std::less<void>>(v8, v18, a3, v9);
      v8 = v19;
    }
    result = (v7 - v8) >> 2;
  }
  while ( result > 32 );
  v21 = v7;
  if ( result <= 32 )
  {
LABEL_28:
    if ( result >= 2 && v8 != v7 )
    {
      result = (__int64)(v8 + 4);
      for ( i = v8 + 4; i != v7; result = (__int64)(v8 + 4) )
      {
        v14 = *(_DWORD *)i;
        v15 = i;
        if ( *(_DWORD *)i >= *(_DWORD *)v8 )
        {
          for ( j = i - 4; v14 < *(_DWORD *)j; j -= 4 )
          {
            *(_DWORD *)v15 = *(_DWORD *)j;
            v15 = j;
          }
          *(_DWORD *)v15 = v14;
        }
        else
        {
          memmove((void *)result, v8, i - v8);
          *(_DWORD *)v8 = v14;
        }
        i += 4;
      }
    }
  }
  else
  {
    v10 = (v7 - v8) >> 2;
    result = (v7 - v8) >> 3;
    if ( result > 0 )
    {
      v11 = (v7 - v8) >> 3;
      do
      {
        --v11;
        LOBYTE(v17) = v4;
        LODWORD(v20) = *(_DWORD *)&v8[4 * v11];
        result = std::_Pop_heap_hole_by_index<enum _Button *,__int64,enum _Button,std::less<void>>(
                   v8,
                   v11,
                   v10,
                   &v20,
                   v17);
      }
      while ( v11 > 0 );
      v7 = v21;
    }
    if ( v10 >= 2 )
    {
      v12 = v7 - 4;
      v20 = 4LL - (_QWORD)v8;
      do
      {
        LODWORD(v21) = *(_DWORD *)v12;
        *(_DWORD *)v12 = *(_DWORD *)v8;
        LOBYTE(v17) = v4;
        std::_Pop_heap_hole_by_index<enum _Button *,__int64,enum _Button,std::less<void>>(
          v8,
          0LL,
          (v12 - v8) >> 2,
          &v21,
          v17);
        v12 -= 4;
        result = v20;
      }
      while ( (__int64)&v12[v20] >> 2 >= 2 );
    }
  }
  return result;
}
