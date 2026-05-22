/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18007E104
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18007EC14 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18001827C (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x180081704 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x180081758 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // r15
  int ValueForKey; // esi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v14[4]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v15[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v16; // [rsp+70h] [rbp+17h]

  v14[1] = -2LL;
  v14[2] = (__int64)a3;
  v8 = a1 + 88;
  if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(a1 + 88)
    || (v15[0] = *(_OWORD *)a2,
        v15[1] = *(_OWORD *)(a2 + 16),
        v16 = *(_QWORD *)(a2 + 32),
        ValueForKey = (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD))(*(_QWORD *)(a1 + 56) + 24LL))(
                        a1 + 56,
                        v15,
                        0LL,
                        0LL),
        ValueForKey >= 0) )
  {
    v10 = *a3;
    if ( *a3 )
    {
      v14[0] = *a3;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      ValueForKey = DWMInputTarget::Create(a2, v14, (__int64)a4);
    }
    else
    {
      v14[0] = 0LL;
      ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(v8, a2, v14);
      if ( ValueForKey >= 0 )
      {
        v11 = v14[0];
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14[0] + 8LL))(v14[0]);
        *a4 = v11;
      }
      else
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
    }
  }
  v12 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)ValueForKey;
}
