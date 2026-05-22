/*
 * XREFs of ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800031D0
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x180005240 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@WGIRawInputProvider@@WBA@EAAKXZ @ 0x180005250 (-Release@WGIRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800768D0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ??1?$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x180077A70 (--1-$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__WGIRawInputProvider::s_spInstance__ @ 0x1800EAC80 (_dynamic_atexit_destructor_for__WGIRawInputProvider--s_spInstance__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyInputTarget::Release(EdgyInputTarget *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 16);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 6) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 16);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
