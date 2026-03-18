/*
 * XREFs of PopAccountCbEnergyChange @ 0x1405C9CE0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
  LPCSTR v11; // r10
  LPCSTR v12; // r11
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+C8h] [rbp-40h] BYREF
  __int128 *v29; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  int *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+128h] [rbp+20h] BYREF
  int *v39; // [rsp+138h] [rbp+30h]
  int v40; // [rsp+140h] [rbp+38h]
  int v41; // [rsp+144h] [rbp+3Ch]
  unsigned int *v42; // [rsp+148h] [rbp+40h]
  int v43; // [rsp+150h] [rbp+48h]
  int v44; // [rsp+154h] [rbp+4Ch]
  int *v45; // [rsp+158h] [rbp+50h]
  int v46; // [rsp+160h] [rbp+58h]
  int v47; // [rsp+164h] [rbp+5Ch]
  __int64 *v48; // [rsp+168h] [rbp+60h]
  int v49; // [rsp+170h] [rbp+68h]
  int v50; // [rsp+174h] [rbp+6Ch]
  char *v51; // [rsp+178h] [rbp+70h]
  int v52; // [rsp+180h] [rbp+78h]
  int v53; // [rsp+184h] [rbp+7Ch]

  v0 = (__int64 *)qword_140365920;
  v1 = 0LL;
  *((_QWORD *)&v19 + 1) = 0LL;
  if ( (__int64 *)qword_140365920 != &qword_140365920 )
  {
    do
    {
      v1 += v0[25];
      v0 = (__int64 *)*v0;
    }
    while ( v0 != &qword_140365920 );
    *((_QWORD *)&v19 + 1) = v1;
  }
  v2 = qword_140365930;
  v3 = 0;
  LODWORD(v19) = 0;
  if ( (__int64 *)qword_140365930 != &qword_140365930 )
  {
    do
    {
      v3 |= *(_DWORD *)(v2 + 128);
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &qword_140365930 );
    LODWORD(v19) = v3;
  }
  if ( v3 != (_DWORD)xmmword_140365AF0 || v1 != *((_QWORD *)&xmmword_140365AF0 + 1) )
  {
    v4 = v1 - *((_QWORD *)&xmmword_140365AF0 + 1);
    xmmword_140365AF0 = v19;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v20 = v1;
      v15 = dword_140365914;
      v5 = "Energy Counter Unavailable";
      if ( (v3 & 1) == 0 )
        v5 = "-";
      *(_QWORD *)&v19 = v4;
      v6 = "Capacity Unavailable";
      v7 = "AC Power";
      v8 = "Battery Discharging";
      v9 = "Battery Charging";
      v10 = "Battery Critical";
      if ( (v3 & 8) == 0 )
        v6 = "-";
      if ( (unk_140365940 & 1) == 0 )
        v7 = "DC Power";
      if ( (unk_140365940 & 2) == 0 )
        v8 = "-";
      if ( (unk_140365940 & 4) == 0 )
        v9 = "-";
      if ( (unk_140365940 & 8) == 0 )
        v10 = "-";
      if ( HIDWORD(qword_140365960) )
        v14 = 100000 * (unsigned __int64)dword_140365944 / HIDWORD(qword_140365960);
      else
        v14 = 0;
      v24 = 0;
      v16 = dword_140365944;
      v18 = qword_140365948;
      v22 = &v20;
      v17 = HIDWORD(qword_140365960);
      v23 = 8;
      TlgCreateSz(&pDesc, v5);
      TlgCreateSz(&v26, v11);
      TlgCreateSz(&v27, v12);
      TlgCreateSz(&v28, v6);
      v31 = 0;
      v34 = 0;
      v29 = &v19;
      v30 = 8;
      v32 = &v15;
      v33 = 4;
      TlgCreateSz(&v35, v7);
      TlgCreateSz(&v36, v8);
      TlgCreateSz(&v37, v9);
      TlgCreateSz(&v38, v10);
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v42 = &v16;
      v45 = &v17;
      v48 = &v18;
      v51 = (char *)&v18 + 4;
      v39 = &v14;
      v40 = 4;
      v43 = 4;
      v46 = 4;
      v49 = 4;
      v52 = 4;
      LODWORD(v1) = TlgWrite(&pCallbackContext, &unk_1402D10F3, 0LL, 0LL, 0x12u, &pData);
    }
  }
  return v1;
}
