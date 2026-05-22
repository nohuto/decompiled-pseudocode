/*
 * XREFs of ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180019600
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x18001EAE0 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x18001EB34 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x18001EC18 (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180024078 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterInputHost(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  int ValueForKey; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (__int64 *)(a1 + 24);
  if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(a1 + 24) )
  {
    v13[0] = 0LL;
    ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(v2, a2, v13);
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v6 = 860;
      goto LABEL_5;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    v13[0] = 0LL;
    ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(v2, a2, v13);
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 867;
LABEL_5:
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v6, ValueForKey);
      }
LABEL_6:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v7 = 0LL;
    if ( !*((_DWORD *)v2 + 2) )
    {
LABEL_16:
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 221, 5);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 870, 5);
      }
      goto LABEL_6;
    }
    v8 = *v2;
    while ( !(unsigned __int8)operator==(v8 + 48 * v7, a2) )
    {
      v7 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)v2 + 2) )
        goto LABEL_16;
    }
    v11 = 6 * v9;
    *(_OWORD *)(v8 + 8 * v11) = *((_OWORD *)v2 + 1);
    *(_OWORD *)(v8 + 8 * v11 + 16) = *((_OWORD *)v2 + 2);
    *(_QWORD *)(v8 + 8 * v11 + 32) = v2[6];
    *(_QWORD *)(*v2 + 8 * v11 + 40) = 0LL;
    --*((_DWORD *)v2 + 3);
  }
  return 0LL;
}
