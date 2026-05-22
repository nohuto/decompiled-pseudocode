/*
 * XREFs of ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x1800A7D6C
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800A74F0 (-DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  _DWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 32) + 112LL))(
         *(_QWORD *)(a1 + 32),
         *(_QWORD *)(a1 + 40),
         v9);
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 129, v6);
    return 0;
  }
  return *(_DWORD *)a2 == v9[0]
      && *(_DWORD *)(a2 + 4) == v9[1]
      && *(_QWORD *)(a2 + 8) == v10
      && *(_QWORD *)(a2 + 16) == v11
      && *(_QWORD *)(a2 + 24) == v12
      && *(_QWORD *)(a2 + 32) == v13
      && *(_QWORD *)(a1 + 56) == a3;
}
