/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BCDE8
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C007C1FC (WPP_SF__guid_D_ea_1C007C1FC.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned __int64 BaseMiniport_high; // r10
  unsigned __int64 i; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  int SpinLock; // r8d
  int SpinLock_high; // r8d
  int v11; // r8d
  int v12; // r8d
  bool v13; // cf

  if ( *((_BYTE *)this + 1995) )
  {
    BaseMiniport_high = HIDWORD(a2->BaseMiniport);
    for ( i = 0LL; i != BaseMiniport_high; ++i )
    {
      if ( i >= BaseMiniport_high )
        __fastfail(5u);
      v7 = *((_QWORD *)a2->MiniportAdapterContext + i);
      if ( *(_DWORD *)(v7 + 52) || *(_DWORD *)(v7 + 28) )
      {
        v8 = *(_QWORD *)(v7 + 80);
        if ( (*(_DWORD *)(v8 + 40) & 1) == 0 && !*(_QWORD *)(v8 + 56) && !*(_BYTE *)(v7 + 8) )
        {
          if ( (unsigned __int8)byte_1C0098763 >= 5u )
            WPP_SF__guid_D(0x22u, v7, v8 + 24, *(_DWORD *)(v7 + 88));
          if ( Ndis::BindState::SetBinding(
                 (Ndis::BindState *)&a2->32,
                 BindingDisabled,
                 Reason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            WPP_SF_Zq(0x23u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, *((const wchar_t **)this + 485), this);
          }
          if ( Ndis::BindState::SetPause(
                 (Ndis::BindState *)&a2->32,
                 DatapathPaused,
                 PauseReason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            WPP_SF_Zq(0x24u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, *((const wchar_t **)this + 485), this);
          }
          return;
        }
      }
    }
    SpinLock = a2->ShortRef.SpinLock;
    LODWORD(a2->ShortRef.SpinLock) = SpinLock & 0xFFFFFEFF;
    if ( (SpinLock != 0) != ((SpinLock & 0xFFFFFEFF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, SpinLock, SpinLock & 0xFFFFFEFF);
      v13 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( !v13 )
        WPP_SF_Zq(0x25u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, *((const wchar_t **)this + 485), this);
    }
    SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
    HIDWORD(a2->ShortRef.SpinLock) = SpinLock_high & 0xFFFFFFBF;
    if ( (SpinLock_high != 0) != ((SpinLock_high & 0xFFFFFFBF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, SpinLock_high, SpinLock_high & 0xFFFFFFBF);
      v13 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( !v13 )
        WPP_SF_Zq(0x26u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, *((const wchar_t **)this + 485), this);
    }
  }
  else
  {
    v11 = a2->ShortRef.SpinLock;
    LODWORD(a2->ShortRef.SpinLock) = v11 & 0xFFFFFEFF;
    if ( (v11 != 0) != ((v11 & 0xFFFFFEFF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v11, v11 & 0xFFFFFEFF);
      v13 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( !v13 )
        WPP_SF_Zq(0x27u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, *((const wchar_t **)this + 485), this);
    }
    v12 = HIDWORD(a2->ShortRef.SpinLock);
    HIDWORD(a2->ShortRef.SpinLock) = v12 & 0xFFFFFFBF;
    if ( (v12 != 0) != ((v12 & 0xFFFFFFBF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12, v12 & 0xFFFFFFBF);
      v13 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( !v13 )
        WPP_SF_Zq(0x28u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, *((const wchar_t **)this + 485), this);
    }
  }
}
