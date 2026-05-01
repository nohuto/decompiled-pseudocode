/*
 * XREFs of ?Release@ResourceSetCallback@@UEAAKXZ @ 0x180030CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetCallback::Release(ResourceSetCallback *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &ResourceSetCallback::`vftable';
    operator delete(this);
  }
  return v1;
}
