/*
 * XREFs of ndisPowerStateCallback @ 0x1C00B5AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 */

__int64 __fastcall ndisPowerStateCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  __int64 v7; // rax
  int v8; // ecx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( Value && ValueLength >= 4 )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_d(0x38u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, *Value);
    v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
      v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    if ( !v7 )
    {
      v8 = (_BYTE)ndisAcOnLine == 1;
      if ( *Value && (unsigned int)(*Value - 1) <= 1 )
      {
        ndisAcOnLine = 0;
      }
      else
      {
        ndisAcOnLine = 1;
        v4 = 1;
      }
      v10 = v4;
      if ( v4 != v8 )
        ndisNotifyMiniports(0LL, 1LL, &v10, Context);
    }
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_d(0x39u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, *Value);
  }
  return 0LL;
}
