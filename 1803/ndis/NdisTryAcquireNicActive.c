/*
 * XREFs of NdisTryAcquireNicActive @ 0x1C0009440
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00094D8 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_DDD @ 0x1C0043A38 (WPP_SF_DDD.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0072718 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072CE0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C00757FC (McTemplateK0xqqq.c)
 */

__int64 __fastcall NdisTryAcquireNicActive(__int64 a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r14d
  int v6; // r15d
  __int64 v7; // rdi
  KIRQL v9; // r12
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int active; // eax
  int v13; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 4488);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(49LL, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, a1, (unsigned int)a2);
  if ( !ndisValidComponentId(a2) )
    return 3221225485LL;
  if ( *(_QWORD *)(v2 + 4488) )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( ndisAoAcIsD0Required((struct _NDIS_MINIPORT_AOAC *)v7) && ((v10 = *(_DWORD *)(v7 + 368)) == 0 || v10 == 3) )
    {
      if ( *(_DWORD *)(v7 + 52) == 0x7FFFFFFF )
      {
        v11 = -1073741675;
      }
      else
      {
        active = ndisAoAcActiveRefIncrement((struct _NDIS_MINIPORT_AOAC *)v7, a2);
        ++*(_DWORD *)(a1 + 944);
        v3 = active;
        v6 = *(_DWORD *)(a1 + 944);
        v11 = 0;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C0099615 >= 3u )
        WPP_SF_DDD(
          51LL,
          &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids,
          *(unsigned int *)(v7 + 368),
          *(unsigned int *)(v7 + 52),
          *(_DWORD *)(v7 + 372));
      v11 = -1071448017;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v9);
    if ( !v11 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0xqqq(v13, (unsigned int)&NicActiveAcquired, v2 + 4032, *(_QWORD *)(v2 + 4048), a2, v6, v3);
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_DDD(52LL, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v11, v3, v6);
    return v11;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099615 >= 3u )
      WPP_SF_(50LL, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids);
    return 3221225659LL;
  }
}
