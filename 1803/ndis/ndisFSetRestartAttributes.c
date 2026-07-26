/*
 * XREFs of ndisFSetRestartAttributes @ 0x1C00C7BDC
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00C79F0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C0021DF8 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v6; // rbx
  __int64 v7; // rbx
  int v8; // r8d
  bool v9; // cf
  _QWORD v10[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x21u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 1) == 1 )
    {
      if ( *(_WORD *)(a2 + 2) < 0x30u )
      {
        v4 = -1073676283;
      }
      else if ( *(_QWORD *)(a2 + 8) || !*(_QWORD *)(a2 + 24) )
      {
        v4 = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded((struct _NDIS_FILTER_BLOCK *)a1, (_QWORD *)a2, 1);
        if ( !v4 )
        {
          if ( memcmp((const void *)(a1 + 584), (const void *)a2, 0x30uLL) )
          {
            v6 = *(_QWORD *)(a1 + 32);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v6 + 5160, 0LL);
            v7 = *(_QWORD *)(a1 + 32);
            v8 = *(_DWORD *)(v7 + 5100);
            *(_DWORD *)(v7 + 5100) = v8 | 0x20;
            if ( !v8 || !*(_QWORD *)(v7 + 5064) )
            {
              if ( (unsigned __int8)byte_1C0099623 >= 5u )
                WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 | 0x20);
              v9 = (unsigned __int8)byte_1C0099623 < 4u;
              *(_BYTE *)(*(_QWORD *)(v7 + 5064) + 5240LL) = 1;
              if ( !v9 )
              {
                ndisGetBindLinkNameForTracing(
                  *(struct NDIS_BIND_FILTER_LINK **)(a1 + 904),
                  (struct NDIS_PNPTRACE_LOCALS *)v10);
                if ( (unsigned __int8)byte_1C0099623 >= 4u )
                  WPP_SF_Zq(0x22u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (const wchar_t *)v10[1], v10[0]);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(a1 + 32) + 5136LL));
          }
          *(_OWORD *)(a1 + 584) = *(_OWORD *)a2;
          *(_OWORD *)(a1 + 600) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(a1 + 616) = *(_OWORD *)(a2 + 32);
        }
      }
      else
      {
        v4 = -1073741811;
      }
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x23u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  return v4;
}
