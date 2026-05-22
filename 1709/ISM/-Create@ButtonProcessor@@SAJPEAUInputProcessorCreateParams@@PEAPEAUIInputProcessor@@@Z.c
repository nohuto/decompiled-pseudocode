/*
 * XREFs of ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003A6D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180011CEC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ @ 0x18003A5FC (-FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18006D560 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rbx
  unsigned int v7; // edi
  int v8; // r9d
  __int64 *v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF
  __int128 v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-10h]
  char v19; // [rsp+5Ch] [rbp-Ch]

  v4 = (__int64 *)malloc(0x150uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x150uLL);
  if ( v6 )
  {
    NonPointerProcessor::NonPointerProcessor((NonPointerProcessor *)v6, *a1, a1[1]);
    *v6 = (__int64)&ButtonProcessor::`vftable'{for `IInputProcessor'};
    v6[1] = (__int64)&ButtonProcessor::`vftable'{for `RefCountedObject'};
    v6[6] = 0LL;
    v6[7] = 0LL;
    v6[8] = 0LL;
    v6[9] = 0LL;
    v6[11] = 0LL;
    memset(v6 + 12, 0, 0xEDuLL);
    v16 = 0LL;
    v17 = 0LL;
    v18 = -1;
    v19 = 1;
    v9 = v6 + 6;
    v10 = v6[6];
    if ( v10 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = CoreUICreate(v6 + 6);
    v7 = v11;
    if ( v11 >= 0 )
    {
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        v6 + 7,
        *v9);
      ButtonProcessor::FindRemoteEndpoint((ButtonProcessor *)v6);
      *((_WORD *)v6 + 40) = 0;
      v13 = v6[9];
      if ( v13 )
      {
        v6[9] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      RegistryWatcher::Create(
        v13,
        L"SYSTEM\\INPUT\\BUTTONS",
        v6,
        (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
        (struct RegistryWatcher **)v6 + 9);
      *(_DWORD *)(v6[4] + 4) |= 4u;
      *(_QWORD *)&v16 = v6[4];
      *(_QWORD *)&v17 = v6;
      *((_QWORD *)&v16 + 1) = v6[3];
      v14 = v6[11];
      if ( v14 )
      {
        v6[11] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v11 = CreateChildInputProcessor(4, &v16, (__int64)(v6 + 11));
      v7 = v11;
      if ( v11 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_21:
        if ( (v7 & 0x80000000) == 0 )
        {
          *a2 = (struct IInputProcessor *)v6;
          return v7;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 125;
          goto LABEL_7;
        }
        return v7;
      }
      v12 = 76;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_21;
      v12 = 45;
    }
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v12, v11);
    goto LABEL_21;
  }
  v7 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 122;
LABEL_7:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v8, v7);
  }
  return v7;
}
