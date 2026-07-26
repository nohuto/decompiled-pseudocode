/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1C0064270
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001D998 (ndisScheduleWorkItemInternal.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C0092614 >= 2u )
    WPP_SF_q(0x43u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 864LL) )
  {
    v2 = *(_QWORD *)(a1 + 4112);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 32) && ndisReferenceMiniport(a1, 9u) )
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
            PoolWithTag[1] = &ndisQueuedReenumerateFailedAdapter;
            ndisScheduleWorkItemInternal((__int64)PoolWithTag);
            return;
          }
          ndisMDereferenceIfBlock(a1, 0x13u);
        }
        ndisDereferenceMiniport(a1, 9u);
      }
    }
  }
}
