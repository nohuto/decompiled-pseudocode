/*
 * XREFs of ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1800401C0
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AUInputInfo@@K@Z @ 0x18003F664 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AUInputInfo@@K@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerProcessor::ApplyPanDeltaToScroll(ControllerProcessor *this)
{
  float v1; // xmm3_4
  float v3; // xmm4_4
  __int16 v4; // si
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD v8[175]; // [rsp+30h] [rbp-B38h] BYREF
  __int16 v9; // [rsp+2ECh] [rbp-87Ch]
  __int16 v10; // [rsp+2EEh] [rbp-87Ah]

  v1 = *((float *)this + 96);
  if ( v1 != 0.0 || *((float *)this + 97) != 0.0 )
  {
    v3 = *((float *)this + 97);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm) <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm) )
    {
      v4 = 1024;
      v5 = (int)v3;
    }
    else
    {
      v4 = 2048;
      LOWORD(v5) = -(__int16)(int)v1;
    }
    ControllerProcessor::BuildMouseInputInfo((__int64)this, v8, 0);
    v6 = *((_QWORD *)this + 32);
    v9 = v4;
    v10 = v5;
    if ( (*(int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 48LL))(v6, v8) < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 12, 1724, 5);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    *((_DWORD *)this + 96) = 0;
    *((_DWORD *)this + 97) = 0;
  }
}
