/*
 * XREFs of ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x18000F250
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18000F10C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILRefCountBase::AddRef(CMILRefCountBase *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
