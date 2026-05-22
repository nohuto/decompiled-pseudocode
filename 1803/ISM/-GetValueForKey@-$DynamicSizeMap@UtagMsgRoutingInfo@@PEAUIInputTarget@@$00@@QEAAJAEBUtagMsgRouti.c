/*
 * XREFs of ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x180081758
 * Callers:
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18007DAF0 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18007DCD0 (-InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18007E104 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18007E21C (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180086670 (-ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

__int64 __fastcall DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // r10d
  _QWORD *v10; // r11

  v3 = 0;
  if ( operator==(a2, a1 + 16) || !v4 )
  {
    v3 = -2147024809;
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  else
  {
    v6 = 0LL;
    if ( *((_DWORD *)v5 + 2) )
    {
      v7 = *v5;
      while ( !operator==(v7 + 48 * v6, a2) )
      {
        v6 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v6 >= v9 )
          return (unsigned int)-2147467259;
      }
      *v10 = *(_QWORD *)(v7 + 48 * v8 + 40);
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  return v3;
}
