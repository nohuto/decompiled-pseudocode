/*
 * XREFs of ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x1801BF07C
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTexture::TryGetDirtyRegion(RTL_SRWLOCK *this, const struct CDirtyRegion **a2)
{
  RTL_SRWLOCK *v2; // rbx
  const struct CDirtyRegion **v5; // rdi
  _QWORD *Ptr; // r8
  const struct CDirtyRegion *v7; // rcx

  v2 = this + 36;
  AcquireSRWLockExclusive(this + 36);
  v5 = (const struct CDirtyRegion **)&this[11];
  Ptr = this[11].Ptr;
  if ( Ptr && Ptr[2] != *((_QWORD *)this[2].Ptr + 45) )
    ReleaseInterface<CDisplay>((__int64 *)&this[11]);
  v7 = *v5;
  *a2 = *v5;
  if ( v7 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *))v7)(v7);
  ReleaseSRWLockExclusive(v2);
}
