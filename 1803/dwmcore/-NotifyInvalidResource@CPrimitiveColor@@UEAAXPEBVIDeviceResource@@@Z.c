/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z @ 0x18019E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18019E3D4 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::NotifyInvalidResource(CPrimitiveColor *this, const struct IDeviceResource *a2)
{
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8, 0LL, 0LL);
}
