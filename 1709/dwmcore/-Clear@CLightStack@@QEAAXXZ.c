/*
 * XREFs of ?Clear@CLightStack@@QEAAXXZ @ 0x18009EDDC
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800405DC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009E998 (--1CLightStack@@QEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLightStack::Clear(CLightStack *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 16LL * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 0x10u);
  ReleaseInterface<CDisplay>((char *)this + 104);
  *((_DWORD *)this + 52) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 184, 8u);
}
