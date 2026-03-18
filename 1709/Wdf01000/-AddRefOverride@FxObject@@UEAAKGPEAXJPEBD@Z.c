/*
 * XREFs of ?AddRefOverride@FxObject@@UEAAKGPEAXJPEBD@Z @ 0x1C0067E40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxObject::AddRefOverride(FxObject *this, unsigned __int16 Offset, void *Tag, int Line, char *File)
{
  return FxObject::AddRef(this, Tag, Line, File);
}
