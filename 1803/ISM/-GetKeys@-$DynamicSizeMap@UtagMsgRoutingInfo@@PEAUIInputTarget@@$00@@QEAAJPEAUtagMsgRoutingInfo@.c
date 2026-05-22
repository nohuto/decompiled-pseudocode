/*
 * XREFs of ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x1800819C8
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18007B6E8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x18007D410 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18007E21C (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180086670 (-ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

__int64 __fastcall DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // rcx

  v3 = 0;
  v4 = 0LL;
  v7 = a1;
  if ( !*(_DWORD *)(a1 + 8) )
    return v3;
  v8 = a1 + 16;
  while ( operator==(*(_QWORD *)v7 + 48 * v4, v8) )
  {
LABEL_6:
    v4 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v4 >= *(_DWORD *)(v7 + 8) )
      return v3;
  }
  if ( (_DWORD)v11 != a3 )
  {
    v12 = 5 * v11;
    *(_OWORD *)(a2 + 8 * v12) = *(_OWORD *)v9;
    *(_OWORD *)(a2 + 8 * v12 + 16) = *(_OWORD *)(v9 + 16);
    *(_QWORD *)(a2 + 8 * v12 + 32) = *(_QWORD *)(v9 + 32);
    goto LABEL_6;
  }
  v3 = -2147024809;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v3;
}
