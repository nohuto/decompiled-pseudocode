/*
 * XREFs of ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180034B98
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180033FE4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180033D60 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AULegacyInputInfo@@K@Z @ 0x180033EE8 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AULegacyInputInfo@@K@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ControllerProcessor::ApplyPanDeltaToScroll(ControllerProcessor *this)
{
  float v1; // xmm2_4
  float v3; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  int v6; // edi
  __int16 v7; // ax
  int v8; // eax
  _DWORD v9[131]; // [rsp+20h] [rbp-708h] BYREF
  __int16 v10; // [rsp+22Ch] [rbp-4FCh]
  __int16 v11; // [rsp+22Eh] [rbp-4FAh]
  wil::details::in1diag3 *retaddr; // [rsp+728h] [rbp+0h]

  v1 = *((float *)this + 507);
  if ( v1 != 0.0 || *((float *)this + 508) != 0.0 )
  {
    v3 = *((float *)this + 508);
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
    if ( v4 <= v5 )
      v6 = (int)v3;
    else
      LOWORD(v6) = -(__int16)(int)v1;
    ControllerProcessor::BuildMouseInputInfo((__int64)this, v9, 0);
    v7 = 2048;
    v11 = v6;
    if ( v4 <= v5 )
      v7 = 1024;
    v10 = v7;
    v8 = ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v9);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6CD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    *((_DWORD *)this + 507) = 0;
    *((_DWORD *)this + 508) = 0;
  }
}
