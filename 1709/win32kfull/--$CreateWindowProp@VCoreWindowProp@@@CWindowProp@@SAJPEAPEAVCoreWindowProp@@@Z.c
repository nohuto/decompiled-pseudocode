/*
 * XREFs of ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C00097D0
 * Callers:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0009730 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CoreWindowProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(48LL, 1920430933LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x30uLL);
    *a1 = v4;
    *v4 = &CoreWindowProp::`vftable';
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
