/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180025330
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x180040F74 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180041128 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned __int64 a2)
{
  char v3; // si
  char *v4; // rcx
  char *v5; // rbx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v3 = a2;
  v4 = (char *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = v4 - 8;
    `eh vector destructor iterator'(
      v4,
      8uLL,
      *((_QWORD *)v4 - 1),
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    operator delete[](v5, 8LL * *(_QWORD *)v5 + 8);
  }
  operator delete(*((void **)this + 4), a2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
