/*
 * XREFs of ?Release@GestureSession@@UEAAKXZ @ 0x1800DB370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureSession::Release(GestureSession *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &GestureSession::`vftable';
    *((_QWORD *)this + 71) = &GestureRecognizer::`vftable';
    *((_QWORD *)this + 62) = &GestureRecognizer::`vftable';
    *((_QWORD *)this + 60) = &GestureRecognizer::`vftable';
    *((_QWORD *)this + 52) = &GestureRecognizer::`vftable';
    *((_QWORD *)this + 31) = &GestureRecognizer::`vftable';
    *((_QWORD *)this + 21) = &GestureRecognizer::`vftable';
    *((_QWORD *)this + 4) = &GestureRecognizer::`vftable';
    free(this);
  }
  return v1;
}
