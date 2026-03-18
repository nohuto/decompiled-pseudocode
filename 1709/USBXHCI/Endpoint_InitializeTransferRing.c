/*
 * XREFs of Endpoint_InitializeTransferRing @ 0x1C0019248
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0019850 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019E64 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BBE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 * Callees:
 *     TR_InitializeTransferRing @ 0x1C0023440 (TR_InitializeTransferRing.c)
 */

__int64 __fastcall Endpoint_InitializeTransferRing(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *((_BYTE *)a1 + 37) )
  {
    v3 = *a1;
    if ( (*(_QWORD *)(v3 + 272) & 0x100000000000LL) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1[17] + 32) + 16LL) + 16LL * a2;
      v5 = *(_QWORD *)(v3 + 272);
      if ( (v5 & 0x1800000000LL) != 0 )
      {
        if ( (v5 & 0x1000000000LL) != 0 )
        {
          if ( (v5 & 0x800000000LL) == 0 )
            *(_DWORD *)(v4 + 12) &= 0xFF000000;
        }
        else
        {
          *(_DWORD *)(v4 + 8) = (unsigned __int8)*(_DWORD *)(v4 + 8);
        }
      }
      else
      {
        *(_DWORD *)(v4 + 8) &= 0xFF000000;
      }
    }
    v6 = *(_QWORD *)(104LL * (a2 - 1) + a1[17] + 48);
  }
  else
  {
    v6 = a1[11];
  }
  return TR_InitializeTransferRing(v6);
}
