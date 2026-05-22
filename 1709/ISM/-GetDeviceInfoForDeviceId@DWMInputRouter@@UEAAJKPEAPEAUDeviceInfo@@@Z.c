/*
 * XREFs of ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18001C060
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x180011EDC (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall DWMInputRouter::GetDeviceInfoForDeviceId(DWMInputRouter *this, int a2, struct DeviceInfo **a3)
{
  char *v3; // r9
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  int ValueForKey; // eax
  __int64 v7; // rcx
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (char *)this + 152;
  v4 = -2147467259;
  if ( a2 != *((_DWORD *)this + 42) )
  {
    v5 = 0;
    if ( *((_DWORD *)v3 + 2) )
    {
      while ( *(_DWORD *)(*(_QWORD *)v3 + 16LL * v5) != a2 )
      {
        if ( ++v5 >= *((_DWORD *)v3 + 2) )
          return v4;
      }
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey((__int64)v3, &v9, a3);
      v4 = ValueForKey;
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 2165, ValueForKey);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
  }
  return v4;
}
