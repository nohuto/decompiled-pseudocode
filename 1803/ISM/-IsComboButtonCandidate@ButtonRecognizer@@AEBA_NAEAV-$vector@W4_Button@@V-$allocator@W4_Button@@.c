/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800B74A8
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800B7B64 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800B8060 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@_JU?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800B8790 (--$_Sort_unchecked@PEAW4_Button@@_JU-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char v4; // si
  __int64 v5; // r12
  __int64 v6; // r9
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  char *v9; // r8
  char *v10; // r11
  __int64 v11; // r10
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbp
  char *v15; // rbx
  _DWORD *i; // r9
  signed __int64 v17; // r11
  __int64 **v18; // rdx
  __int64 *k; // r8
  char *v20; // r10
  _DWORD *v21; // r11
  _DWORD *v22; // r9
  _DWORD *v23; // rdx
  signed __int64 v24; // r9
  __int64 j; // rdx
  _DWORD *v27; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v28; // [rsp+30h] [rbp-38h]
  char v29; // [rsp+70h] [rbp+8h]

  v2 = (char **)a2;
  v4 = 0;
  std::vector<enum _Button>::vector<enum _Button>(&v27, a2);
  v5 = v28 - v27;
  LOBYTE(v6) = v29;
  std::_Sort_unchecked<enum _Button *,__int64,std::less<void>>(v27, v28, v5, v6);
  v7 = *(_QWORD **)(a1 + 32);
  v8 = (_QWORD *)*v7;
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_44;
  while ( 1 )
  {
    v9 = (char *)v8[6];
    if ( *((_BYTE *)v8 + 40) )
    {
      v10 = *v2;
      v11 = v8[6];
      v12 = (__int64)(v8[7] - (_QWORD)v9) >> 2;
      v13 = v12;
      v14 = (v2[1] - *v2) >> 2;
      if ( v14 > v12 )
      {
LABEL_10:
        v11 = v8[7];
      }
      else
      {
        v15 = (char *)(v9 - v10);
LABEL_5:
        for ( i = v10; i != *(_DWORD **)(a2 + 8); ++i )
        {
          if ( *(_DWORD *)((char *)i + (_QWORD)v15) != *i )
          {
            v11 += 4LL;
            v15 += 4;
            if ( v14 <= --v13 )
              goto LABEL_5;
            goto LABEL_10;
          }
        }
      }
      if ( v11 != v8[7] )
      {
        if ( v12 != v14 )
          goto LABEL_43;
        if ( v9 != (char *)v8[7] )
        {
          v17 = v10 - v9;
          while ( *(_DWORD *)v9 == *(_DWORD *)&v9[v17] )
          {
            v9 += 4;
            if ( v9 == (char *)v8[7] )
              goto LABEL_17;
          }
          goto LABEL_43;
        }
      }
LABEL_17:
      v2 = (char **)a2;
      goto LABEL_18;
    }
    v20 = (char *)v8[7];
    v21 = (_DWORD *)v8[6];
    v22 = v27;
    if ( v9 == v20 )
    {
LABEL_29:
      if ( v22 != v28 )
        goto LABEL_18;
    }
    else
    {
      while ( v22 != v28 )
      {
        if ( *v22 < *v21 )
          goto LABEL_18;
        v23 = v22 + 1;
        if ( *v21 < *v22 )
          v23 = v22;
        v22 = v23;
        if ( ++v21 == (_DWORD *)v20 )
          goto LABEL_29;
      }
    }
    if ( (v20 - v9) >> 2 != v5 )
      goto LABEL_43;
    if ( v9 != v20 )
      break;
LABEL_18:
    if ( !*((_BYTE *)v8 + 25) )
    {
      v18 = (__int64 **)v8[2];
      if ( *((_BYTE *)v18 + 25) )
      {
        for ( j = v8[1]; !*(_BYTE *)(j + 25) && v8 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
          v8 = (_QWORD *)j;
        v8 = (_QWORD *)j;
      }
      else
      {
        v8 = (_QWORD *)v8[2];
        for ( k = *v18; !*((_BYTE *)k + 25); k = (__int64 *)*k )
          v8 = k;
      }
    }
    if ( v8 == v7 )
      goto LABEL_44;
  }
  v24 = (char *)v27 - v9;
  while ( *(_DWORD *)v9 == *(_DWORD *)&v9[v24] )
  {
    v9 += 4;
    if ( v9 == v20 )
      goto LABEL_18;
  }
LABEL_43:
  v4 = 1;
LABEL_44:
  std::vector<enum _Button>::_Tidy((unsigned __int64 *)&v27);
  return v4;
}
