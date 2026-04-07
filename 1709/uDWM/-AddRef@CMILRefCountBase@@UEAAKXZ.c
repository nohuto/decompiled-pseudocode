/*
 * XREFs of ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180033420
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800332DC (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILRefCountBase::AddRef(CMILRefCountBase *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
