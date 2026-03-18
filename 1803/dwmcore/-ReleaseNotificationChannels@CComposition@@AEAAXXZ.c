/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014AA6C
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014A4C0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 114); i = (unsigned int)(i + 1) )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 54) + 8 * i));
  *((_DWORD *)this + 114) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 432, 8u);
}
