/*
 * XREFs of PopAccountCbEnergyChange @ 0x140610D70
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

int PopAccountCbEnergyChange()
{
  __int64 *v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  const CHAR *v5; // r9
  const CHAR *v6; // rbx
  const CHAR *v7; // rdi
  const CHAR *v8; // rsi
  const CHAR *v9; // r14
  const CHAR *v10; // r15
  unsigned __int64 v11; // rax
  LPCSTR v12; // r10
  LPCSTR v13; // r11
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+90h] [rbp-78h]
  int v25; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C8h] [rbp-40h] BYREF
  __int128 *v30; // [rsp+D8h] [rbp-30h]
  int v31; // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E4h] [rbp-24h]
  int *v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+F0h] [rbp-18h]
  int v35; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+128h] [rbp+20h] BYREF
  int *v40; // [rsp+138h] [rbp+30h]
  int v41; // [rsp+140h] [rbp+38h]
  int v42; // [rsp+144h] [rbp+3Ch]
  unsigned int *v43; // [rsp+148h] [rbp+40h]
  int v44; // [rsp+150h] [rbp+48h]
  int v45; // [rsp+154h] [rbp+4Ch]
  int *v46; // [rsp+158h] [rbp+50h]
  int v47; // [rsp+160h] [rbp+58h]
  int v48; // [rsp+164h] [rbp+5Ch]
  __int64 *v49; // [rsp+168h] [rbp+60h]
  int v50; // [rsp+170h] [rbp+68h]
  int v51; // [rsp+174h] [rbp+6Ch]
  char *v52; // [rsp+178h] [rbp+70h]
  int v53; // [rsp+180h] [rbp+78h]
  int v54; // [rsp+184h] [rbp+7Ch]

  v0 = (__int64 *)qword_1403AA280;
  v1 = 0LL;
  *((_QWORD *)&v20 + 1) = 0LL;
  if ( (__int64 *)qword_1403AA280 != &qword_1403AA280 )
  {
    do
    {
      v1 += v0[25];
      v0 = (__int64 *)*v0;
    }
    while ( v0 != &qword_1403AA280 );
    *((_QWORD *)&v20 + 1) = v1;
  }
  v2 = qword_1403AA290;
  v3 = 0;
  LODWORD(v20) = 0;
  if ( (__int64 *)qword_1403AA290 != &qword_1403AA290 )
  {
    do
    {
      v3 |= *(_DWORD *)(v2 + 128);
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &qword_1403AA290 );
    LODWORD(v20) = v3;
  }
  if ( v3 != (_DWORD)xmmword_1403AA450 || v1 != *((_QWORD *)&xmmword_1403AA450 + 1) )
  {
    v4 = v1 - *((_QWORD *)&xmmword_1403AA450 + 1);
    xmmword_1403AA450 = v20;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v21 = v1;
      v15 = dword_1403AA274;
      v5 = "Energy Counter Unavailable";
      if ( (v3 & 1) == 0 )
        v5 = "-";
      *(_QWORD *)&v20 = v4;
      v6 = "Capacity Unavailable";
      v7 = "AC Power";
      v8 = "Battery Discharging";
      v9 = "Battery Charging";
      v10 = "Battery Critical";
      if ( (v3 & 8) == 0 )
        v6 = "-";
      if ( (unk_1403AA2A0 & 1) == 0 )
        v7 = "DC Power";
      if ( (unk_1403AA2A0 & 2) == 0 )
        v8 = "-";
      if ( (unk_1403AA2A0 & 4) == 0 )
        v9 = "-";
      if ( (unk_1403AA2A0 & 8) == 0 )
        v10 = "-";
      if ( HIDWORD(qword_1403AA2C0) )
        v11 = 100000 * (unsigned __int64)dword_1403AA2A4 / HIDWORD(qword_1403AA2C0);
      else
        LODWORD(v11) = 0;
      v25 = 0;
      v16 = v11;
      v17 = dword_1403AA2A4;
      v19 = qword_1403AA2A8;
      v23 = &v21;
      v18 = HIDWORD(qword_1403AA2C0);
      v24 = 8;
      TlgCreateSz(&pDesc, v5);
      TlgCreateSz(&v27, v12);
      TlgCreateSz(&v28, v13);
      TlgCreateSz(&v29, v6);
      v32 = 0;
      v35 = 0;
      v30 = &v20;
      v31 = 8;
      v33 = &v15;
      v34 = 4;
      TlgCreateSz(&v36, v7);
      TlgCreateSz(&v37, v8);
      TlgCreateSz(&v38, v9);
      TlgCreateSz(&v39, v10);
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v54 = 0;
      v43 = &v17;
      v46 = &v18;
      v49 = &v19;
      v52 = (char *)&v19 + 4;
      v40 = &v16;
      v41 = 4;
      v44 = 4;
      v47 = 4;
      v50 = 4;
      v53 = 4;
      LODWORD(v1) = TlgWrite(&pCallbackContext, &unk_14030ABDF, 0LL, 0LL, 0x12u, &pData);
    }
  }
  return v1;
}
