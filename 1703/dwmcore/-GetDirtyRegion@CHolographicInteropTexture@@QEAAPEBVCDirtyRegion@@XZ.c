/*
 * XREFs of ?GetDirtyRegion@CHolographicInteropTexture@@QEAAPEBVCDirtyRegion@@XZ @ 0x1801A3EAC
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

const struct CDirtyRegion *__fastcall CHolographicInteropTexture::GetDirtyRegion(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rdi
  _QWORD *Ptr; // rdx
  PVOID v5; // rdi

  v1 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  v3 = this + 11;
  Ptr = this[11].Ptr;
  if ( Ptr && Ptr[2] != *((_QWORD *)this[2].Ptr + 50) )
    ReleaseInterface<CDisplay>((__int64 *)&this[11]);
  if ( v3->Ptr )
    (**(void (__fastcall ***)(PVOID))v3->Ptr)(v3->Ptr);
  v5 = v3->Ptr;
  ReleaseSRWLockExclusive(v1);
  return (const struct CDirtyRegion *)v5;
}
