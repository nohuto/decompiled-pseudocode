/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x180147830
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C0664 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C0930 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::EnsureRenderTarget(CHwndRenderTargetRemoteApp *this)
{
  char *v1; // rdi
  __int64 (__fastcall ***v3)(_QWORD); // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = (char *)this + 112;
  v3 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 107) + 112LL);
  if ( v3 != *((__int64 (__fastcall ****)(_QWORD))this + 14) )
    ReplaceInterface<CRegionWrapper,CRegionWrapper>((__int64 *)this + 14, v3);
  if ( *(_QWORD *)v1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v1 + 48LL);
    if ( *((_QWORD *)this + 15) != v4 )
      ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>((__int64 *)this + 15, v4);
  }
  v5 = *((_QWORD *)this + 15);
  *(_OWORD *)((char *)this + 376) = *(_OWORD *)(*((_QWORD *)this + 106) + 24LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 136LL))(v5, 1LL);
  return 0LL;
}
