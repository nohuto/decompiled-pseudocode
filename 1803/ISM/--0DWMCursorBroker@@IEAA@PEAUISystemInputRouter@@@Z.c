/*
 * XREFs of ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18008977C
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180089C3C (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
DWMCursorBroker *__fastcall DWMCursorBroker::DWMCursorBroker(DWMCursorBroker *this, struct ISystemInputRouter *a2)
{
  _OWORD *v4; // rdi
  _OWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  LODWORD(v9) = 0;
  v4 = (_OWORD *)((char *)this + 40);
  v5 = (_OWORD *)((char *)this + 1240);
  *(_OWORD *)((char *)this + 1240) = v9;
  memset_0((char *)this + 40, 0, 0x4B0uLL);
  v6 = 50LL;
  do
  {
    *v4 = *v5;
    v4 = (_OWORD *)((char *)v4 + 24);
    --v6;
  }
  while ( v6 );
  *((_QWORD *)this + 159) = 0LL;
  v7 = operator new[](0x18uLL);
  *((_QWORD *)this + 157) = v7;
  *v7 = *((_QWORD *)this + 159);
  *((_DWORD *)this + 316) = 1;
  *((_DWORD *)this + 317) = 0;
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_QWORD *)this + 184) = a2;
  memset_0((char *)this + 1312, 0, 0xA0uLL);
  return this;
}
