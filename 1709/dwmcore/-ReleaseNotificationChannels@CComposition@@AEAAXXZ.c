/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180128ED8
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801274D8 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180128560 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 108); i = (unsigned int)(i + 1) )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 51) + 8 * i));
  *((_DWORD *)this + 108) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 408, 8u);
}
