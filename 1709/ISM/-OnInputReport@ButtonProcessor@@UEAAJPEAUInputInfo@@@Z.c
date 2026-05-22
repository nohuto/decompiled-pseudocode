/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003A910
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180011CEC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ @ 0x18003A5FC (-FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x18003ACD8 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006D870 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonProcessor::OnInputReport(ButtonProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // r14
  __int64 v6; // r10
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int16 v11; // cx
  char v12; // al
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[356]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0;
  if ( (*(_DWORD *)a2 & 0x80) == 0 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 149, 87);
    return v4;
  }
  v5 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 8) || !*v5 )
    ButtonProcessor::FindRemoteEndpoint(this);
  v6 = *((unsigned int *)a2 + 174);
  if ( ((unsigned int)v6 > 0xD || *((_BYTE *)this + 81))
    && *((_BYTE *)this + 80)
    && (int)ButtonProcessor::ButtonToVKeyMapping(this, v6, &v19) >= 0 )
  {
    memset(v21, 0, sizeof(v21));
    v7 = (_DWORD *)*((_QWORD *)this + 4);
    HIDWORD(v21[0]) = *v7;
    LODWORD(v21[0]) = v7[1];
    LODWORD(v21[1]) = *((_DWORD *)a2 + 2);
    v21[2] = *((_QWORD *)a2 + 2);
    WORD1(v21[87]) = v19;
    WORD2(v21[87]) = 64;
    LODWORD(v21[5]) = 2848;
    if ( !*((_BYTE *)a2 + 700) )
      WORD2(v21[87]) = 65;
    v8 = *((_QWORD *)this + 11);
    BYTE1(v21[86]) = *((_BYTE *)a2 + 689);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, v21);
    v4 = v9;
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 191, v9);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    return v4;
  }
  if ( v5[1] && *v5 )
  {
    v11 = 0;
    v20 = 0LL;
    if ( *((_BYTE *)a2 + 689) )
    {
      if ( *((_BYTE *)this + v6 + 96) )
      {
        v4 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 202, 255);
        return v4;
      }
      v11 = 5;
    }
    else if ( *((_BYTE *)a2 + 700) )
    {
      v12 = *((_BYTE *)this + v6 + 96);
      if ( !v12 )
        *((_BYTE *)this + v6 + 96) = 1;
      v11 = (v12 != 0) + 1;
    }
    else if ( *((_BYTE *)this + v6 + 96) )
    {
      v11 = 4;
      *((_BYTE *)this + v6 + 96) = 0;
    }
    LODWORD(v20) = *((_DWORD *)a2 + 174);
    v13 = v11 | 0x8000;
    v14 = *((_QWORD *)this + 8);
    if ( !*((_BYTE *)a2 + 688) )
      v13 = v11;
    v15 = *((_QWORD *)this + 6);
    HIDWORD(v20) = v13;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64 *, int))(*(_QWORD *)v15 + 152LL))(
           v15,
           v14,
           4LL,
           &v20,
           8) < 0 )
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        v5,
        *v5);
  }
  else
  {
    v16 = NonPointerProcessor::OnInputReport(this, a2);
    v4 = v16;
    if ( v16 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 256, v16);
  }
  return v4;
}
