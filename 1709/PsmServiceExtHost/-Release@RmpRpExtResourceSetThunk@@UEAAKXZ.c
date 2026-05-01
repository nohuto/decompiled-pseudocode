/*
 * XREFs of ?Release@RmpRpExtResourceSetThunk@@UEAAKXZ @ 0x180016270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall RmpRpExtResourceSetThunk::Release(RmpRpExtResourceSetThunk *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &RmpRpExtResourceSetThunk::`vftable';
    operator delete(this);
  }
  return v1;
}
