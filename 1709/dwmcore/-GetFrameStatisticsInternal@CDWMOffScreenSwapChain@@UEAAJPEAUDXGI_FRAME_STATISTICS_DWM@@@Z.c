/*
 * XREFs of ?GetFrameStatisticsInternal@CDWMOffScreenSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1801B15F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetFrameStatisticsInternal(
        CDWMOffScreenSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  signed int v3; // eax
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rcx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 66) + 40LL))(*((_QWORD *)this + 66), v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x349u);
  }
  else
  {
    v5 = v8[2];
    *(_DWORD *)a2 = v8[0];
    *((_DWORD *)a2 + 1) = v8[1];
    v6 = v9;
    *((_QWORD *)a2 + 1) = v9;
    *((_QWORD *)a2 + 3) = v6;
    *((_DWORD *)a2 + 4) = v5;
  }
  return v4;
}
