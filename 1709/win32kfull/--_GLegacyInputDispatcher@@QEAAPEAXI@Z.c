/*
 * XREFs of ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C012421C
 * Callers:
 *     xxxDesktopThread @ 0x1C0048580 (xxxDesktopThread.c)
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     <none>
 */

LegacyInputDispatcher *__fastcall LegacyInputDispatcher::`scalar deleting destructor'(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &LegacyInputDispatcher::`vftable';
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    Win32FreePool(v4, a2, a3);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
    Win32FreePool(v6, a2, a3);
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    Win32FreePool(v7, a2, a3);
  Win32FreePool(this, a2, a3);
  return this;
}
