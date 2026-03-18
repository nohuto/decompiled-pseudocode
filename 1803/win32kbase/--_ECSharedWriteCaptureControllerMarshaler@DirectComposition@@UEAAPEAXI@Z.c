/*
 * XREFs of ??_ECSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145DE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteCaptureControllerMarshaler *__fastcall DirectComposition::CSharedWriteCaptureControllerMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteCaptureControllerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteCaptureControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
