/*
 * XREFs of ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180017550
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800171D0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x18002B8D4 (--1ViewHierarchy@@UEAA@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800AAD44 (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1800AF500 (--_EContextualProcessorManager@@MEAAPEAXI@Z.c)
 *     _CursorNotificationProcessor::OnMitMessageReceived_::_1_::dtor$1 @ 0x1800E3F9E (_CursorNotificationProcessor--OnMitMessageReceived_--_1_--dtor$1.c)
 *     _CursorNotificationProcessor::OnMitMessageReceived_::_1_::dtor$11 @ 0x1800E3FB6 (_CursorNotificationProcessor--OnMitMessageReceived_--_1_--dtor$11.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$3 @ 0x1800E6216 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x1800E6288 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$9.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$2 @ 0x1800E7C12 (_DWMInputRouter--HitTest_--_1_--dtor$2.c)
 *     _DWMInputRouter::GetTargetListFromHitTestResult_::_1_::dtor$0 @ 0x1800E7C36 (_DWMInputRouter--GetTargetListFromHitTestResult_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x1800E80A4 (_DWMCursorBroker--GetCursors_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$8 @ 0x1800E9133 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E9133.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v3 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(__int64 **)(a1 + 8);
    if ( v3 != v4 )
    {
      do
      {
        v5 = *v3;
        if ( *v3 )
        {
          *v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v3;
      }
      while ( v3 != v4 );
      v3 = *(__int64 **)a1;
    }
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete(v3);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v3 & 0x1F) == 0 )
      {
        v7 = *(v3 - 1);
        if ( v7 < (unsigned __int64)v3 && (unsigned __int64)v3 - v7 - 8 <= 0x1F )
        {
          v3 = (__int64 *)*(v3 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x180017619LL);
  }
}
