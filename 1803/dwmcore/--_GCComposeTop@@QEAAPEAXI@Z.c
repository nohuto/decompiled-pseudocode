/*
 * XREFs of ??_GCComposeTop@@QEAAPEAXI@Z @ 0x180156F04
 * Callers:
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800C9930 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C5718 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  operator delete(this);
  return this;
}
