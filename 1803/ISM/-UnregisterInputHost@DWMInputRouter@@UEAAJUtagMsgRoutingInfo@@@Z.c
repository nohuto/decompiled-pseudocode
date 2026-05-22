/*
 * XREFs of ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18007DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x180081704 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x180081758 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800817FC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterInputHost(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  signed int ValueForKey; // ebx
  int (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // r14
  int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  int v10; // eax
  char v11; // r9
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // rcx
  int (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a1 + 4;
  ValueForKey = 0;
  if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(a1 + 4) )
  {
    v17 = 0LL;
    ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(v2, a2, &v17);
    if ( ValueForKey < 0 )
      goto LABEL_26;
    v6 = v17;
    v18[0] = 0LL;
    if ( (**v17)(v17, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, v18) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v18[0] + 24LL))(v18[0], 0LL, 0LL);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2FE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      v8 = (_QWORD *)a1[79];
      v9 = (_QWORD *)a1[80];
      while ( v8 != v9 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 24LL))(*v8, v18[0]);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x302,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v10);
          JUMPOUT(0x18007DCC2LL);
        }
        ++v8;
      }
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
    v17 = 0LL;
    ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(v2, a2, &v17);
    if ( ValueForKey < 0 )
      goto LABEL_26;
    v11 = 0;
    v12 = 0LL;
    if ( *((_DWORD *)v2 + 2) )
    {
      v13 = *v2;
      while ( !operator==(v13 + 48 * v12, a2) )
      {
        v12 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)v2 + 2) )
          goto LABEL_16;
      }
      v11 = 1;
      v15 = 6 * v14;
      *(_OWORD *)(v13 + 8 * v15) = *((_OWORD *)v2 + 1);
      *(_OWORD *)(v13 + 8 * v15 + 16) = *((_OWORD *)v2 + 2);
      *(_QWORD *)(v13 + 8 * v15 + 32) = v2[6];
      *(_QWORD *)(*v2 + 8 * v15 + 40) = 0LL;
      --*((_DWORD *)v2 + 3);
    }
LABEL_16:
    ValueForKey = v11 == 0 ? 0x80004005 : 0;
    if ( !v11 )
    {
LABEL_26:
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  return (unsigned int)ValueForKey;
}
