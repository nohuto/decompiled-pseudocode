/*
 * XREFs of KiSignalThreadForApc @ 0x1400AB2FC
 * Callers:
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AB178 (KiInsertDeferredPreemptionApc.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     KeRequestTerminationThread @ 0x1400AB560 (KeRequestTerminationThread.c)
 *     KiSuspendThread @ 0x1400ABB8C (KiSuspendThread.c)
 *     KeTryToInsertQueueApc @ 0x140207B30 (KeTryToInsertQueueApc.c)
 * Callees:
 *     KiSignalThread @ 0x1400621E0 (KiSignalThread.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 */

char __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // r10
  char v6; // al
  bool v7; // cf
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  LODWORD(v4) = *(char *)(a2 + 80);
  v5 = *(_BYTE *)(a2 + 81);
  if ( (_DWORD)v4 != *(unsigned __int8 *)(v3 + 586) )
    return v4;
  if ( v3 == *(_QWORD *)(a1 + 8) )
  {
    if ( v5 )
      return v4;
    v4 = *(_QWORD *)(a2 + 48);
    if ( *(_DWORD *)(v3 + 484) )
    {
      if ( v4 || *(_WORD *)(v3 + 486) )
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
    _InterlockedOr(v9, 0);
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
      LOBYTE(a2) = 1;
      LOBYTE(v4) = KiSendSoftwareInterrupt(a1, a2, a3);
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
    v6 = *(_BYTE *)(v3 + 112) & 7;
    v7 = v6 == 3;
    LOBYTE(v4) = v6 - 3;
    if ( !v7 && (_BYTE)v4 != 1 )
    {
      LODWORD(v4) = *(_DWORD *)(v3 + 116);
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
