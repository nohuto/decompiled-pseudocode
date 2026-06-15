/*
 * XREFs of ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x18009C900
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18009C6DC (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::GetShareMode(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        enum _DeviceShareMode *a3)
{
  int PropertyStoreProperty; // ebx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  struct IMMDevice *v7; // [rsp+58h] [rbp+10h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v7 = 0LL;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a2,
                            &v7);
  if ( PropertyStoreProperty >= 0 )
  {
    PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(
                              (struct IUnknown *)v7,
                              0,
                              &PKEY_AudioEngine_ShareMode,
                              &pvar);
    if ( PropertyStoreProperty >= 0 )
    {
      if ( pvar.vt == 19 )
      {
        *(_DWORD *)a3 = pvar.lVal;
      }
      else if ( pvar.vt )
      {
        PropertyStoreProperty = -2147024809;
      }
      else
      {
        *(_DWORD *)a3 = 0;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( PropertyStoreProperty < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetShareMode", 3559, PropertyStoreProperty);
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  return (unsigned int)PropertyStoreProperty;
}
