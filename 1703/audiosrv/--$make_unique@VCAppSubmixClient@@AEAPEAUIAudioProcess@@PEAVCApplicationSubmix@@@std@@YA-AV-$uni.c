/*
 * XREFs of ??$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCApplicationSubmix@@@std@@YA?AV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@AEAPEAUIAudioProcess@@$$QEAPEAVCApplicationSubmix@@@Z @ 0x1800AEC2C
 * Callers:
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800AF180 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_unique<CAppSubmixClient,IAudioProcess * &,CApplicationSubmix *>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *result; // rax

  v6 = operator new(0x10uLL);
  v7 = v6;
  if ( v6 )
  {
    v8 = *a2;
    v9 = *a3;
    *v6 = *a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v7[1] = v9;
  }
  else
  {
    v7 = 0LL;
  }
  result = a1;
  *a1 = v7;
  return result;
}
