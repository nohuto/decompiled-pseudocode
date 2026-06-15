/*
 * XREFs of ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800BC2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800031F0 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  int PropertyStoreProperty; // ebx
  struct IMMDevice *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !a2 || !a5 )
  {
    PropertyStoreProperty = -2147467261;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyValue", 4002, PropertyStoreProperty);
    goto LABEL_7;
  }
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a2,
                            &v9);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_6;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v9, a3, a4, a5);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_6;
LABEL_7:
  if ( v9 )
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
  return (unsigned int)PropertyStoreProperty;
}
