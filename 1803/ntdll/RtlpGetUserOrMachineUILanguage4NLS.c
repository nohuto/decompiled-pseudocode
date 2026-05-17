/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0
 * Callers:
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     sub_1800F29FC @ 0x1800F29FC (sub_1800F29FC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned __int64 *a3, __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-19h] BYREF
  __int64 v12; // [rsp+38h] [rbp-11h]
  __int64 v13; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  int v15; // [rsp+58h] [rbp+Fh]
  __int64 v16; // [rsp+60h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+70h] [rbp+27h]
  __int128 v19; // [rsp+78h] [rbp+2Fh]
  unsigned int v20; // [rsp+C8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v20 = 0;
  v11 = 7;
  v7 = sub_18006F938(0x2000000u, 0, (__int64)a3, a4, (__int64)&v13);
  if ( v7 < 0 )
    goto LABEL_21;
  v12 = 0LL;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v16 = v13;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    v16 = v13;
    v15 = 48;
    p_DestinationString = &DestinationString;
    v18 = 64;
    v19 = 0LL;
    v7 = ZwOpenKey();
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v7 = sub_18006F7EC(v12, (__int64)&DestinationString, &v11, 0LL, &v20);
      if ( v7 >= 0 )
        goto LABEL_10;
    }
    if ( v7 == -2147483643 )
      goto LABEL_10;
    ZwClose();
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v12 = 0LL;
    v16 = 0LL;
  }
  v15 = 48;
  p_DestinationString = &DestinationString;
  v18 = 64;
  v19 = 0LL;
  v7 = ZwOpenKey();
  if ( v7 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v7 = sub_18006F7EC(v12, (__int64)&DestinationString, &v11, 0LL, &v20);
LABEL_10:
  if ( v7 != -1073741772 && v20 )
  {
    if ( v7 != -2147483643 )
    {
LABEL_20:
      v7 = -1073741772;
      goto LABEL_21;
    }
    v8 = v20 + 1;
    v9 = (unsigned int)v8 >> 1;
    if ( !a2 )
    {
      v7 = 0;
LABEL_15:
      *a3 = v9;
      goto LABEL_21;
    }
    if ( *a3 < v8 >> 1 )
    {
      v7 = -1073741789;
      goto LABEL_15;
    }
    v7 = sub_18006F7EC(v12, (__int64)&DestinationString, &v11, a2, &v20);
    if ( v7 >= 0 )
    {
      if ( v11 == 7 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( v13 )
  {
    sub_18006F918(v13);
    v13 = 0LL;
  }
  if ( v12 )
    ZwClose();
  return (unsigned int)v7;
}
