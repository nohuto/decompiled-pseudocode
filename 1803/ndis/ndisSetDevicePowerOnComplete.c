/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C0010020
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r9

  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    v5 = 0LL;
  else
    v5 = *(unsigned int *)(a2 + 48);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(76LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v5);
  ndisLogMiniportEvent(a3, 12LL);
  LOBYTE(v6) = 12;
  ndisReferenceMiniportNoCheck(a3, v6);
  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    KeResetEvent(*(PRKEVENT *)(a3 + 5408));
  *(_QWORD *)(a3 + 5456) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5424), (WORK_QUEUE_TYPE)40);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(77LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v7);
  return 3221225494LL;
}
