/*
 * XREFs of ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x180053DE0
 * Callers:
 *     <none>
 * Callees:
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bfe2b9a5cf375f597f95bcb5ddfbfae___ @ 0x18005B510 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_5bfe2b9a5cf375f597f95bcb5ddfbfae___.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180061204 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::QueryService(__int64 a1, int a2, DWORD a3, __int128 *a4, __int64 a5, _QWORD *a6)
{
  PSRWLOCK v9; // rbx
  __int64 v10; // rdi
  unsigned int WindowService; // ebx
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  _BYTE Parameter[8]; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  HANDLE Timer; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  _QWORD v20[2]; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+64h] [rbp-1Ch]

  v19 = -2LL;
  *a6 = 0LL;
  CRPCTimeout::CRPCTimeout(Parameter, a3);
  v14 = 0;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( LODWORD(v9[9].Ptr) == GetCurrentThreadId() )
  {
    WindowService = -2147024891;
    v14 = -2147024891;
  }
  else
  {
    v14 = -2147319765;
    v15 = 0LL;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v20[0] = &v14;
    v20[1] = &v15;
    v21 = a2;
    v22 = *a4;
    CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bfe2b9a5cf375f597f95bcb5ddfbfae___(a1 + 152, v20);
    v10 = 0LL;
    if ( v14 >= 0 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    WindowService = v14;
    if ( v14 >= 0 )
    {
      WindowService = CoreQueryWindowService(v10, a4, a5, a6);
      v14 = WindowService;
    }
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      WindowService = v14;
    }
  }
  if ( v17 >= 0 )
  {
    v17 = -2147467259;
    CoDisableCallCancellation(0LL);
    if ( Timer )
      DeleteTimerQueueTimer(0LL, Timer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
  }
  return WindowService;
}
