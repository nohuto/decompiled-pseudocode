/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180166300
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C4BC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

void __fastcall CPrimitiveGroup::NotifyInvalidResource(CPrimitiveGroup *this, const struct IDeviceResource *a2)
{
  _DWORD *v2; // rbx

  v2 = (_DWORD *)((char *)this - 56);
  CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)((char *)this - 56), 1);
  CResource::NotifyOnChanged(v2, 0LL, 0LL);
}
