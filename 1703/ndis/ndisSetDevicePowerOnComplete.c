/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C0012890
 * Callers:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     ndisQueueWorkItem @ 0x1C002345C (ndisQueueWorkItem.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rdx

  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    v5 = 0LL;
  else
    v5 = *(unsigned int *)(a2 + 48);
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qD(76LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, v5);
  ndisLogMiniportEvent(a3, 12LL);
  LOBYTE(v6) = 12;
  ndisReferenceMiniportNoCheck(a3, v6);
  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    KeResetEvent(*(PRKEVENT *)(a3 + 5400));
  *(_QWORD *)(a3 + 5496) = a2;
  ndisQueueWorkItem((PLIST_ENTRY)(a3 + 5432));
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(77LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
  return 3221225494LL;
}
