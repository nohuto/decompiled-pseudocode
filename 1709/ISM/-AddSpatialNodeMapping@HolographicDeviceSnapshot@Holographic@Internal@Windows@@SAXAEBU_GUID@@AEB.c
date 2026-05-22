/*
 * XREFs of ?AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBUDynamicNodeInfo@234@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800B3788
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800B5690 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     _lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator() @ 0x1800BB3BC (_lambda_ee46ae3407b0869cacd23b14ef71fd42_--operator().c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800BCE50 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v6; // rbx
  const char *v7; // r9
  _QWORD v8[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  try
  {
    v6 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v6 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v6);
      v10 = v6;
      v8[0] = v6;
      v8[1] = a2;
      v8[2] = a3;
      v8[3] = &v10;
      std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::find(
        (char *)v6 + 72,
        &v11,
        a1);
      if ( v11 != *((_QWORD *)v6 + 9) )
      {
        lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator()(v8, v11 + 48);
        v6 = v10;
      }
      if ( v6 )
        ReleaseSRWLockExclusive((PSRWLOCK)v6);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x10A,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v7);
  }
}
