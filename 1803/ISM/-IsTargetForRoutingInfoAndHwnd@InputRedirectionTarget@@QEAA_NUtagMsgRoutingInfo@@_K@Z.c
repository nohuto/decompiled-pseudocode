/*
 * XREFs of ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x1800B5B34
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800B5270 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  return (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 24) + 112LL))(
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(a1 + 32),
           v7) >= 0
      && *(_DWORD *)a2 == v7[0]
      && *(_DWORD *)(a2 + 4) == v7[1]
      && *(_QWORD *)(a2 + 8) == v8
      && *(_QWORD *)(a2 + 16) == v9
      && *(_QWORD *)(a2 + 24) == v10
      && *(_QWORD *)(a2 + 32) == v11
      && *(_QWORD *)(a1 + 48) == a3;
}
