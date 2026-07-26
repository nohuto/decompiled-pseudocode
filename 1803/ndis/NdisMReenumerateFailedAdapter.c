/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1C00653F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C0099614 >= 2u )
    WPP_SF_q(0x43u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 864LL) )
  {
    v2 = *(_QWORD *)(a1 + 4112);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 32) && ndisReferenceMiniport(a1) )
      {
        v3 = ndisMReferenceIfBlock(a1, 0x13u);
        if ( v3 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
          if ( PoolWithTag )
          {
            if ( !*(_WORD *)(v3 + 1460) )
              *(_WORD *)(v3 + 1460) = 71;
            *PoolWithTag = a1;
            PoolWithTag[1] = ndisQueuedReenumerateFailedAdapter;
            ndisScheduleWorkItemInternal((__int64)PoolWithTag);
            return;
          }
          ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR);
        }
        ndisDereferenceMiniport(a1, 9u, v4, v5);
      }
    }
  }
}
