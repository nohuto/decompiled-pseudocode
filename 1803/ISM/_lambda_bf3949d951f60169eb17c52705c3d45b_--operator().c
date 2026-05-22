/*
 * XREFs of _lambda_bf3949d951f60169eb17c52705c3d45b_::operator() @ 0x180052164
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_bf3949d951f60169eb17c52705c3d45b_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180052CB0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_bf3949d951f60169eb17c52705c3d45b_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x1800523EC (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180052AB8 (--$CreateServer@VMPCManagerConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@P.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x18005345C (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
MPCManager *lambda_bf3949d951f60169eb17c52705c3d45b_::operator()()
{
  struct MPCManagerConnection *v0; // rbx
  int v1; // edi
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  _DWORD *v10; // rcx
  ISMTracing *v12; // rcx
  MPCManager *result; // rax
  MPCManager *v14; // rdx
  MPCManager *v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD); // rax
  __int128 v17; // [rsp+40h] [rbp-20h]
  MPCManager *v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF
  struct MPCManagerConnection *v22; // [rsp+88h] [rbp+28h] BYREF
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF

  v21 = 0LL;
  v0 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v1 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v24);
  if ( v1 < 0 )
  {
    v10 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v10 && *v10 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCManager_InitializationFailed_(v12, v1);
    }
  }
  else
  {
    v2 = v21;
    v21 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = CoreUICreate(&v21);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    v5 = v21;
    if ( !v21 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v4);
      __debugbreak();
    }
    v6 = v23;
    v23 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v5 + 48LL))(
           v5,
           v24,
           L"System\\MPCManagerPort",
           &v23);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    DWORD2(v17) = 1;
    *(_QWORD *)&v17 = 0LL;
    v19 = v17;
    v22 = 0LL;
    v9 = Microsoft::Bamo::BamoConnection::CreateServer<MPCManagerConnection>(
           v21,
           v23,
           (unsigned int)&v19,
           v8,
           (__int64)&v22);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x1800523EALL);
    }
    v0 = v22;
  }
  v18 = (MPCManager *)operator new(0x50uLL);
  result = MPCManager::MPCManager(v18, v0);
  v14 = result;
  v15 = MPCManager::s_instance;
  if ( MPCManager::s_instance != result )
  {
    if ( result )
    {
      _InterlockedIncrement((volatile signed __int32 *)result + 6);
      v0 = v22;
      v15 = MPCManager::s_instance;
    }
    result = v15;
    v15 = v14;
    MPCManager::s_instance = v14;
    if ( result )
    {
      result = (MPCManager *)(**((__int64 (__fastcall ***)(__int64))result + 2))((__int64)result + 16);
      v15 = MPCManager::s_instance;
    }
  }
  if ( v0 )
  {
    result = (MPCManager *)*((_QWORD *)v0 + 19);
    *((_QWORD *)v0 + 19) = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 6);
      v0 = v22;
    }
    if ( result )
      result = (MPCManager *)(**((__int64 (__fastcall ***)(__int64, MPCManager *))result + 2))(
                               (__int64)result + 16,
                               v14);
  }
  if ( v23 )
    result = (MPCManager *)(*(__int64 (__fastcall **)(__int64, MPCManager *))(*(_QWORD *)v23 + 16LL))(v23, v14);
  if ( v0 )
  {
    v16 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct MPCManagerConnection *, MPCManager *))(*(_QWORD *)v0 + 40LL))(
                                              v0,
                                              v14);
    result = (MPCManager *)(**v16)(v16);
  }
  if ( v21 )
    return (MPCManager *)(*(__int64 (__fastcall **)(__int64, MPCManager *))(*(_QWORD *)v21 + 16LL))(v21, v14);
  return result;
}
