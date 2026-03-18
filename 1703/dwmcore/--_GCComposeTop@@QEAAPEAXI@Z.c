/*
 * XREFs of ??_GCComposeTop@@QEAAPEAXI@Z @ 0x180146874
 * Callers:
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800CB658 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CComposeTop *__fastcall CComposeTop::`scalar deleting destructor'(CComposeTop *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
  if ( v3 )
    (**v3)(v3, 1LL);
  ReleaseInterfaceNoNULL<IImageSource>(*(CRenderTargetImageSource **)this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
