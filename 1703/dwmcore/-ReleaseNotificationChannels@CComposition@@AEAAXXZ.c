/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18013FA90
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18013F8A0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 120); i = (unsigned int)(i + 1) )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 57) + 8 * i));
  *((_DWORD *)this + 120) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 456);
}
