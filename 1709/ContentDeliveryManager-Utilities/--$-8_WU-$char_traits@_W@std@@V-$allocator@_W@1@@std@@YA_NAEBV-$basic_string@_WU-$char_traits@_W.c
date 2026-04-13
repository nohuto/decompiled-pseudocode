/*
 * XREFs of ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x180078124
 * Callers:
 *     _lambda_db72fcd2b90ad21a11f12458f1c3f50c_::operator() @ 0x180075808 (_lambda_db72fcd2b90ad21a11f12458f1c3f50c_--operator().c)
 *     ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x1800790EC (--$_Insert@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$_List_unchecke.c)
 *     ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x180086964 (--$_Insert@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U_Nil@2@@-$_Hash@.c)
 *     ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B4DC (-NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedC.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator==<wchar_t>(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  bool i; // zf
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v4 = v2;
  if ( v3 < v2 )
    v4 = v3;
  for ( i = v4 == 0; ; i = v4 == 0 )
  {
    if ( i )
    {
      v6 = 0;
      goto LABEL_12;
    }
    if ( *(_WORD *)a1 != *(_WORD *)a2 )
      break;
    a1 = (_QWORD *)((char *)a1 + 2);
    a2 = (_QWORD *)((char *)a2 + 2);
    --v4;
  }
  v6 = *(_WORD *)a1 < *(_WORD *)a2 ? -1 : 1;
LABEL_12:
  v7 = v6;
  v8 = v3 != v2;
  if ( v3 < v2 )
    v8 = -1;
  if ( v7 )
    v8 = v7;
  return v8 == 0;
}
