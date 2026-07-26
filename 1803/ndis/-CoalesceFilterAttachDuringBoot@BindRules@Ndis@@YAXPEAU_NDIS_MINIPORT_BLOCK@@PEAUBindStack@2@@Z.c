/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BDB54
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C007D154 (WPP_SF__guid_D_ea_1C007D154.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  char v3; // r9
  unsigned __int64 BaseMiniport_high; // r10
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int SpinLock; // r8d
  int v11; // ecx
  int SpinLock_high; // r8d
  int v13; // r8d
  bool v14; // cf

  v3 = 0;
  if ( *((_BYTE *)this + 1995) )
  {
    BaseMiniport_high = HIDWORD(a2->BaseMiniport);
    for ( i = 0LL; i != BaseMiniport_high; ++i )
    {
      if ( i >= BaseMiniport_high )
        __fastfail(5u);
      v8 = *((_QWORD *)a2->MiniportAdapterContext + i);
      if ( *(_DWORD *)(v8 + 52) || *(_DWORD *)(v8 + 28) )
      {
        v9 = *(_QWORD *)(v8 + 80);
        if ( (*(_DWORD *)(v9 + 40) & 1) == 0 && !*(_QWORD *)(v9 + 56) && !*(_BYTE *)(v8 + 8) )
        {
          if ( (unsigned __int8)byte_1C0099623 >= 5u )
            WPP_SF__guid_D(0x22u, v8, v9 + 24, *(_DWORD *)(v8 + 88));
          v3 = 1;
          break;
        }
      }
    }
  }
  if ( v3 )
  {
    if ( Ndis::BindState::SetBinding((Ndis::BindState *)&a2->32, BindingDisabled, Reason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      WPP_SF_Zq(0x23u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 485), this);
    }
    if ( Ndis::BindState::SetPause((Ndis::BindState *)&a2->32, DatapathPaused, PauseReason_MandatoryMissingDuringBoot)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      WPP_SF_Zq(0x24u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 485), this);
    }
  }
  else
  {
    SpinLock = a2->ShortRef.SpinLock;
    v11 = 0;
    if ( *((_BYTE *)this + 1995) )
    {
      LODWORD(a2->ShortRef.SpinLock) = SpinLock & 0xFFFFFEFF;
      LOBYTE(v11) = (SpinLock & 0xFFFFFEFF) != 0;
      if ( (SpinLock != 0) != v11 || !*(_QWORD *)&a2->Reserved4.Length )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, SpinLock, SpinLock & 0xFFFFFEFF);
        v14 = (unsigned __int8)byte_1C0099623 < 4u;
        *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(0x25u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 485), this);
      }
      SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
      HIDWORD(a2->ShortRef.SpinLock) = SpinLock_high & 0xFFFFFFBF;
      if ( (SpinLock_high != 0) != ((SpinLock_high & 0xFFFFFFBF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, SpinLock_high, SpinLock_high & 0xFFFFFFBF);
        v14 = (unsigned __int8)byte_1C0099623 < 4u;
        *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(0x26u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 485), this);
      }
    }
    else
    {
      LODWORD(a2->ShortRef.SpinLock) = SpinLock & 0xFFFFFEFF;
      LOBYTE(v11) = (SpinLock & 0xFFFFFEFF) != 0;
      if ( (SpinLock != 0) != v11 || !*(_QWORD *)&a2->Reserved4.Length )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, SpinLock, SpinLock & 0xFFFFFEFF);
        v14 = (unsigned __int8)byte_1C0099623 < 4u;
        *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(0x27u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 485), this);
      }
      v13 = HIDWORD(a2->ShortRef.SpinLock);
      HIDWORD(a2->ShortRef.SpinLock) = v13 & 0xFFFFFFBF;
      if ( (v13 != 0) != ((v13 & 0xFFFFFFBF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v13, v13 & 0xFFFFFFBF);
        v14 = (unsigned __int8)byte_1C0099623 < 4u;
        *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(0x28u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, *((const wchar_t **)this + 485), this);
      }
    }
  }
}
