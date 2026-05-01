/*
 * XREFs of ?get_HostId@ViewWrapperBase@@UEAAJPEA_K@Z @ 0x1800509F0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     _lambda_212ff9793df855e45456e1ed2b184a0d_::operator() @ 0x180054580 (_lambda_212ff9793df855e45456e1ed2b184a0d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_HostId(ViewWrapperBase *this, unsigned __int64 *a2)
{
  unsigned __int64 *v4; // rsi
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (unsigned __int64 *)((char *)this + 168);
  if ( *((_QWORD *)this + 21) != -1LL )
  {
LABEL_2:
    *a2 = *v4;
    return 0LL;
  }
  v6 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 296LL);
  AcquireSRWLockShared(v6);
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(**(_QWORD **)(*((_QWORD *)this + 20) + 520LL)
                                                                         + 288LL))(
            *(_QWORD *)(*((_QWORD *)this + 20) + 520LL),
            v7,
            v4);
    v8 = v11;
    if ( v11 >= 0 )
    {
      if ( v6 )
        ReleaseSRWLockShared(v6);
      goto LABEL_2;
    }
    v9 = (unsigned int)v11;
    v10 = 1718LL;
  }
  else
  {
    v8 = -2147023728;
    v9 = 2147943568LL;
    v10 = 1717LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)v9,
    -2);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}
