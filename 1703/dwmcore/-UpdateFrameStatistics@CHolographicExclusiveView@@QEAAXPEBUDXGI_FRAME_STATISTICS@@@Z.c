/*
 * XREFs of ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1801A4D5C
 * Callers:
 *     ?PostPresent@CHolographicClient@@UEAAJXZ @ 0x1801A7FC0 (-PostPresent@CHolographicClient@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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

  v2 = *((_DWORD *)this + 24);
  v4 = *((_QWORD *)this + 15);
  v5 = *(_OWORD *)&a2->SyncQPCTime.LowPart;
  v8[0] = *(_OWORD *)&a2->PresentCount;
  LODWORD(v8[0]) = v2;
  v8[1] = v5;
  if ( v4 && (v6 = NtSetCompositionSurfaceStatistics(v4, (char *)this + 112, v8), v6 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 | 0x10000000, 0x19Fu);
  }
  else
  {
    v7 = (void *)*((_QWORD *)this + 11);
    if ( v7 )
      SetEvent(v7);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 560LL));
  }
}
