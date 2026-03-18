/*
 * XREFs of ??_GClipPlaneInfoRef@@UEAAPEAXI@Z @ 0x180173240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

ClipPlaneInfoRef *__fastcall ClipPlaneInfoRef::`scalar deleting destructor'(ClipPlaneInfoRef *this, char a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
