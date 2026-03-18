/*
 * XREFs of ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053E24
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0051CD0 (HmgCheckDCForPrivateReferences.c)
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0051F20 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
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
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  return result;
}
