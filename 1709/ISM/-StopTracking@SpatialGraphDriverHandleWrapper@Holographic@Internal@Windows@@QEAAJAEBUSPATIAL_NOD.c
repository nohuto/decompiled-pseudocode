/*
 * XREFs of ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B7AD8
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800B67B0 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18007809C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18007BCB4 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x1800B7D80 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800B9D38 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
        struct _RTL_CRITICAL_SECTION *a1,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  __int64 *v6; // rbx
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  int v9; // edi
  int v10; // eax
  const char *v11; // r9
  unsigned int v12; // edi
  __int64 result; // rax
  char *v14; // [rsp+20h] [rbp-58h]
  char *v15; // [rsp+20h] [rbp-58h]
  const char *v16; // [rsp+28h] [rbp-50h]
  const char *v17; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v6 = (__int64 *)&a1[3];
    EnterCriticalSection(a1 + 3);
    v20 = v6;
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
      &a1[4],
      &v19,
      a2);
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x440,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(v19 == (__int64 *)a1[4].DebugInfo),
      (unsigned __int16 *)"StopTracking() called without corresponding StartTracking() call",
      v16);
    v7 = (__int64 *)((char *)v19 + 44);
    if ( a3 != 1 )
    {
      if ( a3 != 2 )
      {
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0x45,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
          "Invalid state passed to GetCountForState",
          v14);
        __debugbreak();
      }
      v7 = v19 + 6;
    }
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x441,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(*(_DWORD *)v7 == 0),
      (unsigned __int16 *)"TrackingState ref count is incorrect",
      v17);
    v8 = (__int64 *)((char *)v19 + 44);
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0x45,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
          "Invalid state passed to GetCountForState",
          v15);
        __debugbreak();
      }
      v8 = v19 + 6;
    }
    --*(_DWORD *)v8;
    v10 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::CheckForTrackingStateTransition(
            (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)a1,
            a2,
            (struct Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *)((char *)v19 + 44));
    v12 = v10;
    if ( v10 >= 0 )
    {
      if ( !(*((_DWORD *)v19 + 11) + *((_DWORD *)v19 + 12)) )
        std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
          &a1[4].DebugInfo,
          &v20,
          v19);
      if ( v6 )
        LeaveCriticalSection((LPCRITICAL_SECTION)v6);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x44C,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v10);
      if ( !(*((_DWORD *)v19 + 11) + *((_DWORD *)v19 + 12)) )
        std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
          &a1[4].DebugInfo,
          &v20,
          v19);
      if ( v6 )
        LeaveCriticalSection((LPCRITICAL_SECTION)v6);
      result = v12;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x44F,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v11);
  }
  return result;
}
