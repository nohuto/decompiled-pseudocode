/*
 * XREFs of KiSignalThreadForApc @ 0x14003FFA4
 * Callers:
 *     KiInsertDeferredPreemptionApc @ 0x14003FE18 (KiInsertDeferredPreemptionApc.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     KeRequestTerminationThread @ 0x14012008C (KeRequestTerminationThread.c)
 *     KeTryToInsertQueueApc @ 0x140201740 (KeTryToInsertQueueApc.c)
 * Callees:
 *     KiSignalThread @ 0x1400E2F70 (KiSignalThread.c)
 */

char __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  char v5; // r10
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rax
  char v8; // al
  bool v9; // cf
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(char *)(a2 + 80);
  v5 = *(_BYTE *)(a2 + 81);
  v6 = *(unsigned __int8 *)(v3 + 586);
  if ( v4 != (_DWORD)v6 )
    return v4;
  if ( v3 == *(_QWORD *)(a1 + 8) )
  {
    if ( v5 )
      return v4;
    LOBYTE(v4) = *(_QWORD *)(a2 + 48) != 0LL;
    if ( *(_DWORD *)(v3 + 484) )
    {
      if ( *(_QWORD *)(a2 + 48) || *(_WORD *)(v3 + 486) )
        return v4;
    }
    *(_BYTE *)(v3 + 193) = 1;
    if ( !(_BYTE)a3 )
    {
      *(_DWORD *)(v3 + 116) |= 0x40u;
      return v4;
    }
    goto LABEL_18;
  }
  if ( !v5 )
  {
    *(_BYTE *)(v3 + 193) = 1;
    _InterlockedOr(v11, 0);
    LOBYTE(v4) = *(_BYTE *)(v3 + 388);
    if ( (_BYTE)v4 != 2 )
    {
      if ( (_BYTE)v4 == 5
        && !*(_BYTE *)(v3 + 390)
        && !*(_WORD *)(v3 + 486)
        && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v3 + 484) && !*(_BYTE *)(v3 + 192)) )
      {
        LOBYTE(v4) = KiSignalThread(a1, v3, 256LL, 0LL);
        *(_BYTE *)(v3 + 112) |= 0x20u;
      }
      return v4;
    }
    a1 = *(unsigned int *)(v3 + 536);
    LODWORD(a1) = a1 & 0x7FFFFFFF;
    if ( KeGetPcr()->Prcb.Number != (_DWORD)a1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(a2) = 1;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      LOBYTE(v4) = HalSendSoftwareInterrupt(a1, a2, a3, v6);
      return v4;
    }
LABEL_18:
    LOBYTE(a1) = 1;
    LOBYTE(v4) = HalRequestSoftwareInterrupt(a1);
    return v4;
  }
  LOBYTE(v4) = *(_BYTE *)(v3 + 388);
  if ( (_BYTE)v4 == 5 && *(_BYTE *)(v3 + 391) == 1 )
  {
    v8 = *(_BYTE *)(v3 + 112) & 7;
    v9 = v8 == 3;
    LOBYTE(v4) = v8 - 3;
    if ( !v9 && (_BYTE)v4 != 1 )
    {
      v4 = *(_DWORD *)(v3 + 116);
      if ( (v4 & 0x10) != 0 || *(_BYTE *)(v3 + 194) )
      {
        *(_BYTE *)(v3 + 112) |= 0x40u;
        LOBYTE(v4) = KiSignalThread(a1, v3, 192LL, 0LL);
        if ( (_BYTE)v4 )
          *(_BYTE *)(v3 + 194) = 1;
      }
    }
  }
  return v4;
}
