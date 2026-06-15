/*
 * XREFs of ??_GTelephonyControllerCallInstance@@MEAAPEAXI@Z @ 0x18011C334
 * Callers:
 *     ??_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z @ 0x180066880 (--_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18011C924 (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
TelephonyControllerCallInstance *__fastcall TelephonyControllerCallInstance::`scalar deleting destructor'(
        TelephonyControllerCallInstance *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
  *((_QWORD *)this + 1) = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
  TelephonyControllerCallInstance::ResetState(this);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
