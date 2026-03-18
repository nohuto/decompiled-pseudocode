/*
 * XREFs of ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x1800C8568
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C84AC (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CInputManager *__fastcall CInputManager::CInputManager(CInputManager *this, struct CComposition *a2)
{
  CInputManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CInputManager::`vftable';
  result = this;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_BYTE *)this + 216) = 1;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  CInputManager::s_pInputManager = this;
  return result;
}
