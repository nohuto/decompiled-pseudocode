/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C008DF74
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C008DE84 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008A408 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C008A488 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C008E08C (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C0112ED8 (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  CWindowProp *v4; // rbx
  int v5; // edi
  CWindowProp *Prop; // [rsp+40h] [rbp+18h] BYREF

  Prop = (CWindowProp *)GetProp((__int64)a1, CInputQueueProp::s_atom, 1);
  v4 = Prop;
  if ( Prop )
    goto LABEL_2;
  v5 = CWindowProp::CreateWindowProp<CInputQueueProp>(&Prop);
  if ( v5 >= 0 )
  {
    v4 = Prop;
    if ( !(unsigned int)CWindowProp::SetProp(Prop, (__int64)a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v4)(v4);
      v4 = 0LL;
      v5 = -1073741790;
    }
    if ( v5 >= 0 )
    {
LABEL_2:
      v5 = CInputQueueProp::AttachInputQueue(v4, a2);
      if ( v5 < 0 && !*((_DWORD *)v4 + 6) )
        CWindowProp::RemoveAndDeleteProp(v4);
    }
  }
  return (unsigned int)v5;
}
