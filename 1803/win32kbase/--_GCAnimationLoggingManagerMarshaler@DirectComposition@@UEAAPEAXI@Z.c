/*
 * XREFs of ??_GCAnimationLoggingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145A00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CAnimationLoggingManagerMarshaler *__fastcall DirectComposition::CAnimationLoggingManagerMarshaler::`scalar deleting destructor'(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = *((_QWORD *)this + 23);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
    Win32FreePool(v7);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
