/*
 * XREFs of ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C007C300
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000A1D0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C29C (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::ReleaseOverride(
        FxRequest *this,
        unsigned __int16 Offset,
        volatile signed __int32 *Tag,
        unsigned int Line,
        char *File)
{
  if ( !Offset )
    return FxObject::Release(this, Tag, Line, File);
  FxRequest::ReleaseIrpReference(this);
  return 1LL;
}
