/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C00200B0
 * Callers:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    v5 = 0LL;
  else
    v5 = *(unsigned int *)(a2 + 48);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(76LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3, v5);
  ndisLogMiniportEvent(a3, 0xCu);
  ndisReferenceMiniportNoCheck(a3);
  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    KeResetEvent(*(PRKEVENT *)(a3 + 5400));
  *(_QWORD *)(a3 + 5448) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5416), (WORK_QUEUE_TYPE)40);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(77LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
  return 3221225494LL;
}
