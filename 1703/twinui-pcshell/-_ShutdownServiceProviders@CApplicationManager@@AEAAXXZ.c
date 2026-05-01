/*
 * XREFs of ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1800106D8
 * Callers:
 *     ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x18000B710 (-v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___ @ 0x1800231D0 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::_ShutdownServiceProviders(CApplicationManager *this)
{
  unsigned int Ptr; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  IUnknown *v5; // rcx
  __int64 v6; // rcx
  IUnknown *v7; // rcx
  __int64 v8; // rcx
  IUnknown *v9; // rcx
  __int64 v10; // rcx
  IUnknown *v11; // rcx
  __int64 v12; // rcx
  IUnknown *v13; // rcx
  __int64 v14; // rcx
  IUnknown *v15; // rcx
  __int64 v16; // rcx
  IUnknown *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
  Windows::Internal::ComTaskPool::WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___(&v23);
  Windows::Internal::ComTaskPool::RunTask(3LL, 258LL, Ptr, 0LL);
  v3 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 67);
  if ( v4 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (IUnknown *)*((_QWORD *)this + 58);
  if ( v5 )
  {
    IUnknown_SetSite(v5, 0LL);
    v6 = *((_QWORD *)this + 58);
    if ( v6 )
    {
      *((_QWORD *)this + 58) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = (IUnknown *)*((_QWORD *)this + 66);
  if ( v7 )
  {
    IUnknown_SetSite(v7, 0LL);
    v8 = *((_QWORD *)this + 66);
    if ( v8 )
    {
      *((_QWORD *)this + 66) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = (IUnknown *)*((_QWORD *)this + 63);
  if ( v9 )
  {
    IUnknown_SetSite(v9, 0LL);
    v10 = *((_QWORD *)this + 63);
    if ( v10 )
    {
      *((_QWORD *)this + 63) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = (IUnknown *)*((_QWORD *)this + 85);
  if ( v11 )
  {
    IUnknown_SetSite(v11, 0LL);
    v12 = *((_QWORD *)this + 85);
    if ( v12 )
    {
      *((_QWORD *)this + 85) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  v13 = (IUnknown *)*((_QWORD *)this + 57);
  if ( v13 )
  {
    IUnknown_SetSite(v13, 0LL);
    v14 = *((_QWORD *)this + 57);
    if ( v14 )
    {
      *((_QWORD *)this + 57) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = (IUnknown *)*((_QWORD *)this + 59);
  if ( v15 )
  {
    IUnknown_SetSite(v15, 0LL);
    v16 = *((_QWORD *)this + 59);
    if ( v16 )
    {
      *((_QWORD *)this + 59) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = (IUnknown *)*((_QWORD *)this + 68);
  if ( v17 )
  {
    IUnknown_SetSite(v17, 0LL);
    v18 = *((_QWORD *)this + 68);
    if ( v18 )
    {
      *((_QWORD *)this + 68) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  v19 = *((_QWORD *)this + 62);
  if ( v19 )
  {
    *((_QWORD *)this + 62) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *((_QWORD *)this + 65);
  if ( v20 )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *((_QWORD *)this + 60);
  if ( v21 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *((_QWORD *)this + 61);
  if ( v22 )
  {
    *((_QWORD *)this + 61) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
}
