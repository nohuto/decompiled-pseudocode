/*
 * XREFs of ?IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@@PEAH@Z @ 0x180053F90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsServiceAvailable(__int64 a1, unsigned int a2, __int128 *a3, _DWORD *a4)
{
  bool v8; // cl
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  int IsWindowServiceSupported; // eax
  _DWORD *v15; // [rsp+20h] [rbp-48h]
  unsigned int v16; // [rsp+28h] [rbp-40h]
  __int128 i; // [rsp+2Ch] [rbp-3Ch] BYREF

  *a4 = 0;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = a4;
  v8 = 1;
  v9 = *(_QWORD *)(a1 + 312);
  v16 = a2;
  v10 = 0LL;
  for ( i = *a3; v10 < v9; ++v10 )
  {
    if ( !v8 )
      break;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8 * v10);
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
    IsWindowServiceSupported = CoreIsWindowServiceSupported(v12, &i);
    if ( v16 < 2 )
    {
      *v15 = IsWindowServiceSupported >= 0;
    }
    else if ( v16 == 2 )
    {
      if ( IsWindowServiceSupported >= 0 )
        *v15 = 1;
      v8 = IsWindowServiceSupported < 0;
      continue;
    }
    v8 = 0;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
