/*
 * XREFs of NdisTryAcquireNicActive @ 0x1C001DEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_DDD @ 0x1C00429C4 (WPP_SF_DDD.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0071E94 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072464 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C0074FA8 (McTemplateK0xqqq.c)
 */

__int64 __fastcall NdisTryAcquireNicActive(__int64 a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r14d
  int v6; // r15d
  __int64 v7; // rdi
  KIRQL v9; // r12
  struct _NDIS_MINIPORT_AOAC *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int active; // eax
  int v14; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 4488);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(48LL, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, a1, (unsigned int)a2);
  if ( a2 == NdisPMComponentUnspecified || a2 >= NdisPMComponentMaximum )
    return 3221225485LL;
  if ( *(_QWORD *)(v2 + 4488) )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( ndisAoAcIsD0Required((struct _NDIS_MINIPORT_AOAC *)v7) && ((v11 = *(_DWORD *)(v7 + 368)) == 0 || v11 == 3) )
    {
      if ( *(_DWORD *)(v7 + 52) == 0x7FFFFFFF )
      {
        v12 = -1073741675;
      }
      else
      {
        active = ndisAoAcActiveRefIncrement(v10, a2);
        ++*(_DWORD *)(a1 + 944);
        v3 = active;
        v6 = *(_DWORD *)(a1 + 944);
        v12 = 0;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C0098755 >= 3u )
        WPP_SF_DDD(
          50LL,
          &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids,
          *(unsigned int *)(v7 + 368),
          *(unsigned int *)(v7 + 52),
          *(_DWORD *)(v7 + 372));
      v12 = -1071448017;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v9);
    if ( !v12 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0xqqq(v14, (unsigned int)&NicActiveAcquired, v2 + 4032, *(_QWORD *)(v2 + 4048), a2, v6, v3);
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_DDD(51LL, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, v12, v3, v6);
    return v12;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098755 >= 3u )
      WPP_SF_(49LL, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids);
    return 3221225659LL;
  }
}
