/*
 * XREFs of ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B76EC
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800B6A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?swap@?$function@$$A6AXXZ@std@@QEAAXAEAV12@@Z @ 0x18001FDC0 (-swap@-$function@$$A6AXXZ@std@@QEAAXAEAV12@@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18007809C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18007BCB4 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x1800B7D80 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800B9D38 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 *     ??$_Buynode@U?$pair@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@$$QEAU?$pair@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@1@@Z @ 0x1800BD1DC (--$_Buynode@U-$pair@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Hologr.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1800BD22C (--$_Insert_hint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWra.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking(
        struct _RTL_CRITICAL_SECTION *a1,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  __int64 (__fastcall ***v5)(); // rdx
  _DWORD *v6; // rdx
  __int64 v7; // r8
  __int64 (__fastcall ***v8)(); // rdx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  __int128 *v10; // rax
  __int64 v11; // rax
  int v12; // eax
  const char *v13; // r9
  unsigned int v14; // ebx
  _QWORD *v15; // rdx
  __int64 result; // rax
  _QWORD *v17; // rdx
  char *v18; // [rsp+20h] [rbp-128h]
  char *v19; // [rsp+20h] [rbp-128h]
  const char *v20; // [rsp+28h] [rbp-120h]
  const char *v21; // [rsp+28h] [rbp-120h]
  __int64 v22; // [rsp+30h] [rbp-118h] BYREF
  __int128 v23; // [rsp+38h] [rbp-110h] BYREF
  __int128 v24; // [rsp+48h] [rbp-100h] BYREF
  __int64 v25; // [rsp+58h] [rbp-F0h]
  int v26; // [rsp+60h] [rbp-E8h]
  __int64 v27; // [rsp+68h] [rbp-E0h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+70h] [rbp-D8h]
  _QWORD *v29; // [rsp+78h] [rbp-D0h]
  char v30; // [rsp+80h] [rbp-C8h]
  __int64 (__fastcall **v31)(); // [rsp+90h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+98h] [rbp-B0h]
  __int64 (__fastcall ***v33)(); // [rsp+C8h] [rbp-80h]
  _QWORD v34[7]; // [rsp+D0h] [rbp-78h] BYREF
  _QWORD *v35; // [rsp+108h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]
  int v37; // [rsp+160h] [rbp+18h] BYREF

  v37 = a3;
  v27 = -2LL;
  try
  {
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x41E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(a3 == 0),
      (unsigned __int16 *)"StartTracking called with TrackingStateStopped",
      v20);
    EnterCriticalSection(a1 + 3);
    v28 = a1 + 3;
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
      &a1[4],
      &v22,
      a2);
    v34[0] = off_1800D9210;
    v35 = v34;
    v29 = v34;
    v30 = 1;
    if ( (PRTL_CRITICAL_SECTION_DEBUG)v22 == a1[4].DebugInfo )
    {
      *(_QWORD *)&v23 = a1;
      *((_QWORD *)&v23 + 1) = &v22;
      v31 = off_1800D94E8;
      v32 = v23;
      v33 = &v31;
      std::function<void (void)>::swap((__int64)&v31, (__int64)v34);
      if ( v33 )
      {
        v8 = &v31;
        LOBYTE(v8) = v33 != &v31;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v33)[4])(v33, v8);
      }
      DebugInfo = a1[4].DebugInfo;
      *(_QWORD *)&v23 = 0LL;
      DWORD2(v23) = 0;
      if ( v37 == 1 )
      {
        v10 = &v23;
      }
      else
      {
        if ( v37 != 2 )
        {
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x45,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
            "Invalid state passed to GetCountForState",
            v18);
          __debugbreak();
        }
        v10 = (__int128 *)((char *)&v23 + 4);
      }
      ++*(_DWORD *)v10;
      v24 = *(_OWORD *)a2;
      v25 = v23;
      v26 = DWORD2(v23);
      v11 = std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Buynode<std::pair<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>(
              &a1[4],
              &v24);
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Insert_hint<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>,void *> *>(
        &a1[4],
        &v23,
        DebugInfo,
        v11 + 28,
        v11);
      v7 = v23;
      v22 = v23;
    }
    else
    {
      wil::details::in1diag3::FailFast_IfMsg(
        retaddr,
        (void *)0x429,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(*(_DWORD *)(v22 + 44) + *(_DWORD *)(v22 + 48) == 0),
        (unsigned __int16 *)"NodeId should not be in map if TrackingState ref count < 1",
        v21);
      *(_QWORD *)&v23 = &v22;
      *((_QWORD *)&v23 + 1) = &v37;
      v31 = off_1800D9190;
      v32 = v23;
      v33 = &v31;
      std::function<void (void)>::swap((__int64)&v31, (__int64)v34);
      if ( v33 )
      {
        v5 = &v31;
        LOBYTE(v5) = v33 != &v31;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v33)[4])(v33, v5);
      }
      v6 = (_DWORD *)(v22 + 44);
      if ( v37 != 1 )
      {
        if ( v37 != 2 )
        {
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x45,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
            "Invalid state passed to GetCountForState",
            v19);
          __debugbreak();
        }
        v6 = (_DWORD *)(v22 + 48);
      }
      ++*v6;
      v7 = v22;
    }
    v12 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::CheckForTrackingStateTransition(
            (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)a1,
            a2,
            (struct Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *)(v7 + 44));
    v14 = v12;
    if ( v12 >= 0 )
    {
      if ( v35 )
      {
        v17 = v34;
        LOBYTE(v17) = v35 != v34;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v35 + 32LL))(v35, v17);
        v35 = 0LL;
      }
      if ( a1 != (struct _RTL_CRITICAL_SECTION *)-120LL )
        LeaveCriticalSection(a1 + 3);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x433,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v12);
      if ( !v35 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      if ( v35 )
      {
        v15 = v34;
        LOBYTE(v15) = v35 != v34;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v35 + 32LL))(v35, v15);
        v35 = 0LL;
      }
      if ( a1 != (struct _RTL_CRITICAL_SECTION *)-120LL )
        LeaveCriticalSection(a1 + 3);
      result = v14;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x438,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v13);
  }
  return result;
}
