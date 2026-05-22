/*
 * XREFs of ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C74E0
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800C6564 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18000D670 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@@Z @ 0x180046E00 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A1100 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x1800C7798 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800C9820 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
        __int64 *a1,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
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
    v6 = a1 + 21;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 21));
    v20 = v6;
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
      a1 + 26,
      &v19,
      a2);
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x70E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(v19 == (__int64 *)a1[26]),
      (unsigned __int16 *)"StopTracking() called without corresponding StartTracking() call",
      v16);
    if ( a3 == 1 )
    {
      v8 = 16LL;
      v7 = 20LL;
    }
    else
    {
      if ( a3 != 2 )
      {
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0x53,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
          "Invalid state passed to GetCountForState",
          v14);
        __debugbreak();
      }
      v7 = 20LL;
      v8 = 20LL;
    }
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x70F,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(*(_DWORD *)((char *)v19 + v8 + 28) == 0),
      (unsigned __int16 *)"TrackingState ref count is incorrect",
      v17);
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0x53,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
          "Invalid state passed to GetCountForState",
          v15);
        JUMPOUT(0x1800C76FALL);
      }
    }
    else
    {
      v7 = 16LL;
    }
    --*(_DWORD *)((char *)v19 + v7 + 28);
    v10 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::CheckForTrackingStateTransition(
            (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)a1,
            a2,
            (struct Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *)((char *)v19 + 44));
    v12 = v10;
    if ( v10 >= 0 )
    {
      if ( !(*((_DWORD *)v19 + 11) + *((_DWORD *)v19 + 12)) )
        std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
          a1 + 26,
          &v20,
          v19);
      if ( v6 )
        LeaveCriticalSection((LPCRITICAL_SECTION)v6);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71A,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v10);
      if ( !(*((_DWORD *)v19 + 11) + *((_DWORD *)v19 + 12)) )
        std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
          a1 + 26,
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
                           (void *)0x71D,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v11);
  }
  return result;
}
