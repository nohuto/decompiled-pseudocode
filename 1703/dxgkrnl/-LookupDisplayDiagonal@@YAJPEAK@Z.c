/*
 * XREFs of ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C01BBDD4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00048CC (RtlStringCchLengthW.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall LookupDisplayDiagonal(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  NTSTATUS v6; // ebx
  unsigned int v7; // esi
  wchar_t **v8; // rdi
  const wchar_t *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  size_t v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  int v20; // [rsp+48h] [rbp-31h]
  const wchar_t *v21; // [rsp+50h] [rbp-29h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+58h] [rbp-21h]
  int v23; // [rsp+60h] [rbp-19h]
  __int64 v24; // [rsp+68h] [rbp-11h]
  int v25; // [rsp+70h] [rbp-9h]
  __int64 v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+80h] [rbp+7h]
  _BYTE v28[40]; // [rsp+88h] [rbp+Fh] BYREF
  size_t pcchLength; // [rsp+E0h] [rbp+67h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 1321LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v19 = 0LL;
  v20 = 292;
  v21 = L"PhoneManufacturerModelName";
  v23 = 16777217;
  p_UnicodeString = &UnicodeString;
  v24 = 0LL;
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  memset(v28, 0, sizeof(v28));
  v6 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo", &v19, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    if ( UnicodeString.Buffer && UnicodeString.Length )
    {
      v7 = 0;
      v8 = &off_1C00489B0;
      while ( 1 )
      {
        v9 = *v8;
        pcchLength = 0LL;
        v6 = RtlStringCchLengthW(v9, 0x800uLL, &pcchLength);
        if ( v6 < 0 )
          break;
        if ( !pcchLength )
          goto LABEL_19;
        v14 = (unsigned __int64)UnicodeString.Length >> 1;
        if ( *((_DWORD *)v8 + 2) && v14 >= pcchLength )
          v14 = pcchLength;
        if ( v14 == pcchLength && !RtlCompareUnicodeStrings(UnicodeString.Buffer, v14, *v8, v14, 1u) )
        {
          v6 = 0;
          *a1 = *((_DWORD *)&off_1C00489B0 + 4 * v7 + 3);
          goto LABEL_16;
        }
        ++v7;
        v8 += 2;
        if ( v7 >= 0x53 )
          goto LABEL_15;
      }
      v16 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v16 + 24) = 1361LL;
      WdLogEvent5_WdAssertion(v16);
      if ( pcchLength )
        goto LABEL_16;
LABEL_19:
      v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v17 + 24) = 1362LL;
      WdLogEvent5_WdAssertion(v17);
    }
    else
    {
LABEL_15:
      v6 = -1073741275;
    }
  }
LABEL_16:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v6;
}
