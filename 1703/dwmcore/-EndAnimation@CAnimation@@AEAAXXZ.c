/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800BC7A4
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800BD358 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800BBAFC (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (*((_BYTE *)this + 112) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 22); ++i )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 0x10u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v3, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    *((_BYTE *)this + 112) |= 2u;
  }
  if ( *((_BYTE *)this + 96) )
    CBaseAnimation::UnregisterAnimateResource((CComposition **)this);
}
