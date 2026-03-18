/*
 * XREFs of ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C0218874
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021DA00 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceCaps(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct UsageValueInfo *a2,
        struct UsageValueInfo *a3,
        struct InkDevice::Capabilities *a4)
{
  _BYTE *v5; // rsi
  unsigned int v9; // r12d
  struct UsageValueInfo *v10; // rdi
  USAGE v11; // r9
  USAGE v12; // dx
  NTSTATUS SpecificValueCaps; // ebx
  const GUID *v14; // r8
  const GUID *v15; // r9
  _BYTE *v16; // rsi
  struct UsageValueInfo *v17; // rdi
  char v18; // al
  unsigned int v19; // r14d
  USAGE v20; // r9
  USAGE v21; // dx
  USHORT ValueCapsLength[4]; // [rsp+40h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-90h] BYREF
  USHORT *v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-68h]

  v5 = &unk_1C02EE854;
  v9 = 0;
  v10 = a2;
  while ( 1 )
  {
    v11 = *((_WORD *)v5 - 1);
    v12 = *((_WORD *)v5 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          v12,
                          0,
                          v11,
                          (PHIDP_VALUE_CAPS)((char *)a2 + 76 * v9 + 4),
                          ValueCapsLength,
                          PreparsedData);
    if ( SpecificValueCaps < 0 )
    {
      *(_BYTE *)v10 = 0;
      if ( *v5 )
        goto LABEL_11;
      SpecificValueCaps = 0;
      goto LABEL_8;
    }
    *(_BYTE *)v10 = 1;
    if ( *((_BYTE *)v10 + 6) != *((_BYTE *)a2 + 6) )
      break;
LABEL_8:
    ++v9;
    v10 = (struct UsageValueInfo *)((char *)v10 + 76);
    v5 += 6;
    if ( v9 >= 7 )
      goto LABEL_11;
  }
  if ( !*v5 )
  {
    *(_BYTE *)v10 = 0;
    goto LABEL_8;
  }
  SpecificValueCaps = -1073741762;
LABEL_11:
  if ( SpecificValueCaps < 0 )
  {
    if ( hProvider > 2u )
      goto LABEL_13;
    return (unsigned int)SpecificValueCaps;
  }
  v16 = &unk_1C02EE848;
  *(_BYTE *)a4 = *((_BYTE *)a2 + 6);
  v17 = a3;
  *((_BYTE *)a4 + 2) = *((_BYTE *)a2 + 380);
  v18 = *((_BYTE *)a2 + 456);
  v19 = 0;
  *((_BYTE *)a4 + 1) = v18;
  while ( 2 )
  {
    v20 = *((_WORD *)v16 - 1);
    v21 = *((_WORD *)v16 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Output,
                          v21,
                          0,
                          v20,
                          (PHIDP_VALUE_CAPS)((char *)a3 + 76 * v19 + 4),
                          ValueCapsLength,
                          PreparsedData);
    if ( SpecificValueCaps < 0 )
    {
      *(_BYTE *)v17 = 0;
      if ( *v16 )
        goto LABEL_24;
      SpecificValueCaps = 0;
LABEL_21:
      ++v19;
      v17 = (struct UsageValueInfo *)((char *)v17 + 76);
      v16 += 6;
      if ( v19 )
        goto LABEL_24;
      continue;
    }
    break;
  }
  *(_BYTE *)v17 = 1;
  if ( *((_BYTE *)v17 + 6) == *((_BYTE *)a3 + 6) )
    goto LABEL_21;
  if ( !*v16 )
  {
    *(_BYTE *)v17 = 0;
    goto LABEL_21;
  }
  SpecificValueCaps = -1073741762;
LABEL_24:
  if ( SpecificValueCaps >= 0 )
  {
    if ( *((_WORD *)a3 + 11) == 8 )
    {
      *((_BYTE *)a4 + 4) = *((_BYTE *)a3 + 6);
      *((_DWORD *)a4 + 2) = *((unsigned __int16 *)a3 + 12);
      return (unsigned int)SpecificValueCaps;
    }
    if ( hProvider > 2u )
    {
      *(_DWORD *)ValueCapsLength = -1073741762;
      v25 = ValueCapsLength;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v14, v15, 3u, &pData);
    }
    return 3221225534LL;
  }
  else
  {
    if ( hProvider > 2u )
    {
LABEL_13:
      *(_DWORD *)ValueCapsLength = SpecificValueCaps;
      v25 = ValueCapsLength;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v14, v15, 3u, &pData);
    }
    return (unsigned int)SpecificValueCaps;
  }
}
