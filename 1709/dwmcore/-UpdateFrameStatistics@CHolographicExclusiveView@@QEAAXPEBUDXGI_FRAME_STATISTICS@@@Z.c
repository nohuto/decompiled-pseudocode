/*
 * XREFs of ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1801BDDD8
 * Callers:
 *     ?PostPresent@CHolographicClient@@UEAAJXZ @ 0x1801C2EF0 (-PostPresent@CHolographicClient@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicExclusiveView::UpdateFrameStatistics(
        CHolographicExclusiveView *this,
        const struct DXGI_FRAME_STATISTICS *a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int128 v5; // xmm1
  int v6; // eax
  void *v7; // rcx
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_DWORD *)this + 26);
  v4 = *((_QWORD *)this + 17);
  v5 = *(_OWORD *)&a2->SyncQPCTime.LowPart;
  v8[0] = *(_OWORD *)&a2->PresentCount;
  LODWORD(v8[0]) = v2;
  v8[1] = v5;
  if ( v4 && (v6 = NtSetCompositionSurfaceStatistics(v4, (char *)this + 128, v8), v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6 | 0x10000000, 0x203u);
  }
  else
  {
    v7 = (void *)*((_QWORD *)this + 12);
    if ( v7 )
      SetEvent(v7);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL) + 104LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
      0LL,
      0x8000LL);
  }
}
