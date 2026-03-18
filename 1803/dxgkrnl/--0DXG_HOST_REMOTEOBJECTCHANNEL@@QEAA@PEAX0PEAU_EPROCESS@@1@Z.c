/*
 * XREFs of ??0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@1@Z @ 0x1C01E5A3C
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E64E8 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

DXG_HOST_REMOTEOBJECTCHANNEL *__fastcall DXG_HOST_REMOTEOBJECTCHANNEL::DXG_HOST_REMOTEOBJECTCHANNEL(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        void *a2,
        void *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *a5)
{
  struct _EPROCESS *CurrentProcess; // rax
  void **v7; // rcx
  struct _EPROCESS *v10; // rax
  DXG_HOST_REMOTEOBJECTCHANNEL *result; // rax

  CurrentProcess = a4;
  v7 = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
  if ( !a4 )
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(&DXG_HOST_REMOTEOBJECTCHANNEL::`vftable', a2);
  *((_QWORD *)this + 3) = CurrentProcess;
  v10 = a5;
  if ( !a5 )
    v10 = (struct _EPROCESS *)PsGetCurrentProcess(v7, a2);
  *((_QWORD *)this + 4) = v10;
  result = this;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = a3;
  return result;
}
