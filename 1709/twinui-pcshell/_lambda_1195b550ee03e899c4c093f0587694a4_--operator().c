/*
 * XREFs of _lambda_1195b550ee03e899c4c093f0587694a4_::operator() @ 0x18019D820
 * Callers:
 *     wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4___ @ 0x18019EAD4 (wil--ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4___.c)
 * Callees:
 *     ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@Z @ 0x180198998 (--0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplication.c)
 *     ??$emplace_back@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019E9C0 (--$emplace_back@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$a.c)
 *     ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019ECF0 (--$emplace@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$alloca.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_1195b550ee03e899c4c093f0587694a4_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  struct IApplicationFrameTitleBar **v3; // rax
  struct IApplicationFrameTitleBar *v4; // r13
  __int64 v5; // rbx
  _DWORD *v6; // r15
  _DWORD *v7; // rbx
  _DWORD *v8; // rcx
  struct IApplicationFrameTitleBar *v9; // r15
  struct IApplicationFrameWrapper *v10; // r12
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v11; // r13
  char *v12; // rbx
  volatile signed __int32 *v13; // rbx
  struct IApplicationFrameWrapper *v14; // [rsp+28h] [rbp-40h]
  char *v15; // [rsp+38h] [rbp-30h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp-28h]
  char *v17; // [rsp+48h] [rbp-20h] BYREF
  char *v18; // [rsp+50h] [rbp-18h]
  struct IApplicationFrameWrapper *v19; // [rsp+B0h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v20; // [rsp+B8h] [rbp+50h]
  RTL_SRWLOCK *v21; // [rsp+C0h] [rbp+58h]
  struct IApplicationFrameTitleBar *v22; // [rsp+C8h] [rbp+60h]

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)a1 + 384LL);
  AcquireSRWLockExclusive(v2);
  v21 = v2;
  v3 = *(struct IApplicationFrameTitleBar ***)(a1 + 24);
  if ( *(_BYTE *)(a1 + 32) )
  {
    v4 = *v3;
    v22 = *v3;
    v19 = **(struct IApplicationFrameWrapper ***)(a1 + 16);
    v14 = v19;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 392LL);
    v20 = *(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper ***)(a1 + 8);
    v6 = operator new(0x48uLL);
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<KBViewInfo>::`vftable';
    if ( v6 != (_DWORD *)-16LL )
      KBViewInfo::KBViewInfo((KBViewInfo *)(v6 + 4), *v20, v19, v4);
    v16 = v6;
    v15 = (char *)(v6 + 4);
    ((void (__fastcall *)(__int64, struct IApplicationFrameWrapper **, __int64, char **, __int64, struct IApplicationFrameWrapper *, _DWORD *))std::vector<std::shared_ptr<KBViewInfo>>::emplace<std::shared_ptr<KBViewInfo>>)(
      *(_QWORD *)a1 + 392LL,
      &v19,
      v5,
      &v15,
      -2LL,
      v14,
      v6);
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        v7 = v16;
        (**(void (__fastcall ***)(_DWORD *))v16)(v16);
        if ( !_InterlockedDecrement(v7 + 3) )
        {
          v8 = v16;
LABEL_14:
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
    }
  }
  else
  {
    v9 = *v3;
    v20 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)*v3;
    v10 = **(struct IApplicationFrameWrapper ***)(a1 + 16);
    v11 = *(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper ***)(a1 + 8);
    v12 = (char *)operator new(0x48uLL);
    v19 = (struct IApplicationFrameWrapper *)v12;
    *((_DWORD *)v12 + 2) = 1;
    *((_DWORD *)v12 + 3) = 1;
    *(_QWORD *)v12 = &std::_Ref_count_obj<KBViewInfo>::`vftable';
    if ( v12 != (char *)-16LL )
      KBViewInfo::KBViewInfo((KBViewInfo *)(v12 + 16), *v11, v10, v9);
    v18 = v12;
    v17 = v12 + 16;
    std::vector<std::shared_ptr<KBViewInfo>>::emplace_back<std::shared_ptr<KBViewInfo>>(*(_QWORD *)a1 + 392LL, &v17);
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v13 = (volatile signed __int32 *)v18;
        (**(void (__fastcall ***)(char *))v18)(v18);
        if ( !_InterlockedDecrement(v13 + 3) )
        {
          v8 = v18;
          goto LABEL_14;
        }
      }
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
