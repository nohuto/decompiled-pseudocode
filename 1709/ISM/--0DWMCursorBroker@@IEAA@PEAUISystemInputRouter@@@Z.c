/*
 * XREFs of ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180024B0C
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18002508C (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
DWMCursorBroker *__fastcall DWMCursorBroker::DWMCursorBroker(DWMCursorBroker *this, struct ISystemInputRouter *a2)
{
  _OWORD *v4; // rdi
  _OWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  LODWORD(v9) = 0;
  v4 = (_OWORD *)((char *)this + 48);
  v5 = (_OWORD *)((char *)this + 1248);
  *((_OWORD *)this + 78) = v9;
  memset((char *)this + 48, 0, 0x4B0uLL);
  v6 = 50LL;
  do
  {
    *v4 = *v5;
    v4 = (_OWORD *)((char *)v4 + 24);
    --v6;
  }
  while ( v6 );
  *((_QWORD *)this + 160) = 0LL;
  v7 = operator new[](0x18uLL);
  *((_QWORD *)this + 158) = v7;
  *v7 = *((_QWORD *)this + 160);
  *((_DWORD *)this + 318) = 1;
  *((_DWORD *)this + 319) = 0;
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 185) = a2;
  memset((char *)this + 1320, 0, 0xA0uLL);
  return this;
}
