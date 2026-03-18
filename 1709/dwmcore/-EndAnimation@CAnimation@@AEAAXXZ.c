/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18002CFB0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x18002D6C0 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A5C (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 112) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 22); ++i )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 16LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    *((_BYTE *)this + 112) |= 2u;
  }
  if ( *((_BYTE *)this + 96) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
