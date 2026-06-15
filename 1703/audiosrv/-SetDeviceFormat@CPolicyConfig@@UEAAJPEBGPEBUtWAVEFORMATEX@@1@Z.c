/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x18009DE00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DBFC (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4)
{
  struct IMMDevice *v6; // rcx
  int v7; // ebx
  int v8; // eax
  struct IMMDevice *v10; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v10 = 0LL;
  if ( !a2 || !a3 )
  {
    v7 = -2147467261;
LABEL_6:
    if ( v7 >= 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **, const struct tWAVEFORMATEX *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v10,
         a4);
  if ( v7 >= 0 )
  {
    v8 = CPolicyConfig::SetDeviceFormat(this, (struct IUnknown *)v10, a3);
    v6 = v10;
    v7 = v8;
    goto LABEL_6;
  }
LABEL_7:
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormat", 2648, v7);
  v6 = v10;
LABEL_8:
  if ( v6 )
    ((void (__fastcall *)(struct IMMDevice *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v7;
}
