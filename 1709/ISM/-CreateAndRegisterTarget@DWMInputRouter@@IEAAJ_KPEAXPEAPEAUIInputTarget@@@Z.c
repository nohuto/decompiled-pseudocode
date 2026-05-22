/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJ_KPEAXPEAPEAUIInputTarget@@@Z @ 0x180019CA4
 * Callers:
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x18001EAE0 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x18001EB34 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z @ 0x180021364 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        __int64 a2,
        void *a3,
        struct IInputTarget **a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // r9d
  __int64 v12; // rax
  __int64 (__fastcall *v13)(char *, _OWORD *, _QWORD, _QWORD); // rax
  int ValueForKey; // eax
  __int64 v15; // rcx
  struct IInputTarget *v16; // rbx
  struct IInputTarget *v18; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v19[40]; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v21; // [rsp+80h] [rbp+7h]

  memset(v19, 0, sizeof(v19));
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 17) + 112LL))(
         *((_QWORD *)this + 17),
         a2,
         v19);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey((char *)this + 80)
      || (v12 = *((_QWORD *)this + 7),
          v20[0] = *(_OWORD *)v19,
          v13 = *(__int64 (__fastcall **)(char *, _OWORD *, _QWORD, _QWORD))(v12 + 24),
          v20[1] = *(_OWORD *)&v19[16],
          v21 = *(_QWORD *)&v19[32],
          v8 = v13((char *)this + 56, v20, 0LL, 0LL),
          v10 = v8,
          v8 >= 0) )
    {
      if ( a3 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *))(**((_QWORD **)this + 17) + 112LL))(
               *((_QWORD *)this + 17),
               a2,
               v20);
        v10 = v8;
        if ( v8 >= 0 )
        {
          v8 = DWMInputTarget::Create((const struct tagMsgRoutingInfo *)v20, a3, 0, 0, a4);
          v10 = v8;
          if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v11 = 1120;
            goto LABEL_22;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v11 = 1116;
          goto LABEL_22;
        }
      }
      else
      {
        v18 = 0LL;
        ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey((char *)this + 80, v19, &v18);
        v10 = ValueForKey;
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 1101, ValueForKey);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v16 = v18;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 8LL))(v18);
        *a4 = v16;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 1088;
      goto LABEL_22;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 1081;
LABEL_22:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v11, v8);
  }
  return v10;
}
