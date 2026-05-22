/*
 * XREFs of ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x180081A6C
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180080A00 (-GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey(__int64 *a1, int *a2, _QWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r9d
  __int64 v7; // rdx

  v3 = *a2;
  v4 = 0;
  v5 = 0;
  if ( *a2 == *((_DWORD *)a1 + 4) || !a3 )
  {
    v5 = -2147024809;
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 2);
    if ( v6 )
    {
      v7 = *a1;
      while ( *(_DWORD *)(v7 + 16LL * v4) != v3 )
      {
        if ( ++v4 >= v6 )
          return (unsigned int)-2147467259;
      }
      *a3 = *(_QWORD *)(v7 + 16LL * v4 + 8);
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  return v5;
}
