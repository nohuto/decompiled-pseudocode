/*
 * XREFs of ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C003B1BC
 * Callers:
 *     GreGetClipBox @ 0x1C0020E10 (GreGetClipBox.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C002B990 (HmgCheckDCForPrivateReferences.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 */

struct REGION *__fastcall DC::prgnRao(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 196) )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  return result;
}
