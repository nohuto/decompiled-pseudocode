/*
 * XREFs of ndisQueuePowerIrp @ 0x1C0066490
 * Callers:
 *     ndisPowerDispatch @ 0x1C0024280 (ndisPowerDispatch.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qs @ 0x1C0066158 (WPP_SF_qs.c)
 */

void __fastcall ndisQueuePowerIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const char *v5; // r9
  __int64 v6; // rax
  struct _WORK_QUEUE_ITEM *v7; // rbx

  v2 = *(_QWORD *)(a2 + 184);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
  {
    v5 = "SET";
    if ( *(_BYTE *)(v2 + 1) != 2 )
      v5 = "QUERY";
    WPP_SF_qs(0x91u, a2, a1, v5);
  }
  v6 = 4336LL;
  if ( *(_DWORD *)(v2 + 16) != 1 )
    v6 = 4368LL;
  v7 = (struct _WORK_QUEUE_ITEM *)(v6 + a1);
  *(_QWORD *)(v6 + a1 + 24) = a2;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  ndisReferenceMiniportNoCheck(a1, 0xDu);
  ExQueueWorkItem(v7, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
