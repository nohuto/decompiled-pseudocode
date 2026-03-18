/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0017BE8
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C0017B08 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C001798C (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C001A160 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C001A1E0 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  char v6; // si
  CWindowProp *v7; // rdi
  signed int v8; // ebx
  int v10; // eax
  bool v11; // zf
  CWindowProp *Prop; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  Prop = (CWindowProp *)GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  v7 = Prop;
  if ( Prop )
  {
    v10 = 0;
    if ( a2 )
      v11 = *((_QWORD *)Prop + 2) == 0LL;
    else
      v11 = *((_QWORD *)Prop + 3) == 0LL;
    LOBYTE(v10) = !v11;
    v8 = v10 != 0 ? 0xC0000022 : 0;
  }
  else
  {
    v8 = CWindowProp::CreateWindowProp<CHwndTargetProp>(&Prop);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v7 = Prop;
    if ( (unsigned int)CWindowProp::SetProp(Prop, a1) )
    {
      v6 = 1;
    }
    else
    {
      (**(void (__fastcall ***)(CWindowProp *))v7)(v7);
      v7 = 0LL;
      v8 = -1073741790;
    }
  }
  if ( v8 < 0 || (v8 = CHwndTargetProp::SetSystemVisual(v7, a2, a3), v8 < 0) )
  {
    if ( v6 )
      CWindowProp::RemoveAndDeleteProp(v7);
  }
  return (unsigned int)v8;
}
