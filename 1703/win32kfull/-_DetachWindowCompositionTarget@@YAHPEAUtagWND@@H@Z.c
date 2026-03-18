/*
 * XREFs of ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0017440
 * Callers:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C0017364 (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C001A1E0 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1)
{
  unsigned int v1; // edi
  CHwndTargetProp *Prop; // rax
  int v3; // r10d
  CHwndTargetProp *v4; // rbx

  v1 = 0;
  Prop = (CHwndTargetProp *)GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  v4 = Prop;
  if ( Prop )
  {
    v1 = CHwndTargetProp::ClearSystemVisual(Prop, v3);
    if ( !*((_QWORD *)v4 + 2) && !*((_QWORD *)v4 + 3) )
      CWindowProp::RemoveAndDeleteProp(v4);
  }
  return v1;
}
