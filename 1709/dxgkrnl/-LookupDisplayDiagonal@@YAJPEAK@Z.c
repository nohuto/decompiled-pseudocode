/*
 * XREFs of ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C01D43F0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C000BCF8 (RtlStringCchLengthW.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall LookupDisplayDiagonal(unsigned int *a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  wchar_t *Buffer; // r14
  unsigned int v5; // edi
  wchar_t **v6; // rsi
  const WCHAR *v7; // r12
  const wchar_t *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 v10; // r11
  SIZE_T v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-49h] BYREF
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  int v17; // [rsp+50h] [rbp-31h]
  const wchar_t *v18; // [rsp+58h] [rbp-29h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+88h] [rbp+7h]
  _BYTE v25[40]; // [rsp+90h] [rbp+Fh] BYREF
  size_t pcchLength; // [rsp+E8h] [rbp+67h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v2 + 24) = 1326LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v16 = 0LL;
  v17 = 292;
  v18 = L"PhoneManufacturerModelName";
  v20 = 16777217;
  p_UnicodeString = &UnicodeString;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  memset(v25, 0, sizeof(v25));
  v3 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo", &v16, 0LL, 0LL);
  if ( v3 >= 0 )
  {
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && UnicodeString.Length )
    {
      v5 = 0;
      v6 = &off_1C003B2A0;
      while ( 1 )
      {
        v7 = *v6;
        v8 = *v6;
        pcchLength = 0LL;
        v3 = RtlStringCchLengthW(v8, 0x800uLL, &pcchLength);
        if ( v3 < 0 )
          break;
        if ( !pcchLength )
          goto LABEL_20;
        v11 = (unsigned __int64)v10 >> 1;
        if ( *((_DWORD *)v6 + 2) && v11 >= pcchLength )
          v11 = pcchLength;
        if ( v11 == pcchLength )
        {
          if ( !RtlCompareUnicodeStrings(Buffer, v11, v7, v11, 1u) )
          {
            v3 = 0;
            *a1 = *((_DWORD *)&off_1C003B2A0 + 4 * v5 + 3);
            goto LABEL_17;
          }
          Buffer = UnicodeString.Buffer;
        }
        ++v5;
        v6 += 2;
        if ( v5 >= 0x53 )
          goto LABEL_16;
      }
      v13 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v13 + 24) = 1366LL;
      WdLogEvent5_WdAssertion(v13);
      if ( pcchLength )
        goto LABEL_17;
LABEL_20:
      v14 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v14 + 24) = 1367LL;
      WdLogEvent5_WdAssertion(v14);
    }
    else
    {
LABEL_16:
      v3 = -1073741275;
    }
  }
LABEL_17:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v3;
}
