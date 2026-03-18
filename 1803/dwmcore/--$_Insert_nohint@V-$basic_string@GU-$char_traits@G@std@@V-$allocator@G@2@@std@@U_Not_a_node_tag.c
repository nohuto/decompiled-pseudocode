/*
 * XREFs of ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180146E94
 * Callers:
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAXIIPEBG@Z @ 0x180147484 (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAXIIPEBG@Z.c)
 * Callees:
 *     ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180146554 (--$_Insert_at@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag@2@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>(
        unsigned __int64 **a1,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  unsigned __int64 *v4; // r15
  unsigned __int64 *v8; // r9
  char v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbp
  char *v12; // rax
  char *v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  signed __int64 v16; // rdx
  unsigned __int16 v17; // r11
  int v18; // eax
  bool v19; // sf
  unsigned __int64 *v20; // rax
  char v21; // r8
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 i; // rcx
  char *v25; // rcx
  unsigned __int64 *v26; // r8
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  signed __int64 v30; // r8
  unsigned __int16 v31; // si
  int v32; // ecx
  unsigned __int64 v34; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = *a1;
  v9 = 1;
  v10 = (*a1)[1];
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v11 = *((_QWORD *)a4 + 2);
    while ( 1 )
    {
      v12 = (char *)(v10 + 32);
      v8 = (unsigned __int64 *)v10;
      if ( *(_QWORD *)(v10 + 56) >= 8uLL )
        v12 = *(char **)(v10 + 32);
      v13 = a4;
      if ( *((_QWORD *)a4 + 3) >= 8uLL )
        v13 = *(char **)a4;
      v14 = *(_QWORD *)(v10 + 48);
      v15 = *((_QWORD *)a4 + 2);
      if ( v14 < v11 )
        v15 = *(_QWORD *)(v10 + 48);
      if ( v15 )
      {
        v16 = v13 - v12;
        while ( 1 )
        {
          v17 = *(_WORD *)&v12[v16];
          if ( v17 != *(_WORD *)v12 )
            break;
          v12 += 2;
          if ( !--v15 )
            goto LABEL_13;
        }
        v18 = v17 < *(_WORD *)v12 ? -1 : 1;
      }
      else
      {
LABEL_13:
        v18 = 0;
      }
      v19 = v18 < 0;
      if ( v18 )
        goto LABEL_18;
      if ( v11 < v14 )
        goto LABEL_21;
      if ( v11 <= v14 )
        break;
LABEL_19:
      v10 = *(_QWORD *)(v10 + 16);
      v9 = 0;
LABEL_22:
      if ( *(_BYTE *)(v10 + 25) )
        goto LABEL_23;
    }
    v19 = 0;
LABEL_18:
    if ( v19 )
    {
LABEL_21:
      v10 = *(_QWORD *)v10;
      v9 = 1;
      goto LABEL_22;
    }
    goto LABEL_19;
  }
LABEL_23:
  v20 = v8;
  if ( v9 )
  {
    if ( v8 == (unsigned __int64 *)*v4 )
    {
      v21 = 1;
      goto LABEL_26;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v20 = (unsigned __int64 *)v8[2];
    }
    else
    {
      v23 = *v8;
      if ( *(_BYTE *)(*v8 + 25) )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25) && v20 == *(unsigned __int64 **)i; i = *(_QWORD *)(i + 8) )
          v20 = (unsigned __int64 *)i;
        if ( !*((_BYTE *)v20 + 25) )
          v20 = (unsigned __int64 *)i;
      }
      else
      {
        do
        {
          v20 = (unsigned __int64 *)v23;
          v23 = *(_QWORD *)(v23 + 16);
        }
        while ( !*(_BYTE *)(v23 + 25) );
      }
    }
  }
  v25 = a4;
  if ( *((_QWORD *)a4 + 3) >= 8uLL )
    v25 = *(char **)a4;
  v26 = v20 + 4;
  if ( v20[7] >= 8 )
    v26 = (unsigned __int64 *)v20[4];
  v27 = *((_QWORD *)a4 + 2);
  v28 = v20[6];
  v29 = v28;
  if ( v27 < v28 )
    v29 = *((_QWORD *)a4 + 2);
  if ( v29 )
  {
    v30 = (char *)v26 - v25;
    while ( 1 )
    {
      v31 = *(_WORD *)&v25[v30];
      if ( v31 != *(_WORD *)v25 )
        break;
      v25 += 2;
      if ( !--v29 )
        goto LABEL_48;
    }
    v32 = v31 < *(_WORD *)v25 ? -1 : 1;
  }
  else
  {
LABEL_48:
    v32 = 0;
  }
  if ( !v32 )
  {
    if ( v28 >= v27 )
      v32 = v28 > v27;
    else
      v32 = -1;
  }
  if ( v32 >= 0 )
  {
    *(_QWORD *)a2 = v20;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v21 = v9;
LABEL_26:
  v22 = std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
          a1,
          &v34,
          v21,
          v8,
          (__int64)a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v22;
  return a2;
}
