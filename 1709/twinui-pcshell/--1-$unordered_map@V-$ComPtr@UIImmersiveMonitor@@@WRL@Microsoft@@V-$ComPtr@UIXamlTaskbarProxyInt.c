/*
 * XREFs of ??1?$unordered_map@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@6@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@@std@@QEAA@XZ @ 0x18014C334
 * Callers:
 *     _XamlTaskbarManager::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1801F024B (_XamlTaskbarManager--_scalar_deleting_destructor__--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::unordered_map<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>::~unordered_map<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>(
        _QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  v2 = a1[3];
  if ( v2 )
  {
    v3 = (__int64)(a1[5] - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        a1[3] = 0LL;
        a1[4] = 0LL;
        a1[5] = 0LL;
        return std::list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::~list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>(a1 + 1);
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18014C3B2LL);
  }
  return std::list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::~list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>(a1 + 1);
}
