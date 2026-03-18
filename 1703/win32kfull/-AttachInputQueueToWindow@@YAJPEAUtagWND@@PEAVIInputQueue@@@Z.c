/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C001AE4C
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C001AD5C (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C0019158 (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C001A160 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C001A1E0 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C001AEE0 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0062490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  CInputQueueProp *v4; // rbx
  int v5; // edi
  struct tagWND *v7; // rdx
  CInputQueueProp *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v8) )
  {
    v4 = v8;
LABEL_3:
    v5 = CInputQueueProp::AttachInputQueue(v4, a2);
    if ( v5 < 0 && !*((_DWORD *)v4 + 6) )
      CWindowProp::RemoveAndDeleteProp(v4);
    return (unsigned int)v5;
  }
  v5 = CWindowProp::CreateWindowProp<CInputQueueProp>(&v8);
  if ( v5 >= 0 )
  {
    v7 = a1;
    v4 = v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, (unsigned __int64)v7) )
    {
      (**(void (__fastcall ***)(CInputQueueProp *))v4)(v4);
      v4 = 0LL;
      v5 = -1073741790;
    }
    if ( v5 >= 0 )
      goto LABEL_3;
  }
  return (unsigned int)v5;
}
