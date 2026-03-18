/*
 * XREFs of Simulator_NotifyNode @ 0x1C00449D8
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0044550 (Simulator_CallbackWorker.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(void **)(a1 + 16));
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      NameSpaceObject = ghNotify(2LL, *(unsigned int *)(a1 + 24), 120LL, qword_1C0068628, 0LL, *(_QWORD *)(a1 + 16));
    else
      NameSpaceObject = -1073741224;
  }
  DereferenceObjectEx(0LL);
  return (unsigned int)NameSpaceObject;
}
