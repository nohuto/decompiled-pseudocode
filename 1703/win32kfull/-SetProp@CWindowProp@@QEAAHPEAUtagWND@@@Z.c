/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C001A160
 * Callers:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0004908 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0017BE8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C001AE4C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C02099AC (UserSetWindowedSwapChain.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  CWindowProp *v5; // rax
  unsigned __int16 v6; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = (CWindowProp *)InternalRemoveProp(a2, v4, 1LL);
  if ( v5 && v5 != this )
    (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
  v6 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  result = InternalSetProp(a2, v6, this, 32769LL);
  *((_QWORD *)this + 1) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
