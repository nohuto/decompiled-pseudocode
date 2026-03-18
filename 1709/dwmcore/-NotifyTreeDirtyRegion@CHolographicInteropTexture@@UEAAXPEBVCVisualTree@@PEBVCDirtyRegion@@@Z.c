/*
 * XREFs of ?NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801BEB00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C0664 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 */

void __fastcall CHolographicInteropTexture::NotifyTreeDirtyRegion(
        CHolographicInteropTexture *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  RTL_SRWLOCK *v3; // rbx

  v3 = (RTL_SRWLOCK *)((char *)this + 232);
  AcquireSRWLockExclusive((PSRWLOCK)this + 29);
  ReplaceInterface<CRegionWrapper,CRegionWrapper>((__int64 *)this + 4, (__int64 (__fastcall ***)(_QWORD))a3);
  ReleaseSRWLockExclusive(v3);
}
