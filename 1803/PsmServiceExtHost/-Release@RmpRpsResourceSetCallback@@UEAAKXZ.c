/*
 * XREFs of ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x18004D970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpsResourceSetCallback::Release(RmpRpsResourceSetCallback *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &RmpRpsResourceSetCallback::`vftable';
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
    operator delete(this);
  }
  return v2;
}
