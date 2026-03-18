/*
 * XREFs of ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0017D90
 * Callers:
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C0017CB8 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     ?WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z @ 0x1C019DC2C (-WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall WindowHasCompositionTarget(struct tagWND *a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r8d
  int v3; // r10d
  int v5; // ecx
  bool v6; // zf

  Prop = GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  if ( !Prop )
    return 0;
  v5 = 0;
  v6 = v3 ? *(_QWORD *)(Prop + 16) == 0LL : *(_QWORD *)(Prop + 24) == 0LL;
  LOBYTE(v5) = !v6;
  if ( !v5 )
    return 0;
  return v2;
}
