/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C014AEDC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C01A9454 (-xwtol@@YAKPEBG@Z.c)
 *     ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9174 (-CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  const wchar_t *v5; // rcx
  wchar_t *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  enum _QAI_DRIVERVERSION DriverVersion; // eax
  DXGADAPTER *v11; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h] BYREF
  int v14; // [rsp+50h] [rbp-11h]
  const wchar_t *v15; // [rsp+58h] [rbp-9h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+60h] [rbp-1h]
  int v17; // [rsp+68h] [rbp+7h]
  __int64 v18; // [rsp+70h] [rbp+Fh]
  int v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+88h] [rbp+27h]
  _BYTE v22[40]; // [rsp+90h] [rbp+2Fh] BYREF
  int Key; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *((_DWORD *)this + 526);
  if ( v2 == 8704 )
  {
    if ( (*((_DWORD *)this + 75) & 0x200) == 0 )
    {
LABEL_6:
      v3 = *((_DWORD *)this + 69);
      if ( v3 == 32902 || v3 == 4098 )
        *((_DWORD *)this + 1011) |= 0x40u;
      goto LABEL_9;
    }
    *((_BYTE *)this + 2413) = 1;
  }
  if ( v2 < 0x2000 )
    goto LABEL_22;
  if ( v2 < 9216 )
    goto LABEL_6;
LABEL_9:
  v4 = *((_DWORD *)this + 69);
  if ( v4 == 4098 || v4 == 4318 )
  {
    *((_DWORD *)this + 457) |= 0x40u;
  }
  else if ( v4 == 32902 && (*((_DWORD *)this + 457) & 0x40) != 0 )
  {
    Key = *((_DWORD *)this + 70);
    if ( bsearch(&Key, &unk_1C005BF50, 0x18uLL, 4uLL, UintCompareFunc) )
    {
      v5 = (const wchar_t *)*((_QWORD *)this + 177);
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
            *((_DWORD *)this + 457) &= ~0x40u;
        }
      }
    }
  }
LABEL_22:
  v8 = *((_DWORD *)this + 526);
  if ( v8 >= 9216 )
    *((_DWORD *)this + 457) |= 8u;
  if ( *((_DWORD *)this + 69) == 1297040209 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 2000 )
    {
      *((_DWORD *)this + 1011) |= 0x10u;
      v15 = L"PhoneSOCVersion";
      *(_DWORD *)&UnicodeString.Length = 0;
      UnicodeString.Buffer = 0LL;
      v13 = 0LL;
      v14 = 292;
      p_UnicodeString = &UnicodeString;
      v17 = 16777217;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0;
      memset(v22, 0, sizeof(v22));
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v13,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        *((_DWORD *)this + 1011) |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 1300 )
      *((_DWORD *)this + 1011) |= 0xBu;
    v8 = *((_DWORD *)this + 526);
    if ( v8 == 4608 )
    {
      *((_DWORD *)this + 1011) |= 4u;
      v8 = 4608;
    }
  }
  if ( v8 < 9216 )
  {
    v9 = *((_DWORD *)this + 69);
    if ( v9 == 4318 )
    {
      *((_DWORD *)this + 1011) |= 0x80u;
    }
    else if ( v9 == 32902 )
    {
      *((_DWORD *)this + 1011) |= 0x200u;
    }
  }
  DriverVersion = (unsigned int)DXGADAPTER::GetDriverVersion(this);
  DXGADAPTER::CheckBlockList(
    v11,
    *((_DWORD *)this + 69),
    *((_DWORD *)this + 70),
    *((const unsigned __int16 **)this + 177),
    DriverVersion);
  if ( (*((_DWORD *)this + 1011) & 0x100) != 0 )
    WdDiagNotifyUser(32LL, 9LL, 0LL, 0LL);
}
