/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C010D948
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C0105EFC (-xwtol@@YAKPEBG@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  int v2; // eax
  const wchar_t *v3; // rcx
  wchar_t *v4; // rax
  __int64 v5; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-D0h] BYREF
  int Key; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v10; // [rsp+70h] [rbp-98h] BYREF
  __int64 v11; // [rsp+88h] [rbp-80h] BYREF
  int v12; // [rsp+90h] [rbp-78h]
  const wchar_t *v13; // [rsp+98h] [rbp-70h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+A0h] [rbp-68h]
  int v15; // [rsp+A8h] [rbp-60h]
  __int64 v16; // [rsp+B0h] [rbp-58h]
  int v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h]
  int v19; // [rsp+C8h] [rbp-40h]
  _QWORD v20[6]; // [rsp+D0h] [rbp-38h] BYREF
  int v21; // [rsp+100h] [rbp-8h]
  _BYTE v22[40]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v23; // [rsp+138h] [rbp+30h] BYREF
  __int64 v24; // [rsp+148h] [rbp+40h]
  int v25; // [rsp+150h] [rbp+48h]
  wchar_t v26; // [rsp+154h] [rbp+4Ch]
  _OWORD v27[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v28; // [rsp+178h] [rbp+70h]
  int v29; // [rsp+180h] [rbp+78h]
  char v30; // [rsp+188h] [rbp+80h] BYREF
  char v31; // [rsp+1A8h] [rbp+A0h] BYREF

  if ( *((int *)this + 486) >= 0x2000 )
  {
    v2 = *((_DWORD *)this + 69);
    if ( v2 == 4098 || v2 == 4318 )
    {
      *((_DWORD *)this + 417) |= 0x40u;
    }
    else if ( v2 == 32902 && (*((_DWORD *)this + 417) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 70);
      if ( bsearch(&Key, &unk_1C004BE90, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v3 = (const wchar_t *)*((_QWORD *)this + 162);
        if ( v3 )
        {
          v4 = wcsrchr(v3, 0x2Eu);
          if ( v4 )
          {
            v5 = -1LL;
            do
              ++v5;
            while ( v4[v5] );
            if ( v5 == 5 && (unsigned int)xwtol(v4 + 1) - 1 <= 0x116D )
              *((_DWORD *)this + 417) &= ~0x40u;
          }
        }
      }
    }
  }
  if ( g_IsMobileCore && *((_DWORD *)this + 69) == 1297040209 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 2000 )
    {
      *((_DWORD *)this + 967) |= 0x10u;
      v13 = L"PhoneSOCVersion";
      *(_DWORD *)&UnicodeString.Length = 0;
      UnicodeString.Buffer = 0LL;
      v11 = 0LL;
      v12 = 292;
      p_UnicodeString = &UnicodeString;
      v15 = 16777217;
      v16 = 0LL;
      v17 = 0;
      v18 = 0LL;
      v19 = 0;
      memset(v20, 0, 0x28uLL);
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v11,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        *((_DWORD *)this + 967) |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 1300 )
      *((_DWORD *)this + 967) |= 0xBu;
    if ( *((_DWORD *)this + 486) == 4608 )
      *((_DWORD *)this + 967) |= 4u;
  }
  if ( *((_DWORD *)this + 69) == 32902 && (int)DXGADAPTER::GetDriverVersion(this) <= 2100 )
  {
    v29 = *(_DWORD *)L"n";
    *(_DWORD *)&String1.Length = 2883626;
    String1.Buffer = (wchar_t *)v27;
    v25 = *(_DWORD *)L"op";
    v26 = aSurfaceLaptop[14];
    v10.Buffer = (wchar_t *)&v23;
    UnicodeString.Buffer = (wchar_t *)&v31;
    String2.Buffer = (wchar_t *)&v30;
    v13 = L"SystemManufacturer";
    v27[0] = *(_OWORD *)L"Microsoft Corporation";
    p_UnicodeString = &UnicodeString;
    v28 = *(_QWORD *)L"ation";
    v20[0] = L"SystemProductName";
    v27[1] = *(_OWORD *)L"t Corporation";
    v20[1] = &String2;
    v23 = *(_OWORD *)L"Surface Laptop";
    *(_DWORD *)&v10.Length = 1966108;
    v24 = *(_QWORD *)L"Laptop";
    *(_DWORD *)&UnicodeString.Length = 2883584;
    *(_DWORD *)&String2.Length = 1966080;
    v11 = 0LL;
    v12 = 292;
    v15 = 16777217;
    v16 = 0LL;
    v17 = 0;
    v18 = 0LL;
    v19 = 292;
    LODWORD(v20[2]) = 16777217;
    v20[3] = 0LL;
    LODWORD(v20[4]) = 0;
    v20[5] = 0LL;
    v21 = 0;
    memset(v22, 0, sizeof(v22));
    if ( (int)RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Hardware\\DESCRIPTION\\System\\BIOS", &v11, 0LL, 0LL) >= 0 )
    {
      if ( RtlEqualUnicodeString(&String1, &UnicodeString, 1u) )
      {
        if ( RtlEqualUnicodeString(&v10, &String2, 1u) )
          *((_DWORD *)this + 967) |= 0x40u;
      }
    }
  }
}
