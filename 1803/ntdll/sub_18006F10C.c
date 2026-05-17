/*
 * XREFs of sub_18006F10C @ 0x18006F10C
 * Callers:
 *     sub_1800309A4 @ 0x1800309A4 (sub_1800309A4.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006EE10 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     sub_18006FF54 @ 0x18006FF54 (sub_18006FF54.c)
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 *     sub_1800700D8 @ 0x1800700D8 (sub_1800700D8.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     sub_1800F82F0 @ 0x1800F82F0 (sub_1800F82F0.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 */

__int64 __fastcall sub_18006F10C(int a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int64 v14; // rax
  int v15; // eax
  char v16[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  int v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  __int128 v25; // [rsp+80h] [rbp+17h]
  char v26; // [rsp+D8h] [rbp+6Fh] BYREF
  char v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    v17 = 0LL;
    p_DestinationString = &DestinationString;
    v21 = 48;
    v22 = 0LL;
    v24 = 64;
    v25 = 0LL;
    if ( (int)ZwOpenKey(&v17, 131097LL, &v21) >= 0 )
    {
      v12 = sub_1800F8384(v17, a3, &v27, v16);
      if ( v12 >= 0 )
        goto LABEL_11;
      if ( a1 == 8 )
      {
        v26 = 0;
        if ( !(unsigned int)sub_1800F82F0(v17, &v26) && v26 == 1 )
          a1 = 4;
      }
      ZwClose(v17);
      v17 = 0LL;
    }
    v10 = sub_18006F938(0x2000000, 0, v8, v9, (__int64)&v18);
    v7 = v18;
    if ( v10 < 0 )
      v7 = 0LL;
    v18 = v7;
    if ( a1 != 8 )
    {
      if ( a1 != 4 )
        goto LABEL_10;
      if ( v7 )
      {
        RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
        v17 = 0LL;
        p_DestinationString = &DestinationString;
        v21 = 48;
        v22 = v7;
        v24 = 64;
        v25 = 0LL;
        v15 = ZwOpenKey(&v17, 131097LL, &v21);
      }
      else
      {
        v15 = -1073741772;
      }
      if ( v15 >= 0 )
        goto LABEL_10;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      v17 = 0LL;
      p_DestinationString = &DestinationString;
      v21 = 48;
      v22 = 0LL;
      v24 = 64;
      v25 = 0LL;
      v11 = ZwOpenKey(&v17, 131097LL, &v21);
      v12 = v11;
      if ( v11 >= 0 )
      {
LABEL_10:
        v12 = sub_18006FF54(v17, a2, a3);
LABEL_11:
        v7 = v18;
        goto LABEL_12;
      }
LABEL_21:
      if ( v11 == -1073741772 )
        v12 = 0;
      goto LABEL_11;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      v19 = 0LL;
      p_DestinationString = &DestinationString;
      v22 = v7;
      v21 = 48;
      v24 = 64;
      v25 = 0LL;
      if ( (int)ZwOpenKey(&v19, 131097LL, &v21) >= 0 )
      {
        v12 = sub_1800F8384(v19, a3, &v27, v16);
        if ( v12 >= 0 )
          goto LABEL_11;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      v22 = v18;
      v17 = 0LL;
      p_DestinationString = &DestinationString;
      v21 = 48;
      v24 = 64;
      v25 = 0LL;
      v11 = ZwOpenKey(&v17, 131097LL, &v21);
      v12 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      goto LABEL_21;
    }
    v12 = 0;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_12:
  if ( v17 )
  {
    ZwClose(v17);
    v7 = v18;
  }
  if ( v19 )
  {
    ZwClose(v19);
    v7 = v18;
  }
  if ( v7 )
    sub_18006F918(v7);
  if ( v12 < 0 )
  {
    if ( a2 && *a2 != v6 )
    {
      if ( *a2 )
        sub_1800700D8();
      goto LABEL_46;
    }
  }
  else if ( !*a2 )
  {
    v14 = sub_18007007C(1LL);
    *a2 = v14;
    if ( !v14 )
    {
      v12 = -1073741801;
LABEL_46:
      *a2 = v6;
    }
  }
  return (unsigned int)v12;
}
