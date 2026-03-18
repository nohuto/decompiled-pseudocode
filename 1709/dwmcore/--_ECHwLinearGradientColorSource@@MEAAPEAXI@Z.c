/*
 * XREFs of ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x1801BC6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CHwLinearGradientColorSource *__fastcall CHwLinearGradientColorSource::`vector deleting destructor'(
        CHwLinearGradientColorSource *this,
        char a2)
{
  CMILPoolResource *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CHwLinearGradientColorSource::`vftable';
  ReleaseInterfaceNoNULL<CD3DSurface>(*((_QWORD *)this + 18));
  v4 = (CMILPoolResource *)*((_QWORD *)this + 19);
  if ( v4 )
    CMILPoolResource::Release(v4);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
