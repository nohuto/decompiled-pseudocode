/*
 * XREFs of ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C0044670
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0008530 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

ReferenceCounted *__fastcall ReferenceCounted::`scalar deleting destructor'(ReferenceCounted *this, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  ReferenceCounted::~ReferenceCounted(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
