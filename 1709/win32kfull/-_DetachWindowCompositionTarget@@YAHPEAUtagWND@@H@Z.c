/*
 * XREFs of ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00446AC
 * Callers:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00445D0 (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C008A488 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1)
{
  unsigned int v1; // edi
  CHwndTargetProp *Prop; // rax
  int v3; // r11d
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
