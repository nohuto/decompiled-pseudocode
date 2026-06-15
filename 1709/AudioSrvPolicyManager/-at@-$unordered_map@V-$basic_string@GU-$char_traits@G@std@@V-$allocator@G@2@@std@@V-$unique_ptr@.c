/*
 * XREFs of ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800256C0
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180024D80 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180024E60 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800250F0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(_QWORD *a1, char *a2)
{
  char *v2; // r8
  __int64 v3; // r11
  char *v5; // r9
  unsigned __int64 v6; // rcx
  __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // rcx
  _QWORD *j; // rax
  _QWORD *v13; // rdx
  char *v14; // r9
  unsigned __int64 v15; // rbp
  char *v16; // r10
  __int64 v17; // rdi
  __int64 v18; // rsi
  signed __int64 v19; // r10
  unsigned __int16 v20; // dx
  int v21; // edx
  _QWORD *v22; // rdx
  signed __int64 v23; // r8
  unsigned __int16 v24; // r9
  int v25; // edx

  v2 = a2;
  v3 = *((_QWORD *)a2 + 2);
  v5 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v5 = *(char **)a2;
  v6 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v6 < 2 * v3; i = 0x100000001B3LL * (v8 ^ i) )
    v8 = (unsigned __int8)v5[v6++];
  v9 = a1[3];
  v10 = 2 * (i & a1[6]);
  v11 = (_QWORD *)a1[1];
  for ( j = *(_QWORD **)(v9 + 16 * (i & a1[6])); ; j = (_QWORD *)*j )
  {
    if ( *(_QWORD **)(v9 + 8 * v10) == v11 )
      v13 = (_QWORD *)a1[1];
    else
      v13 = **(_QWORD ***)(v9 + 8 * v10 + 8);
    if ( j == v13 )
      goto LABEL_34;
    v14 = v2;
    if ( *((_QWORD *)v2 + 3) >= 8uLL )
      v14 = *(char **)v2;
    v15 = j[5];
    v16 = (char *)(j + 2);
    if ( v15 >= 8 )
      v16 = (char *)j[2];
    v17 = j[4];
    if ( v17 == v3 )
    {
      v18 = j[4];
      if ( v17 )
      {
        v19 = v16 - v14;
        while ( 1 )
        {
          v20 = *(_WORD *)&v14[v19];
          if ( v20 != *(_WORD *)v14 )
            break;
          v14 += 2;
          if ( !--v18 )
            goto LABEL_19;
        }
        v21 = v20 < *(_WORD *)v14 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v21 = 0;
      }
      if ( !v21 )
        break;
    }
  }
  v22 = j + 2;
  if ( v15 >= 8 )
    v22 = (_QWORD *)*v22;
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(char **)v2;
  if ( v3 != v17 )
    goto LABEL_34;
  if ( v3 )
  {
    v23 = v2 - (char *)v22;
    while ( 1 )
    {
      v24 = *(_WORD *)((char *)v22 + v23);
      if ( v24 != *(_WORD *)v22 )
        break;
      v22 = (_QWORD *)((char *)v22 + 2);
      if ( !--v3 )
        goto LABEL_32;
    }
    v25 = v24 < *(_WORD *)v22 ? -1 : 1;
  }
  else
  {
LABEL_32:
    v25 = 0;
  }
  if ( v25 )
LABEL_34:
    j = (_QWORD *)a1[1];
  if ( j == v11 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return j + 6;
}
