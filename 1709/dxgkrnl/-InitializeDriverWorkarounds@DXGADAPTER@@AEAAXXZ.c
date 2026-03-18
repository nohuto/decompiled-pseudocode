/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0114144
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C01200AC (-xwtol@@YAKPEBG@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  const wchar_t *v5; // rcx
  wchar_t *v6; // rax
  __int64 v7; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-19h] BYREF
  int v10; // [rsp+50h] [rbp-11h]
  const wchar_t *v11; // [rsp+58h] [rbp-9h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+60h] [rbp-1h]
  int v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+88h] [rbp+27h]
  _BYTE v18[40]; // [rsp+90h] [rbp+2Fh] BYREF
  int Key; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *((_DWORD *)this + 492);
  if ( v2 == 8704 )
  {
    if ( (*((_DWORD *)this + 75) & 0x200) == 0 )
    {
LABEL_4:
      v3 = *((_DWORD *)this + 69);
      if ( v3 == 32902 || v3 == 4098 )
        *((_DWORD *)this + 971) |= 0x40u;
      goto LABEL_6;
    }
    *((_BYTE *)this + 2268) = 1;
  }
  if ( v2 < 0x2000 )
    goto LABEL_9;
  if ( v2 <= 8960 )
    goto LABEL_4;
LABEL_6:
  v4 = *((_DWORD *)this + 69);
  if ( v4 == 4318 || v4 == 4098 )
  {
    *((_DWORD *)this + 423) |= 0x40u;
  }
  else if ( v4 == 32902 && (*((_DWORD *)this + 423) & 0x40) != 0 )
  {
    Key = *((_DWORD *)this + 70);
    if ( bsearch(&Key, &unk_1C0043340, 0x18uLL, 4uLL, UintCompareFunc) )
    {
      v5 = (const wchar_t *)*((_QWORD *)this + 165);
      if ( v5 )
      {
        v6 = wcsrchr(v5, 0x2Eu);
        if ( v6 )
        {
          v7 = -1LL;
          do
            ++v7;
          while ( v6[v7] );
          if ( v7 == 5 && xwtol(v6 + 1) - 1 <= 0x116D )
            *((_DWORD *)this + 423) &= ~0x40u;
        }
      }
    }
  }
LABEL_9:
  if ( g_IsMobileCore && *((_DWORD *)this + 69) == 1297040209 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 2000 )
    {
      *((_DWORD *)this + 971) |= 0x10u;
      v11 = L"PhoneSOCVersion";
      *(_DWORD *)&UnicodeString.Length = 0;
      UnicodeString.Buffer = 0LL;
      v9 = 0LL;
      v10 = 292;
      p_UnicodeString = &UnicodeString;
      v13 = 16777217;
      v14 = 0LL;
      v15 = 0;
      v16 = 0LL;
      v17 = 0;
      memset(v18, 0, sizeof(v18));
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v9,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        *((_DWORD *)this + 971) |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 1300 )
      *((_DWORD *)this + 971) |= 0xBu;
    if ( *((_DWORD *)this + 492) == 4608 )
      *((_DWORD *)this + 971) |= 4u;
  }
}
