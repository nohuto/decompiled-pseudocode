/*
 * XREFs of ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800438DC
 * Callers:
 *     ?Initialize@EdgeGestureTarget@@IEAAJ_KPEAX@Z @ 0x18002CBFC (-Initialize@EdgeGestureTarget@@IEAAJ_KPEAX@Z.c)
 *     ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18006E330 (-Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x1800A610C (-Initialize@MagnifierTarget@@IEAAJXZ.c)
 * Callees:
 *     ??0GestureSession@@AEAA@XZ @ 0x180043964 (--0GestureSession@@AEAA@XZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureRecognizerCreate(struct IGestureRecognizer **a1)
{
  GestureSession *v2; // rax
  GestureSession *v3; // rbx
  struct IGestureRecognizer *v4; // rcx
  __int64 result; // rax

  *a1 = 0LL;
  v2 = (GestureSession *)malloc(0x4B0uLL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x4B0uLL);
  if ( v3 )
    v4 = (struct IGestureRecognizer *)GestureSession::GestureSession(v3);
  else
    v4 = 0LL;
  result = v4 == 0LL ? 0x8007000E : 0;
  if ( v4 )
  {
    *a1 = v4;
    return 0LL;
  }
  return result;
}
