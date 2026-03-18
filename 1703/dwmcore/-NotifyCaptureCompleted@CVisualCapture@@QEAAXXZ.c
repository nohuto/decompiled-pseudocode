/*
 * XREFs of ?NotifyCaptureCompleted@CVisualCapture@@QEAAXXZ @ 0x180026D74
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18005C970 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18006B630 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CVisualCapture::NotifyCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
  v2 = *((_QWORD *)this + 6);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1352LL) + 56LL);
  if ( v2 )
    v4 = *(unsigned int *)(v2 + 60);
  else
    v4 = 0LL;
  v5[0] = v4;
  v5[1] = *((unsigned int *)this + 14);
  CoreUICallSend(v3, v5, 2LL, 8LL, 0, &unk_1801D53D9);
}
