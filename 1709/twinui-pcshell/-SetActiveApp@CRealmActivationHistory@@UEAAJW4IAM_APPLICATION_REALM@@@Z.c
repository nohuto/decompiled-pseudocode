/*
 * XREFs of ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x18004C700
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x18004CA08 (-_GetRealmForActivation@CRealmActivationHistory@@AEAA-AUREALM_ACTIVATION@@W4IAM_APPLICATION_REAL.c)
 *     ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x18004CB30 (-_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CRealmActivationHistory::SetActiveApp(_QWORD **a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HRESULT Service; // ebx
  void *v6; // rcx
  IUnknown *v7; // rdx
  void *v8; // rcx
  unsigned int v9; // esi
  int v12; // [rsp+20h] [rbp-30h] BYREF
  void *ppvOut[2]; // [rsp+28h] [rbp-28h] BYREF
  IUnknown *punk[2]; // [rsp+38h] [rbp-18h] BYREF

  ppvOut[1] = (void *)-2LL;
  v12 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_DWORD *)CRealmActivationHistory::_GetRealmForActivation(a1 - 10, punk, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( a2 == 16 && !v4 )
    v4 = 16;
  if ( (a2 & 4) != 0
    && v4 - 1 <= 1
    && (int)CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 10)) >= 0
    && (*(int (__fastcall **)(_QWORD *, int *))(*a1[42] + 56LL))(a1[42], &v12) >= 0
    && v12 )
  {
    v4 = 4;
  }
  switch ( v4 )
  {
    case 1u:
    case 2u:
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1[41] + 120LL))(a1[41], v4, 0LL);
    case 4u:
      Service = CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 10));
      if ( Service < 0 )
        return (unsigned int)Service;
      Service = (*(__int64 (__fastcall **)(_QWORD *, int *))(*a1[42] + 56LL))(a1[42], &v12);
      if ( Service < 0 )
        return (unsigned int)Service;
      if ( v12 )
        return (unsigned int)(*(__int64 (__fastcall **)(_QWORD *))(*a1[42] + 72LL))(a1[42]);
      v9 = a2 & 0xFFFFFFFB;
      return ((unsigned int (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, v9);
    case 8u:
      punk[0] = 0LL;
      EnumWindows(lambda_21ab0f95d81107e5cccfa51f206c78c4_::_lambda_invoker_cdecl_, (LPARAM)punk);
      if ( punk[0] )
        Service = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1[41] + 120LL))(a1[41], 8LL);
      else
        Service = -2147023728;
      if ( Service >= 0 )
        return (unsigned int)Service;
      v9 = a2 & 0xFFFFFFF7;
      return ((unsigned int (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, v9);
    case 0x10u:
      ppvOut[0] = 0LL;
      punk[0] = 0LL;
      v12 = 1;
      ((void (__fastcall *)(_QWORD **, GUID *, IUnknown **))(*(a1 - 5))[4])(
        a1 - 5,
        &GUID_00000000_0000_0000_c000_000000000046,
        punk);
      v6 = ppvOut[0];
      if ( ppvOut[0] )
      {
        ppvOut[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      Service = IUnknown_QueryService(
                  punk[0],
                  &GUID_afa69bd5_4b7a_4aa4_a984_53e14f61dd67,
                  &GUID_afa69bd5_4b7a_4aa4_a984_53e14f61dd67,
                  ppvOut);
      v7 = punk[0];
      if ( punk[0] )
      {
        punk[0] = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( Service >= 0 )
        Service = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 56LL))(ppvOut[0]);
      v8 = ppvOut[0];
      if ( ppvOut[0] )
      {
        ppvOut[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      break;
    default:
      Service = -2147319765;
      break;
  }
  return (unsigned int)Service;
}
