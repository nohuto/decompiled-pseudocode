/*
 * XREFs of ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C0012984
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0110864 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

void __fastcall DXGVALIDATION::InitializeBootSettings(DXGVALIDATION *this)
{
  int v2; // eax
  bool v3; // zf
  bool v4; // al
  bool v5; // al
  int v6; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v7; // [rsp+3Ch] [rbp-CCh] BYREF
  int v8; // [rsp+40h] [rbp-C8h] BYREF
  int v9; // [rsp+44h] [rbp-C4h] BYREF
  int v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v12; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A8h]
  const wchar_t *v14; // [rsp+68h] [rbp-A0h]
  unsigned int *v15; // [rsp+70h] [rbp-98h]
  __int64 v16; // [rsp+78h] [rbp-90h]
  int *v17; // [rsp+80h] [rbp-88h]
  int v18; // [rsp+88h] [rbp-80h]
  __int64 v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+98h] [rbp-70h]
  const wchar_t *v21; // [rsp+A0h] [rbp-68h]
  int *v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+B0h] [rbp-58h]
  int *v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  __int64 v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  const wchar_t *v28; // [rsp+D8h] [rbp-30h]
  int *v29; // [rsp+E0h] [rbp-28h]
  int v30; // [rsp+E8h] [rbp-20h]
  int *v31; // [rsp+F0h] [rbp-18h]
  int v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  int v34; // [rsp+108h] [rbp+0h]
  const wchar_t *v35; // [rsp+110h] [rbp+8h]
  int *v36; // [rsp+118h] [rbp+10h]
  int v37; // [rsp+120h] [rbp+18h]
  int *v38; // [rsp+128h] [rbp+20h]
  int v39; // [rsp+130h] [rbp+28h]
  __int64 v40; // [rsp+138h] [rbp+30h]
  int v41; // [rsp+140h] [rbp+38h]
  const wchar_t *v42; // [rsp+148h] [rbp+40h]
  int *v43; // [rsp+150h] [rbp+48h]
  int v44; // [rsp+158h] [rbp+50h]
  int *v45; // [rsp+160h] [rbp+58h]
  int v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  int v48; // [rsp+178h] [rbp+70h]
  _BYTE v49[40]; // [rsp+180h] [rbp+78h] BYREF

  v14 = L"Level";
  LODWORD(v13) = 288;
  LODWORD(v16) = 67108868;
  v15 = &v7;
  v20 = 288;
  v18 = 4;
  v17 = &v6;
  v21 = L"FailEscapeDDI";
  v22 = &v8;
  v24 = &v6;
  v28 = L"FailRenderDDI";
  v29 = &v9;
  v31 = &v6;
  v35 = L"FailReserveGPUVA";
  v36 = &v10;
  v38 = &v6;
  v42 = L"ReportVirtualMachine";
  v43 = &v11;
  v23 = 67108868;
  v25 = 4;
  v27 = 288;
  v30 = 67108868;
  v32 = 4;
  v34 = 288;
  v37 = 67108868;
  v39 = 4;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v45 = &v6;
  v6 = 0;
  v12 = 0LL;
  v19 = 0LL;
  v26 = 0LL;
  v33 = 0LL;
  v40 = 0LL;
  v47 = 0LL;
  v48 = 0;
  memset(v49, 0, sizeof(v49));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Validation", &v12, 0LL, 0LL) >= 0 )
  {
    v2 = v7;
    if ( v7 >= 2 )
      v2 = 2;
    *(_DWORD *)this = v2;
    if ( v2 )
    {
      v3 = v9 == 1;
      *((_BYTE *)this + 4) = v8 == 1;
      v4 = v3;
      v3 = v10 == 1;
      *((_BYTE *)this + 5) = v4;
      v5 = v3;
      v3 = v11 == 1;
      *((_BYTE *)this + 6) = v5;
      *((_BYTE *)this + 7) = v3;
    }
  }
}
