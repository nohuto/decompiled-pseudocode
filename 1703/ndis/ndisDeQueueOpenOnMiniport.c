/*
 * XREFs of ndisDeQueueOpenOnMiniport @ 0x1C00FBBD4
 * Callers:
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 *     ndisMFinishClose @ 0x1C00FBAD4 (ndisMFinishClose.c)
 * Callees:
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001A4A8 (ndisUpdateCheckForLoopbackFlag.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisUnsetNdis6OpenHandlers @ 0x1C00FBC74 (ndisUnsetNdis6OpenHandlers.c)
 */

void __fastcall ndisDeQueueOpenOnMiniport(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qq(0x11u, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, a2);
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 == a1 )
  {
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 392);
    goto LABEL_9;
  }
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 392);
      if ( v5 == a1 )
        break;
      v4 = *(_QWORD *)(v4 + 392);
    }
    while ( v5 );
    if ( v4 )
    {
      *(_QWORD *)(v4 + 392) = *(_QWORD *)(*(_QWORD *)(v4 + 392) + 392LL);
LABEL_9:
      --*(_WORD *)(a2 + 1820);
    }
  }
  ndisUpdateCheckForLoopbackFlag(a2);
  ndisUnsetNdis6OpenHandlers();
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qq(0x12u, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, a2);
}
