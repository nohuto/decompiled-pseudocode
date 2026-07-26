/*
 * XREFs of ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00B5340
 * Callers:
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C011C2E0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ndisReadRegistry @ 0x1C011C400 (ndisReadRegistry.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001F110 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1C0041BF8 (WPP_SF_Sd.c)
 *     ndisReadKnob @ 0x1C00B5460 (ndisReadKnob.c)
 */

__int64 __fastcall ndisReadRegistryKnobs(
        struct _DRIVER_OBJECT *a1,
        const struct NDIS_REGISTRY_KNOB *a2,
        unsigned __int64 a3)
{
  PVOID v3; // r14
  unsigned __int64 v4; // rsi
  const struct NDIS_REGISTRY_KNOB *v5; // rdi
  char *v6; // rdx
  _DWORD *v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // r14
  int v13; // eax
  HANDLE Handle; // [rsp+60h] [rbp+30h] BYREF
  HANDLE v16; // [rsp+70h] [rbp+40h] BYREF
  void *v17; // [rsp+78h] [rbp+48h]

  Handle = a1;
  v3 = ndisDriverObject;
  v4 = a3;
  v5 = a2;
  if ( a3 )
  {
    v6 = (char *)a2 + 8;
    do
    {
      v7 = *(_DWORD **)v6;
      v8 = *((_DWORD *)v6 + 2);
      v6 += 24;
      *v7 = v8;
      --a3;
    }
    while ( a3 );
  }
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v9 = IoOpenDriverRegistryKey(v3, 1LL, 1LL);
  v10 = v9;
  if ( v9 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0xBu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, v9);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &Handle,
      v17);
    v17 = 0LL;
    v11 = IoOpenDriverRegistryKey(v3, 0LL, 1LL);
    v10 = v11;
    if ( v11 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_d(0xCu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, v11);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        &v16,
        v17);
      v12 = 0LL;
      if ( v4 )
      {
        while ( 1 )
        {
          v13 = ndisReadKnob(&v16, &Handle, v5);
          v10 = v13;
          if ( v13 )
            break;
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 5u )
            WPP_SF_Sd(
              0xDu,
              &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids,
              *(const wchar_t **)v5,
              **((_DWORD **)v5 + 1));
          ++v12;
          v5 = (const struct NDIS_REGISTRY_KNOB *)((char *)v5 + 24);
          if ( v12 >= v4 )
            goto LABEL_11;
        }
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_Sd(0xEu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, *(const wchar_t **)v5, v13);
      }
    }
LABEL_11:
    if ( Handle )
      ZwClose(Handle);
  }
  if ( v16 )
    ZwClose(v16);
  return v10;
}
