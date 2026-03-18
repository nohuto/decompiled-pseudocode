/*
 * XREFs of ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x18016B2B8
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x18016B520 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DataSourcePropertySet::GetPropertyValue(
        DataSourcePropertySet *this,
        int a2,
        struct CExpressionValue *a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v33; // [rsp+30h] [rbp+8h] BYREF
  int v34; // [rsp+38h] [rbp+10h] BYREF

  v34 = a2;
  v5 = *((_QWORD *)this + 6) & std::_Hash_bytes((const unsigned __int8 *)&v34, 4uLL);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)this,
           &v33,
           v5);
    if ( v7 == *v6 )
      break;
    if ( *(_DWORD *)(v7 + 16) == a2 )
    {
      v9 = *((_QWORD *)this + 1);
      goto LABEL_6;
    }
  }
  v7 = *((_QWORD *)this + 1);
  v9 = v7;
LABEL_6:
  if ( v7 == v9 )
    return 2147483659LL;
  v11 = *(unsigned int *)(v7 + 20);
  v12 = *((_QWORD *)this + 8);
  v13 = *(_DWORD *)(v12 + 8 * v11);
  if ( !v13 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v14 = v13 - 17;
  if ( !v14 )
  {
    *(_BYTE *)v8 = *(_BYTE *)((*(_DWORD *)(v12 + 8 * v11 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 12));
    *(_DWORD *)(v8 + 72) = 17;
    goto LABEL_30;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *(_DWORD *)v8 = *(_DWORD *)((*(_DWORD *)(v12 + 8 * v11 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 12));
    *(_DWORD *)(v8 + 72) = 18;
    goto LABEL_30;
  }
  v16 = v15 - 17;
  if ( !v16 )
  {
    v30 = *((_QWORD *)this + 12);
    v31 = *(_DWORD *)(v12 + 8 * v11 + 4) & 0x1FFFFFFF;
    *(_DWORD *)(v8 + 72) = 35;
    *(_QWORD *)v8 = *(_QWORD *)(v31 + v30);
    goto LABEL_30;
  }
  v17 = v16 - 17;
  if ( !v17 )
  {
    v28 = *((_QWORD *)this + 12);
    v29 = *(_DWORD *)(v12 + 8 * v11 + 4) & 0x1FFFFFFF;
    *(_DWORD *)(v8 + 72) = 52;
    *(_QWORD *)v8 = *(_QWORD *)(v29 + v28);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v29 + v28 + 8);
    goto LABEL_30;
  }
  v18 = v17 - 17;
  if ( !v18 )
  {
    v26 = *(_DWORD *)(v12 + 8 * v11 + 4);
    v27 = *((_QWORD *)this + 12);
    *(_DWORD *)(v8 + 72) = 69;
    goto LABEL_23;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v26 = *(_DWORD *)(v12 + 8 * v11 + 4);
    v27 = *((_QWORD *)this + 12);
    *(_DWORD *)(v8 + 72) = 70;
    goto LABEL_23;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v26 = *(_DWORD *)(v12 + 8 * v11 + 4);
    v27 = *((_QWORD *)this + 12);
    *(_DWORD *)(v8 + 72) = 71;
LABEL_23:
    *(_OWORD *)v8 = *(_OWORD *)((v26 & 0x1FFFFFFF) + v27);
    goto LABEL_30;
  }
  v21 = v20 - 33;
  if ( v21 )
  {
    if ( v21 != 161 )
      return 2147500037LL;
    v22 = *(_DWORD *)(v12 + 8 * v11 + 4);
    v23 = *((_QWORD *)this + 12);
    v22 &= 0x1FFFFFFFu;
    *(_DWORD *)(v8 + 72) = 265;
    *(_OWORD *)v8 = *(_OWORD *)(v22 + v23);
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v22 + v23 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(v22 + v23 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(v22 + v23 + 48);
  }
  else
  {
    v24 = *((_QWORD *)this + 12);
    v25 = *(_DWORD *)(v12 + 8 * v11 + 4) & 0x1FFFFFFF;
    *(_DWORD *)(v8 + 72) = 104;
    *(_OWORD *)v8 = *(_OWORD *)(v25 + v24);
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(v25 + v24 + 16);
  }
LABEL_30:
  *(_BYTE *)(v8 + 76) = 1;
  return 0LL;
}
