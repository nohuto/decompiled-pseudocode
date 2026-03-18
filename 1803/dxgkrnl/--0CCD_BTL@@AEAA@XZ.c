/*
 * XREFs of ??0CCD_BTL@@AEAA@XZ @ 0x1C022727C
 * Callers:
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C02279A8 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 */

CCD_BTL *__fastcall CCD_BTL::CCD_BTL(CCD_BTL *this)
{
  bool v2; // bl
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+38h] [rbp-11h]
  const WCHAR *v6; // [rsp+40h] [rbp-9h]
  int *v7; // [rsp+48h] [rbp-1h]
  int v8; // [rsp+50h] [rbp+7h]
  int *v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+70h] [rbp+27h]
  _BYTE v13[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v14; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY(this, 8u, 0);
  v5 = 288;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v2 = 0;
  *((_DWORD *)this + 28) = 0;
  v14 = 0;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_BYTE *)this + 136) = 0;
  v6 = L"UnsupportedMonitorModesAllowed";
  v7 = &v14;
  v9 = &v15;
  v15 = 0;
  v4 = 0LL;
  v8 = 67108868;
  v10 = 4;
  v11 = 0LL;
  v12 = 0;
  memset(v13, 0, sizeof(v13));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v4, 0LL, 0LL) >= 0 )
    v2 = v14 != 0;
  *((_BYTE *)this + 136) = v2;
  return this;
}
