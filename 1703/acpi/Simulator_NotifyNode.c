/*
 * XREFs of Simulator_NotifyNode @ 0x1C005B474
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C005AFF0 (Simulator_CallbackWorker.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16));
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      NameSpaceObject = ghNotify(2LL, *(unsigned int *)(a1 + 24), 120LL, qword_1C0077F88, 0LL, *(_QWORD *)(a1 + 16));
    else
      NameSpaceObject = -1073741224;
  }
  DereferenceObjectEx(0LL);
  return (unsigned int)NameSpaceObject;
}
