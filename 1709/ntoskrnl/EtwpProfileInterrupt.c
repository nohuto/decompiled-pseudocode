/*
 * XREFs of EtwpProfileInterrupt @ 0x14027C9C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwpProfileInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *Process; // r10
  struct _KPRCB *CurrentPrcb; // r9
  unsigned int NestingLevel; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  char *v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  unsigned int CurrentRunTime; // [rsp+38h] [rbp-28h]
  __int16 v11; // [rsp+3Ch] [rbp-24h]
  char v12; // [rsp+3Eh] [rbp-22h]
  char v13; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 360);
  v2 = 34656770;
  if ( v1 > 0x7FFFFFFEFFFFLL )
    v2 = 34658818;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  CurrentRunTime = CurrentThread[1].CurrentRunTime;
  v12 = 0;
  v12 = 8 * CurrentThread->Priority;
  v9 = v1;
  v11 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel != 2 )
  {
    if ( NestingLevel <= 1 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
LABEL_7:
    v12 |= 2u;
    goto LABEL_8;
  }
  v12 |= 1u;
LABEL_8:
  v2 &= ~0x4000u;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v8 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    do
    {
      if ( *((_DWORD *)v8 + 29) > 0xFFu )
        LOBYTE(SchedulingGroup) = -1;
      else
        LOBYTE(SchedulingGroup) = v8[116];
      if ( (_BYTE)SchedulingGroup )
        break;
      v8 = (char *)*((_QWORD *)v8 + 51);
    }
    while ( v8 );
  }
  v16 = 0;
  v14 = &v9;
  v13 = (char)SchedulingGroup;
  v15 = 16;
  EtwTraceSiloKernelEvent(*(_QWORD *)&Process[2].ActiveProcessors.Count, (__int64)&v14, 1u, 0x20000002u, 0xF2Eu, v2);
}
