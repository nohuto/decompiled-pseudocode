/*
 * XREFs of ??_ECChannelContext@@UEAAPEAXI@Z @ 0x18007DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x1800B01A4 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CChannelContext *__fastcall CChannelContext::`vector deleting destructor'(CChannelContext *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CChannelContext::`vftable';
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  ReleaseInterface<CConnection>((char *)this + 40);
  WPF::ProcessHeapImpl::Free(*((void **)this + 6));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
