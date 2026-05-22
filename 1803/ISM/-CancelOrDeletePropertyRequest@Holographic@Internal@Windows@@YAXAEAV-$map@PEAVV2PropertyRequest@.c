/*
 * XREFs of ?CancelOrDeletePropertyRequest@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@AEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@5@@Z @ 0x1800C1E18
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800030E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEAVV2PropertyRequest@Holographic@Internal@Windows@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEAVV2PropertyRequest@Holographic@Internal@Windows@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800CFF50 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEAVV2PropertyRequest@Holographic@Inter.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@PEAX@1@@Z @ 0x1800CFF8C (--$_Insert_hint@AEAU-$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V-$unique_ptr@VV2.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::CancelOrDeletePropertyRequest(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        const char *a4)
{
  _QWORD *v6; // rcx
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v8; // rbp
  struct _OVERLAPPED *v9; // r14
  char *Ptr; // rcx
  const char *v11; // r9
  int LastError; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  const char *v15; // rbx
  __int64 *v16; // rax
  void *v17; // rax
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v21; // [rsp+58h] [rbp+10h] BYREF
  const char *v22; // [rsp+60h] [rbp+18h] BYREF

  v6 = (_QWORD *)*a2;
  if ( *(_DWORD *)(*a2 + 104) != -2147023899 )
  {
    *a2 = 0LL;
LABEL_25:
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int64, const char *))(*v6 + 8LL))(v6, 1LL, a3, a4);
    return;
  }
  v7 = (RTL_SRWLOCK *)v6[5];
  v8 = v7 + 14;
  v9 = (struct _OVERLAPPED *)((unsigned __int64)(v6 + 1) & -(__int64)(v6 != 0LL));
  AcquireSRWLockShared(v7 + 14);
  Ptr = (char *)v7[16].Ptr;
  if ( (unsigned __int64)(Ptr - 1) > 0xFFFFFFFFFFFFFFFDuLL || CancelIoEx(Ptr, v9) )
  {
    if ( v7 != (RTL_SRWLOCK *)-112LL )
      ReleaseSRWLockShared(v7 + 14);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x10C,
                  (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
                  v11);
    if ( v8 )
      ReleaseSRWLockShared(v8);
  }
  if ( LastError < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      (const char *)(unsigned int)LastError);
  v13 = *a1;
  v14 = *a2;
  v15 = (const char *)v13;
  v21 = *a2;
  v16 = *(__int64 **)(v13 + 8);
  if ( *((_BYTE *)v16 + 25) )
    goto LABEL_20;
  do
  {
    a3 = v16[4];
    a4 = (const char *)v16;
    if ( a3 >= v14 )
      v16 = (__int64 *)*v16;
    else
      v16 = (__int64 *)v16[2];
    if ( a3 >= v14 )
      v15 = a4;
  }
  while ( !*((_BYTE *)v16 + 25) );
  if ( v15 == (const char *)v13 || v14 < *((_QWORD *)v15 + 4) )
  {
LABEL_20:
    v22 = (const char *)&v21;
    v17 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<Windows::Internal::Holographic::V2PropertyRequest * &&>,std::tuple<>>(
                    a1,
                    v13,
                    &v22);
    std::_Tree<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::_Insert_hint<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>> &,std::_Tree_node<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,void *> *>(
      (int)a1,
      v17);
    v15 = v22;
  }
  v18 = (unsigned __int64 *)(v15 + 40);
  if ( *v18 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x11F,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      a4);
    JUMPOUT(0x1800C1FB2LL);
  }
  if ( v18 != a2 )
  {
    v19 = *a2;
    *a2 = 0LL;
    v6 = (_QWORD *)*v18;
    *v18 = v19;
    goto LABEL_25;
  }
}
