/*
 * XREFs of ?NotifyTreeDirtyRegion@CHwndRenderTargetRemoteApp@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180155D00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C9EE4 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::NotifyTreeDirtyRegion(
        CHwndRenderTargetRemoteApp *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  ReplaceInterface<CRegionWrapper,CRegionWrapper>((__int64 *)this + 9, (__int64 (__fastcall ***)(_QWORD))a3);
  CResource::NotifyOnChanged((_DWORD *)this - 18, 0LL, 0LL);
}
