/*
 * XREFs of ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180080A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x180081A6C (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall DWMInputRouter::GetDeviceInfoForDeviceId(DWMInputRouter *this, int a2, struct DeviceInfo **a3)
{
  char *v3; // r9
  int ValueForKey; // ebx
  unsigned int v5; // ecx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (char *)this + 184;
  ValueForKey = -2147467259;
  if ( a2 != *((_DWORD *)this + 50) )
  {
    v5 = 0;
    if ( *((_DWORD *)v3 + 2) )
    {
      while ( *(_DWORD *)(*(_QWORD *)v3 + 16LL * v5) != a2 )
      {
        if ( ++v5 >= *((_DWORD *)v3 + 2) )
          return (unsigned int)ValueForKey;
      }
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey(v3, &v7, a3);
      if ( ValueForKey < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
    }
  }
  return (unsigned int)ValueForKey;
}
