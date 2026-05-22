/*
 * XREFs of ??0MagnifierComponent@@IEAA@XZ @ 0x1800A551C
 * Callers:
 *     ?Create@MagnifierComponent@@SAJPEAPEAV1@@Z @ 0x1800A56A8 (-Create@MagnifierComponent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

MagnifierComponent *__fastcall MagnifierComponent::MagnifierComponent(MagnifierComponent *this)
{
  HDC DC; // rbx
  int v3; // eax
  int v4; // eax

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &MagnifierComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &MagnifierComponent::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_BYTE *)this + 88) = 0;
  DC = GetDC(0LL);
  *((_DWORD *)this + 6) = GetDeviceCaps(DC, 8);
  *((_DWORD *)this + 7) = GetDeviceCaps(DC, 10);
  ReleaseDC(0LL, DC);
  if ( !*((_QWORD *)this + 3) )
  {
    *((_DWORD *)this + 6) = 1024;
    *((_DWORD *)this + 7) = 768;
  }
  v3 = *((_DWORD *)this + 6);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 8) = v3 / 2;
  v4 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 10) = 0x40000000;
  *((_BYTE *)this + 57) = 1;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 9) = v4 / 2;
  return this;
}
