/*
 * XREFs of ??0DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAA@PEAU_EPROCESS@@0@Z @ 0x1C01E59D4
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E64E8 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

DXG_HOST_COMPOSITIONOBJECTCHANNEL *__fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::DXG_HOST_COMPOSITIONOBJECTCHANNEL(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _EPROCESS *a2,
        struct _EPROCESS *a3)
{
  void **v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax

  v5 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
  CurrentProcess = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
  if ( !a2 )
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(&DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable', 0LL);
  *((_QWORD *)this + 3) = CurrentProcess;
  if ( !a3 )
    a3 = (struct _EPROCESS *)PsGetCurrentProcess(v5, a2);
  *((_QWORD *)this + 4) = a3;
  return this;
}
