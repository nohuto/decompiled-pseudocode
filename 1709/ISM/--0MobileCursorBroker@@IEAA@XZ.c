/*
 * XREFs of ??0MobileCursorBroker@@IEAA@XZ @ 0x18002EF5C
 * Callers:
 *     ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x18002F504 (-Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
MobileCursorBroker *__fastcall MobileCursorBroker::MobileCursorBroker(MobileCursorBroker *this)
{
  _OWORD *v2; // rdi
  _OWORD *v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // rax
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]

  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &MobileCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &MobileCursorBroker::`vftable'{for `ICursorManagerClient'};
  *((_QWORD *)this + 2) = &MobileCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 3) = &MobileCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 4) = &MobileCursorBroker::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  LODWORD(v7) = 0;
  v2 = (_OWORD *)((char *)this + 96);
  v3 = (_OWORD *)((char *)this + 1296);
  *((_OWORD *)this + 81) = v7;
  memset((char *)this + 96, 0, 0x4B0uLL);
  v4 = 50LL;
  do
  {
    *v2 = *v3;
    v2 = (_OWORD *)((char *)v2 + 24);
    --v4;
  }
  while ( v4 );
  *((_QWORD *)this + 166) = 0LL;
  v5 = operator new[](0x18uLL);
  *((_QWORD *)this + 164) = v5;
  *v5 = *((_QWORD *)this + 166);
  *((_QWORD *)this + 165) = 1LL;
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 168) = 0LL;
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 170) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 342) = 0;
  return this;
}
