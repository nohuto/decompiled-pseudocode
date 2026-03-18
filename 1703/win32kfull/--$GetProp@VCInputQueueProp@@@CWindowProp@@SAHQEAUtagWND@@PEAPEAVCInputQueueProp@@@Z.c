/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0062490
 * Callers:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002800 (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C001ACC0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C001AE4C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 */

__int64 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 *Prop; // rax
  __int64 v5; // rax

  v2 = 0LL;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 184) && (Prop = (__int64 *)FindProp(a1, CInputQueueProp::s_atom, 1LL)) != 0LL )
    v5 = *Prop;
  else
    v5 = v2;
  *v3 = v5;
  LOBYTE(v2) = v5 != 0;
  return (unsigned int)v2;
}
