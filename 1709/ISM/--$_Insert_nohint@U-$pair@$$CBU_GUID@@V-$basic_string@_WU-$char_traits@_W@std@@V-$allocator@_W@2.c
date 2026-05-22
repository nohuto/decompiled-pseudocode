/*
 * XREFs of ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Nil@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Nil@1@@Z @ 0x1800BD084
 * Callers:
 *     ?AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800B36C4 (-AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@A.c)
 *     _lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator() @ 0x1800BB3BC (_lambda_ee46ae3407b0869cacd23b14ef71fd42_--operator().c)
 * Callees:
 *     ??$_Insert_at@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Nil@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Nil@1@@Z @ 0x1800BD9BC (--$_Insert_at@U-$pair@$$CBU_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@st.c)
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_nohint<std::pair<_GUID const,std::wstring>,std::_Nil>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        const void *a4)
{
  int v6; // r12d
  __int64 **v7; // r14
  __int64 *v8; // rsi
  int v9; // eax
  bool v10; // r13
  __int64 *v11; // rbx
  __int64 *v12; // rbx
  __int64 result; // rax
  __int64 *v14; // rax
  __int64 *i; // rax
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v6 = (int)a1;
  try
  {
    v7 = *a1;
    v11 = (*a1)[1];
    v8 = (__int64 *)*a1;
    v10 = 1;
    while ( !*((_BYTE *)v11 + 25) )
    {
      v8 = v11;
      v9 = memcmp_0(a4, v11 + 4, 0x10uLL);
      v10 = v9 < 0;
      if ( v9 >= 0 )
        v11 = (__int64 *)v11[2];
      else
        v11 = (__int64 *)*v11;
    }
    v12 = v8;
    if ( v10 )
    {
      if ( v8 == *v7 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_at<std::pair<_GUID const,std::wstring>,std::_Nil>(
                                     v6,
                                     (unsigned int)&v16,
                                     1,
                                     (_DWORD)v8,
                                     (__int64)a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v8 + 25) )
      {
        v12 = (__int64 *)v8[2];
      }
      else
      {
        v14 = (__int64 *)*v8;
        if ( *(_BYTE *)(*v8 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)*i; i = (__int64 *)i[1] )
            v12 = i;
          if ( !*((_BYTE *)v12 + 25) )
            v12 = i;
        }
        else
        {
          do
          {
            v12 = v14;
            v14 = (__int64 *)v14[2];
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
    }
    if ( memcmp_0(v12 + 4, a4, 0x10uLL) >= 0 )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_at<std::pair<_GUID const,std::wstring>,std::_Nil>(
                                   v6,
                                   (unsigned int)&v16,
                                   v10,
                                   (_DWORD)v8,
                                   (__int64)a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
