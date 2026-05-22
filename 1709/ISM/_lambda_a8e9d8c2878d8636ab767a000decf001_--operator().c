/*
 * XREFs of _lambda_a8e9d8c2878d8636ab767a000decf001_::operator() @ 0x180093A88
 * Callers:
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 *     wil::details::lambda_call__lambda_a8e9d8c2878d8636ab767a000decf001___::_lambda_call__lambda_a8e9d8c2878d8636ab767a000decf001___ @ 0x180096398 (wil--details--lambda_call__lambda_a8e9d8c2878d8636ab767a000decf001___--_lambda_call__lambda_a8e9.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXKQEBG@Z @ 0x18008F908 (-TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXKQEBG@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180097464 (-erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionDe.c)
 */

void __fastcall lambda_a8e9d8c2878d8636ab767a000decf001_::operator()(__int64 a1)
{
  PCWSTR StringRawBuffer; // rax
  int *v3; // rsi
  unsigned __int16 *v4; // rdi
  _DWORD *v5; // rcx
  RawInputProvidersTracing *v6; // rcx
  int *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 *v10; // rax
  __int64 *v11; // r8
  __int64 *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v14; // [rsp+30h] [rbp+8h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(**(_QWORD **)(a1 + 8) + 792LL), 0LL);
  v3 = *(int **)a1;
  v4 = (unsigned __int16 *)StringRawBuffer;
  v5 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v5 && *v5 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::TelemetrySpatialInputController_Removed_(v6, *v3, v4);
  }
  v7 = *(int **)a1;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *v7;
  EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 2816));
  v10 = *(__int64 **)(v8 + 2856);
  v11 = v10;
  v12 = (__int64 *)v10[1];
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( *((_DWORD *)v12 + 8) >= v9 )
    {
      v11 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  if ( v11 == v10 || v9 < *((_DWORD *)v11 + 8) )
    v11 = *(__int64 **)(v8 + 2856);
  if ( v11 == v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80004005LL);
    if ( v8 != -2816 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 2816));
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x453,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80004005LL);
  }
  else
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::erase(
      v8 + 2856,
      &v14);
    if ( v8 != -2816 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 2816));
  }
}
