/*
 * XREFs of ??0bad_weak_ptr@std@@QEAA@XZ @ 0x18013A7C8
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180139E58 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18013A0F4 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

std::bad_weak_ptr *__fastcall std::bad_weak_ptr::bad_weak_ptr(std::bad_weak_ptr *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &std::bad_weak_ptr::`vftable';
  return this;
}
