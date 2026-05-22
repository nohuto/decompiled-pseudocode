/*
 * XREFs of ??$_Eqrange@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004CDC8
 * Callers:
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004BFF4 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV-$basic_string@DU-$char_.c)
 *     ?CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004C0C8 (-CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKAEBV-$basic_string@DU-$char_traits@D@st.c)
 * Callees:
 *     memcmp_0 @ 0x1800E3211 (memcmp_0.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::string>(
        __int64 *a1,
        __int64 *a2,
        const void **a3)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rbx
  size_t v8; // r15
  const void **v9; // r14
  const void *v10; // rdx
  const void *v11; // rcx
  size_t v12; // rbp
  size_t v13; // r8
  int v14; // eax
  bool v15; // sf
  const void *v16; // rcx
  size_t v17; // r8
  int v18; // eax
  bool v19; // sf
  __int64 *v20; // rbx
  size_t v21; // r14
  const void *v22; // rdx
  __int64 v23; // r15
  const void *v24; // rcx
  size_t v25; // rbp
  size_t v26; // r8
  int v27; // eax
  bool v28; // sf
  __int64 *result; // rax

  v3 = *a1;
  v5 = *a1;
  v6 = *a1 + 8;
  v7 = *(_QWORD *)v6;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    v8 = (size_t)a3[2];
    while ( 1 )
    {
      v9 = (const void **)(v7 + 32);
      v10 = a3;
      if ( (unsigned __int64)a3[3] >= 0x10 )
        v10 = *a3;
      v11 = (const void *)(v7 + 32);
      if ( *(_QWORD *)(v7 + 56) >= 0x10uLL )
        v11 = *v9;
      v12 = *(_QWORD *)(v7 + 48);
      v13 = v12;
      if ( v8 < v12 )
        v13 = v8;
      v14 = memcmp_0(v11, v10, v13);
      v15 = v14 < 0;
      if ( v14 )
        goto LABEL_13;
      if ( v12 < v8 )
        goto LABEL_28;
      if ( v12 <= v8 )
        break;
LABEL_14:
      if ( !*(_BYTE *)(v5 + 25) )
        goto LABEL_27;
      if ( *(_QWORD *)(v7 + 56) >= 0x10uLL )
        v9 = (const void **)*v9;
      v16 = a3;
      if ( (unsigned __int64)a3[3] >= 0x10 )
        v16 = *a3;
      v17 = v8;
      if ( v12 < v8 )
        v17 = v12;
      v18 = memcmp_0(v16, v9, v17);
      v19 = v18 < 0;
      if ( v18 )
        goto LABEL_25;
      if ( v8 < v12 )
        goto LABEL_26;
      if ( v8 <= v12 )
      {
        v19 = 0;
LABEL_25:
        if ( v19 )
LABEL_26:
          v5 = v7;
      }
LABEL_27:
      v3 = v7;
      v7 = *(_QWORD *)v7;
LABEL_29:
      if ( *(_BYTE *)(v7 + 25) )
        goto LABEL_30;
    }
    v15 = 0;
LABEL_13:
    if ( v15 )
    {
LABEL_28:
      v7 = *(_QWORD *)(v7 + 16);
      goto LABEL_29;
    }
    goto LABEL_14;
  }
LABEL_30:
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = v5;
  v20 = *(__int64 **)v6;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    v21 = (size_t)a3[2];
    do
    {
      v22 = v20 + 4;
      v23 = (__int64)v20;
      if ( (unsigned __int64)v20[7] >= 0x10 )
        v22 = (const void *)v20[4];
      v24 = a3;
      if ( (unsigned __int64)a3[3] >= 0x10 )
        v24 = *a3;
      v25 = v20[6];
      v26 = v21;
      if ( v25 < v21 )
        v26 = v20[6];
      v27 = memcmp_0(v24, v22, v26);
      v28 = v27 < 0;
      if ( !v27 )
      {
        if ( v21 < v25 )
        {
          v27 = -1;
LABEL_52:
          v20 = (__int64 *)*v20;
          goto LABEL_46;
        }
        if ( v21 > v25 )
        {
          v27 = 1;
          goto LABEL_45;
        }
        v27 = 0;
        v28 = 0;
      }
      if ( v28 )
        goto LABEL_52;
LABEL_45:
      v20 = (__int64 *)v20[2];
LABEL_46:
      if ( v27 >= 0 )
        v23 = v5;
      v5 = v23;
    }
    while ( !*((_BYTE *)v20 + 25) );
  }
  result = a2;
  a2[1] = v5;
  *a2 = v3;
  return result;
}
