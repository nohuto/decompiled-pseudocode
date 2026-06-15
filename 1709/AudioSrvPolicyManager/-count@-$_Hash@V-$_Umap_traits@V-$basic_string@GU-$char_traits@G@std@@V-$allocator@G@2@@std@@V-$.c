/*
 * XREFs of ?count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180025304
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180024D80 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180024E60 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800250F0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  _QWORD *v5; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rbp
  _QWORD *j; // rax
  _QWORD *v14; // rcx
  char *v15; // rcx
  char *v16; // r10
  __int64 v17; // r9
  signed __int64 v18; // r10
  unsigned __int16 v19; // dx
  int v20; // ecx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  char *v23; // r9
  char *v24; // r10
  __int64 v25; // rdi
  signed __int64 v26; // r10
  unsigned __int16 v27; // dx
  int v28; // edx

  v3 = a2[2];
  v5 = a2;
  if ( a2[3] >= 8uLL )
    v5 = (_QWORD *)*a2;
  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v3; v7 = 0x100000001B3LL * (v9 ^ v7) )
    v9 = *((unsigned __int8 *)v5 + i++);
  v10 = a1[3];
  v11 = a1[1];
  v12 = 2 * (v7 & a1[6]);
  for ( j = *(_QWORD **)(v10 + 16 * (v7 & a1[6])); ; j = (_QWORD *)*j )
  {
    v14 = *(_QWORD *)(v10 + 8 * v12) == v11 ? (_QWORD *)a1[1] : **(_QWORD ***)(v10 + 8 * v12 + 8);
    if ( j == v14 )
      break;
    v15 = (char *)a2;
    if ( a2[3] >= 8uLL )
      v15 = (char *)*a2;
    v16 = (char *)(j + 2);
    if ( j[5] >= 8uLL )
      v16 = (char *)j[2];
    v17 = j[4];
    if ( v17 == v3 )
    {
      if ( v17 )
      {
        v18 = v16 - v15;
        while ( 1 )
        {
          v19 = *(_WORD *)&v15[v18];
          if ( v19 != *(_WORD *)v15 )
            break;
          v15 += 2;
          if ( !--v17 )
            goto LABEL_19;
        }
        v20 = v19 < *(_WORD *)v15 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v20 = 0;
      }
      if ( !v20 )
      {
        v21 = j;
        while ( 1 )
        {
          v22 = *(_QWORD *)(v10 + 8 * v12) == v11 ? (_QWORD *)a1[1] : **(_QWORD ***)(v10 + 8 * v12 + 8);
          if ( j == v22 )
            break;
          v23 = (char *)(j + 2);
          if ( j[5] >= 8uLL )
            v23 = (char *)j[2];
          v24 = (char *)a2;
          if ( a2[3] >= 8uLL )
            v24 = (char *)*a2;
          if ( v3 != j[4] )
            break;
          v25 = v3;
          if ( v3 )
          {
            v26 = v24 - v23;
            while ( 1 )
            {
              v27 = *(_WORD *)&v23[v26];
              if ( v27 != *(_WORD *)v23 )
                break;
              v23 += 2;
              if ( !--v25 )
                goto LABEL_37;
            }
            v28 = v27 < *(_WORD *)v23 ? -1 : 1;
          }
          else
          {
LABEL_37:
            v28 = 0;
          }
          if ( v28 )
            break;
          j = (_QWORD *)*j;
        }
        if ( v21 != j )
          goto LABEL_43;
        break;
      }
    }
  }
  j = (_QWORD *)a1[1];
  v21 = j;
  while ( v21 != j )
  {
LABEL_43:
    v21 = (_QWORD *)*v21;
    ++v6;
  }
  return v6;
}
