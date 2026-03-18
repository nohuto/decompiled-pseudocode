/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180175070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180026AD4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

void __fastcall CPrimitiveGroup::NotifyInvalidResource(CPrimitiveGroup *this, const struct IDeviceResource *a2)
{
  char *v2; // rbx

  v2 = (char *)this - 56;
  CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)((char *)this - 56), 1);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, 0LL, 0LL);
}
