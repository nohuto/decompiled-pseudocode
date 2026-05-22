/*
 * XREFs of _lambda_56b34956b0f210a8c55368f903dac87a_::operator() @ 0x1800A5D28
 * Callers:
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A5970 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@Z @ 0x1800A4840 (-SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800AB0BC (-erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteraction.c)
 */

void __fastcall lambda_56b34956b0f210a8c55368f903dac87a_::operator()(__int64 a1)
{
  PCWSTR StringRawBuffer; // rax
  int *v3; // rsi
  const WCHAR *v4; // rdi
  _DWORD *v5; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v6; // rcx
  int *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 *v10; // r9
  __int64 *v11; // rcx
  __int64 *v12; // r8
  __int64 *v13; // rax
  unsigned int v14; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v16; // [rsp+30h] [rbp+8h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(**(_QWORD **)(a1 + 8) + 24LL), 0LL);
  v3 = *(int **)a1;
  v4 = StringRawBuffer;
  v5 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v5 && *v5 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Removed_(v6, *v3, v4);
  }
  v7 = *(int **)a1;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *v7;
  EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 424));
  v11 = *(__int64 **)(v8 + 464);
  v12 = v11;
  v13 = (__int64 *)v11[1];
  if ( *((_BYTE *)v13 + 25) )
    goto LABEL_13;
  do
  {
    v14 = *((_DWORD *)v13 + 8);
    v10 = v13;
    if ( v14 >= v9 )
      v13 = (__int64 *)*v13;
    else
      v13 = (__int64 *)v13[2];
    if ( v14 >= v9 )
      v12 = v10;
  }
  while ( !*((_BYTE *)v13 + 25) );
  if ( v12 == v11 || v9 < *((_DWORD *)v12 + 8) )
LABEL_13:
    v12 = *(__int64 **)(v8 + 464);
  if ( v12 == v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
    if ( v8 != -424 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 424));
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::erase(
      v8 + 464,
      &v16,
      v12,
      v10);
    if ( v8 != -424 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 424));
  }
}
